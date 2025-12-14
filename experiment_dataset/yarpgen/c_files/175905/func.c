/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175905
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((((((var_0) / (((/* implicit */int) (unsigned short)43588)))) >= (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (max((0LL), (((/* implicit */long long int) (unsigned char)125)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    var_16 = ((/* implicit */unsigned short) var_3);
                    var_17 = ((/* implicit */unsigned short) (signed char)1);
                    var_18 = ((/* implicit */int) var_5);
                }
                for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (unsigned short)21935))));
                        var_20 = ((/* implicit */int) var_7);
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_2)))))));
                    }
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)29043)) || (((/* implicit */_Bool) 104835203U))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (max((18446744073709551606ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 - 2] [i_4 + 3]))))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 4; i_7 < 9; i_7 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) (signed char)30);
                        var_25 = ((/* implicit */int) var_15);
                    }
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        var_26 = ((/* implicit */short) max((((var_1) >> (((((/* implicit */int) var_5)) + (101))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)13)), ((unsigned char)218))))));
                        var_27 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_8] [i_4] [i_4])) ? (((((((/* implicit */int) var_6)) + (2147483647))) << (((((/* implicit */int) var_9)) - (37))))) : (((/* implicit */int) min((((/* implicit */signed char) var_4)), (var_2)))))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 2] [i_4 + 2] [i_0 + 2]))) < (arr_23 [i_4] [i_4 + 4] [i_2]))))));
                        var_28 *= ((/* implicit */unsigned long long int) var_14);
                    }
                    var_29 = ((/* implicit */_Bool) 12640069884781421365ULL);
                    var_30 *= ((/* implicit */_Bool) var_13);
                }
                arr_24 [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_22 [i_0]), (var_13))))) <= (min((((/* implicit */unsigned int) var_11)), (((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
            }
            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))) - (((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) arr_11 [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (arr_9 [i_0])))));
            var_32 ^= arr_7 [i_0];
            arr_25 [i_1] = ((/* implicit */short) var_15);
            var_33 = ((((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) << (((1543907353U) - (1543907339U))))) | (((/* implicit */int) (unsigned short)22007)));
        }
        for (signed char i_9 = 2; i_9 < 10; i_9 += 3) 
        {
            var_34 += ((/* implicit */unsigned long long int) 1543907348U);
            arr_28 [i_0 + 2] [i_9] [i_9] = ((/* implicit */_Bool) min(((signed char)84), (((/* implicit */signed char) (_Bool)1))));
            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((2751059943U) * (arr_10 [i_0] [i_9] [i_9] [i_9] [i_0] [i_9])))) ? (1543907370U) : (((2751059948U) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) var_11)))))));
            arr_29 [i_9] = ((/* implicit */unsigned char) ((-1556395423432780462LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12)))));
        }
        var_36 = ((/* implicit */unsigned short) -7165809578559555285LL);
    }
    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */signed char) var_10)))))));
}
