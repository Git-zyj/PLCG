/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184988
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
    var_20 |= ((/* implicit */signed char) (_Bool)1);
    var_21 |= var_12;
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))) : (var_7))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) arr_2 [i_0]))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 4) 
            {
                var_23 &= ((/* implicit */short) ((((((/* implicit */long long int) ((var_17) * (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1])))))) == (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_2])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ? (min((((/* implicit */long long int) arr_8 [i_0] [8] [i_2 - 3] [i_2])), (min((var_13), (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_2 - 1]))))));
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_14))));
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) + (min((((/* implicit */unsigned int) ((unsigned short) var_6))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_18)))))));
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 2) 
                    {
                        {
                            arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_3]);
                            arr_17 [i_0] [i_1] [i_0] [i_2] [i_2 - 3] [i_1] [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (var_2)))) ? (((arr_12 [i_3] [i_3] [i_3] [i_3] [i_3]) ? (min((arr_7 [i_2] [i_4] [(unsigned char)9] [i_4]), (((/* implicit */long long int) arr_14 [i_3] [(_Bool)1] [(_Bool)1] [i_1] [i_4])))) : (((/* implicit */long long int) ((var_17) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4])))))))) : (((/* implicit */long long int) var_2))));
                            arr_18 [i_1] [i_2] [i_3] [i_2] [i_1] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((((/* implicit */int) min((arr_13 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0]), (((/* implicit */short) (_Bool)1))))) + (2147483647))) >> ((((~(((/* implicit */int) arr_10 [i_1] [i_2] [i_1] [i_1])))) + (44095)))))))) : (((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((((/* implicit */int) min((arr_13 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0]), (((/* implicit */short) (_Bool)1))))) + (2147483647))) >> ((((((~(((/* implicit */int) arr_10 [i_1] [i_2] [i_1] [i_1])))) + (44095))) + (17770))))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                var_25 = ((/* implicit */short) arr_3 [i_0]);
                var_26 += ((/* implicit */unsigned int) ((signed char) arr_8 [i_0] [i_1] [(unsigned short)8] [(_Bool)1]));
            }
            var_27 -= ((/* implicit */signed char) arr_14 [i_1] [i_1] [i_0] [i_0] [i_0]);
            arr_21 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) 549755811840LL);
        }
        for (unsigned int i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            arr_24 [i_0] = ((/* implicit */unsigned char) arr_20 [i_0] [i_6] [i_6] [i_6 + 1]);
            arr_25 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_19 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            arr_30 [i_0] [i_7] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (arr_28 [1])))) ? (((/* implicit */int) ((unsigned short) var_13))) : (((/* implicit */int) arr_8 [i_0] [i_7] [i_7] [i_7]))))) == (arr_11 [i_7] [4ULL])));
            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) -7457089484695572441LL))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            arr_34 [i_0] [i_8] [i_8] = ((((/* implicit */_Bool) arr_23 [i_0] [i_8])) ? (var_13) : (((((/* implicit */_Bool) arr_19 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_8]))) : (var_13))));
            arr_35 [i_0] [i_8] = ((/* implicit */unsigned long long int) (~(var_7)));
            arr_36 [i_8] [i_0] [i_0] = ((/* implicit */int) ((arr_32 [i_8] [i_8] [i_0]) || ((!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_8] [i_0]))))));
        }
        var_29 += ((/* implicit */_Bool) arr_33 [i_0] [(short)11] [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
    {
        var_30 ^= ((/* implicit */int) (signed char)-116);
        arr_40 [i_9] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_39 [i_9]))) != (var_13)));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (short)32767))));
        arr_43 [i_10] [i_10] = var_0;
    }
}
