/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137073
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_20 *= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_11) : (var_15)))) ? ((~(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(8294413325070973557LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned int) -436554043)) : (var_5))))))))));
        var_21 = max(((((_Bool)0) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) 3433313478U)))), (((/* implicit */long long int) arr_0 [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((((((/* implicit */int) arr_2 [i_1])) > (((/* implicit */int) var_3)))) || (((/* implicit */_Bool) var_12)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            arr_10 [i_2 + 1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) << (((var_11) - (2076885398U)))));
            arr_11 [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -1)) != (2737927646U))))) & (3070818894147802605LL)));
            var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_2 + 3])) & (-6)));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_17 [(signed char)6] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) 1265729931)) : (var_2)))) ? (((/* implicit */int) arr_2 [i_4])) : (((((/* implicit */int) arr_1 [9U])) << (((((/* implicit */int) arr_16 [i_2] [i_1])) - (9350)))))));
                        var_24 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3])) || (((/* implicit */_Bool) arr_4 [i_1]))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            arr_20 [i_1] [i_2] [i_2 + 3] = ((((/* implicit */_Bool) 861653817U)) ? (((((/* implicit */int) (unsigned char)255)) / (-1358680942))) : (((/* implicit */int) (_Bool)0)));
                            var_25 *= ((/* implicit */unsigned int) ((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48956)))));
                            arr_21 [i_1] [14U] [i_2 + 1] [i_3] [14U] [(signed char)6] [14U] = ((((/* implicit */_Bool) ((arr_3 [(signed char)2]) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) var_18))))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))));
                        }
                        arr_22 [i_1] [i_1] [i_2] [i_3] [i_4] [i_1] = (-(var_14));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
    {
        arr_27 [i_6] = ((/* implicit */int) ((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_8))) - (((1557039647U) - (133955584U))))) << (((((((/* implicit */_Bool) -21)) ? (3800636692U) : (2187204839U))) - (3800636689U)))));
        arr_28 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_6] [(_Bool)1])) | (((((/* implicit */int) var_13)) * (((/* implicit */int) arr_2 [i_6]))))));
        var_26 = ((/* implicit */_Bool) max((((((/* implicit */int) arr_26 [i_6] [i_6])) - (((/* implicit */int) arr_26 [i_6] [i_6])))), (((/* implicit */int) ((min((((/* implicit */unsigned int) (_Bool)0)), (133955584U))) >= (((((/* implicit */_Bool) var_17)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [14U]))))))))));
    }
    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */_Bool) var_12);
        arr_32 [2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_24 [i_7])), (var_5))) & ((+(var_14)))))) && (((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_15))))));
    }
    /* LoopSeq 1 */
    for (short i_8 = 0; i_8 < 24; i_8 += 1) 
    {
        arr_36 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_8])) & (((/* implicit */int) arr_33 [(short)3] [i_8]))))) || ((!(arr_35 [i_8])))));
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                {
                    arr_43 [i_10] [i_10] [i_10] [i_8] = ((/* implicit */signed char) ((var_16) > (((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_8])) + (((/* implicit */int) var_7))))) ? (((var_11) >> (((var_9) + (5160631937830533443LL))))) : (861653833U)))));
                    arr_44 [i_8] [i_8] [i_10] [i_10] = ((/* implicit */_Bool) arr_41 [i_8]);
                }
            } 
        } 
        arr_45 [i_8] = ((((var_1) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) && (((((/* implicit */int) var_7)) > (((/* implicit */int) arr_33 [i_8] [i_8])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_11 = 3; i_11 < 21; i_11 += 4) 
        {
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((0) / (((/* implicit */int) arr_35 [i_11]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (4194869443U) : (var_17)))) : (((((/* implicit */_Bool) var_17)) ? (-5274488066927444602LL) : (((/* implicit */long long int) 50)))))))));
            var_29 = ((/* implicit */unsigned short) ((arr_42 [i_11] [i_11]) | (((/* implicit */unsigned int) arr_37 [i_8] [i_11]))));
            arr_49 [i_11] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_42 [i_11] [i_11])) >= (var_9))))) >= ((+(var_0)))));
        }
    }
    var_30 = ((/* implicit */unsigned int) var_18);
}
