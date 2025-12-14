/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147433
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
    var_14 *= max(((unsigned short)24331), (((/* implicit */unsigned short) (short)-9759)));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 20; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 3; i_3 < 19; i_3 += 4) 
                    {
                        arr_12 [i_0] [17U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) arr_2 [i_1 + 3] [14]));
                        var_15 += ((/* implicit */_Bool) var_6);
                        arr_13 [i_0] [i_1 - 1] [i_2] [i_3] = ((/* implicit */long long int) var_8);
                        var_16 = var_7;
                        var_17 = ((/* implicit */unsigned short) var_5);
                    }
                    for (long long int i_4 = 1; i_4 < 22; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_10)), (min((((/* implicit */unsigned long long int) arr_9 [i_1 - 2])), (max((((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [20LL] [i_2] [i_4])), (var_13)))))));
                            var_19 = ((/* implicit */short) min((((/* implicit */long long int) arr_5 [i_0] [i_4 - 1] [i_5 - 1])), (6068649842738904810LL)));
                            var_20 = ((/* implicit */signed char) min((13662753549225176329ULL), (4783990524484375286ULL)));
                        }
                        /* vectorizable */
                        for (short i_6 = 2; i_6 < 20; i_6 += 3) 
                        {
                            var_21 += ((/* implicit */_Bool) 2147483645);
                            arr_23 [i_0] [i_0] [i_1] [i_1] [i_0] [i_4 - 1] [(signed char)2] = ((/* implicit */signed char) (_Bool)1);
                        }
                        var_22 = ((/* implicit */unsigned short) var_4);
                        var_23 = ((/* implicit */int) var_6);
                        arr_24 [i_2] [i_2] [i_2] [i_1] [i_2] &= ((/* implicit */unsigned int) var_3);
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4783990524484375286ULL)) ? (min((((((/* implicit */_Bool) 11838824154042280638ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_8))), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254)))));
                    }
                    var_25 = ((/* implicit */int) var_2);
                    var_26 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned char)109)), (max((((/* implicit */unsigned long long int) arr_0 [i_1 - 2] [i_2])), (var_5)))));
                    var_27 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) min((var_7), ((unsigned char)23)))), (min((arr_0 [i_1 - 1] [i_2]), (((/* implicit */unsigned short) var_0))))));
                }
                var_28 |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) 4294967291U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) : (6068649842738904810LL))), (((/* implicit */long long int) min((max((1498177288), (((/* implicit */int) (unsigned char)233)))), (((((/* implicit */_Bool) 1993784984)) ? (((/* implicit */int) (short)11328)) : (((/* implicit */int) (signed char)122)))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) max((var_2), (((/* implicit */short) (unsigned char)109))))), (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_5)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_7 = 1; i_7 < 13; i_7 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            var_30 = ((/* implicit */unsigned char) arr_16 [0U] [i_8] [i_7 + 2] [0U]);
            var_31 = ((/* implicit */_Bool) arr_21 [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_8]);
            arr_30 [i_7] [i_8] [(unsigned char)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_7] [i_8] [i_7] [i_7 + 3] [i_8 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (arr_22 [14LL] [i_8 + 1] [i_7] [i_7 + 3] [i_8 + 1])));
            var_32 = ((/* implicit */unsigned long long int) 3660871108U);
            var_33 = ((/* implicit */int) arr_14 [i_7] [(unsigned short)20]);
        }
        arr_31 [i_7] = ((/* implicit */unsigned short) arr_16 [(unsigned short)6] [16U] [10ULL] [i_7]);
        arr_32 [i_7] = ((/* implicit */signed char) arr_26 [i_7 + 2]);
        var_34 |= ((/* implicit */unsigned long long int) 4294967291U);
    }
    for (unsigned int i_9 = 4; i_9 < 13; i_9 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */signed char) -4011653647085363249LL);
            arr_38 [(signed char)9] [i_9] [i_9 - 4] = ((/* implicit */int) min((((/* implicit */long long int) max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)85))))), (max((((/* implicit */long long int) var_11)), (arr_9 [i_9 - 4])))));
            arr_39 [i_9] = ((/* implicit */unsigned int) max((max((arr_34 [i_9] [i_10]), (((/* implicit */long long int) var_10)))), (arr_22 [(_Bool)1] [i_10] [i_9 + 3] [i_9 + 1] [i_9 + 3])));
        }
        /* vectorizable */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned long long int) (_Bool)1);
            var_37 |= ((/* implicit */int) (short)-18894);
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 4) 
        {
            var_38 += ((/* implicit */_Bool) var_7);
            var_39 = ((/* implicit */unsigned int) ((signed char) -1993784987));
        }
        for (unsigned int i_13 = 2; i_13 < 15; i_13 += 2) 
        {
            var_40 *= ((/* implicit */unsigned short) var_11);
            arr_47 [i_9 - 4] [(unsigned short)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_2)) ? (arr_40 [i_9 + 3] [i_9 + 3] [i_9 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24977)))))));
            var_41 = ((/* implicit */int) var_12);
            var_42 &= var_10;
        }
        var_43 = ((/* implicit */int) (unsigned char)146);
    }
}
