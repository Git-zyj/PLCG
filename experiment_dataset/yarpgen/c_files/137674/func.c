/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137674
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
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 4])) : (((/* implicit */int) arr_1 [i_0])))))))) >> (((((/* implicit */int) ((unsigned short) arr_1 [i_0 + 3]))) - (80))));
        var_17 = arr_1 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((arr_8 [i_1] [i_1 - 1] [i_1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_1] [i_1 - 1] [i_1])))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            var_19 = ((((/* implicit */_Bool) (unsigned short)30246)) ? (((/* implicit */int) (unsigned short)18514)) : (((/* implicit */int) arr_5 [i_4 - 2])));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 4]))) : (((arr_7 [i_0] [i_1] [i_0] [i_3] [i_4]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25490)))))));
                            var_21 *= ((/* implicit */_Bool) var_10);
                            var_22 += ((/* implicit */unsigned char) var_6);
                        }
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        var_23 = ((((/* implicit */_Bool) ((arr_10 [i_0] [i_1] [i_2] [i_2] [i_5] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35290)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_7 [i_0] [i_1] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_4 [i_5] [i_1 + 1] [i_0]))))));
                        var_24 = ((/* implicit */int) var_8);
                        var_25 = ((/* implicit */unsigned short) max((((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)35290))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_1 - 1] [i_1] [i_0 - 1])) || (((/* implicit */_Bool) arr_13 [15ULL] [i_0] [i_0] [i_1] [i_1 - 1] [i_2] [i_1])))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned int) arr_10 [i_1] [i_6] [i_1 - 1] [i_1 - 1] [i_0] [i_1]);
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_27 = (-(var_14));
                            var_28 ^= ((/* implicit */short) ((unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) var_14)) : (max((arr_7 [i_0 + 2] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)208)))))));
                        }
                        var_29 = ((/* implicit */short) ((unsigned short) arr_2 [i_0] [i_1] [i_0 - 1]));
                    }
                    var_30 = ((/* implicit */int) arr_5 [i_0 + 1]);
                }
            } 
        } 
        var_31 = ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (long long int i_8 = 0; i_8 < 17; i_8 += 4) 
    {
        var_32 -= ((/* implicit */unsigned long long int) var_12);
        arr_26 [i_8] [i_8] = ((/* implicit */_Bool) ((int) var_11));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_33 += ((/* implicit */_Bool) (+(((((2222447961064096171LL) + (((/* implicit */long long int) ((/* implicit */int) var_13))))) + (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
        arr_29 [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_20 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_9] [i_9] [i_9] [i_9]))) : (var_2))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_9] [i_9])))))))) ? (min((((((/* implicit */_Bool) arr_7 [i_9] [i_9] [i_9] [i_9] [i_9])) ? (var_5) : (((/* implicit */unsigned int) arr_13 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))), (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) 445299363))));
        arr_30 [i_9] = ((/* implicit */int) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_9] [i_9] [i_9]))))) - (((/* implicit */int) arr_11 [i_9])))));
    }
    var_34 = ((/* implicit */unsigned short) ((int) var_9));
    var_35 |= ((/* implicit */unsigned short) min((((unsigned long long int) (+(((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((_Bool)1), (var_8)))))))));
}
