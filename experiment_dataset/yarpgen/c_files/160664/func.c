/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160664
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_16) & (var_16))))))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) arr_0 [i_0]);
        var_22 ^= ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        var_23 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [(short)0] [i_1])) && (((/* implicit */_Bool) arr_1 [i_1]))));
        var_24 = ((/* implicit */unsigned long long int) var_1);
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_25 = ((/* implicit */int) ((arr_8 [i_2] [i_2]) >= (arr_8 [i_2] [i_2])));
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((arr_8 [i_2] [i_2]) * (arr_8 [i_2] [i_2]))))));
        var_27 = ((/* implicit */long long int) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(_Bool)1] [(_Bool)1])))))));
        var_28 = ((/* implicit */unsigned long long int) ((unsigned char) (+(arr_7 [14ULL]))));
        var_29 = ((/* implicit */signed char) var_8);
    }
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned short) 0ULL);
        /* LoopSeq 4 */
        for (unsigned long long int i_4 = 2; i_4 < 14; i_4 += 2) 
        {
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_9 [i_4 - 1] [i_4]))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_13 [i_3] [i_4 - 1]), (arr_13 [i_3] [i_4 - 1])))))));
            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((unsigned long long int) ((long long int) arr_10 [i_3] [i_3]))))));
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                var_32 = ((/* implicit */_Bool) var_9);
                arr_18 [i_5] = ((/* implicit */long long int) ((unsigned int) arr_7 [i_4]));
            }
        }
        for (short i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_9 [i_3] [i_3]))) ? (((/* implicit */int) arr_9 [i_3] [i_6])) : (((/* implicit */int) arr_9 [i_3] [i_6]))));
            arr_23 [i_6] = ((/* implicit */long long int) arr_22 [i_3]);
            var_34 = ((/* implicit */_Bool) arr_14 [12LL]);
            var_35 = ((/* implicit */unsigned int) arr_13 [5] [i_3]);
        }
        for (unsigned int i_7 = 2; i_7 < 14; i_7 += 2) 
        {
            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_16 [i_7 + 1] [i_7 - 2] [i_7 - 1]), (arr_16 [i_7 + 2] [i_7] [i_7 - 1])))) ? (max((arr_16 [i_7 - 1] [i_7] [i_7 + 1]), (arr_16 [i_7 - 1] [i_7] [i_7 - 1]))) : (max((arr_16 [i_7 - 1] [i_7] [i_7 + 2]), (arr_16 [i_7 - 2] [i_7] [i_7 + 2])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned int i_10 = 1; i_10 < 15; i_10 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_7 + 1]))));
                            var_38 *= ((short) var_0);
                        }
                    } 
                } 
                arr_35 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) arr_10 [i_8] [i_7 - 2]);
            }
            arr_36 [i_3] [i_7 + 1] &= ((((((arr_33 [i_3] [i_7 + 2] [i_3] [i_7] [i_3] [i_3] [i_3]) + (2147483647))) << (((((((/* implicit */int) var_11)) + (57))) - (14))))) << (((((max((arr_33 [i_7] [i_7 - 2] [i_3] [i_7 + 1] [i_3] [i_3] [i_3]), (arr_33 [(_Bool)1] [i_7 + 1] [(_Bool)1] [i_3] [i_7] [i_3] [i_3]))) + (1992512084))) - (10))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (+((-(arr_26 [i_11] [i_11] [i_11] [i_3]))))))));
            var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) max((1718220590265425201LL), (((/* implicit */long long int) (unsigned short)51654)))))));
        }
        /* LoopSeq 2 */
        for (long long int i_12 = 2; i_12 < 15; i_12 += 1) 
        {
            var_41 = ((/* implicit */int) ((short) min((((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_12] [i_3] [i_3]))))), (((/* implicit */unsigned int) ((_Bool) arr_34 [i_3] [i_3]))))));
            var_42 = ((/* implicit */unsigned char) arr_37 [i_3] [i_3] [i_12]);
            var_43 = ((/* implicit */unsigned int) arr_34 [(short)4] [i_12]);
        }
        for (short i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            arr_47 [i_3] = ((/* implicit */unsigned long long int) (+(arr_8 [i_3] [i_3])));
            var_44 = ((/* implicit */unsigned int) arr_20 [(unsigned char)7] [i_3] [i_3]);
        }
    }
    var_45 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (var_6)));
}
