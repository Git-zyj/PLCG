/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109271
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
    var_15 += ((/* implicit */long long int) ((unsigned int) var_7));
    var_16 = ((/* implicit */signed char) var_7);
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) var_5)))))), (18446744073709551604ULL)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_3 [i_0])))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (17098317446955344419ULL)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [(short)3]);
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                            {
                                var_20 -= ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_11 [i_0] [9ULL] [i_2 + 2] [i_4])), (((long long int) (+(((/* implicit */int) arr_2 [i_0])))))));
                                arr_16 [i_0] [i_1] = ((/* implicit */short) max(((-(arr_8 [i_2 + 1] [i_2 + 2] [i_2 + 2]))), (min((arr_8 [i_2 + 1] [i_2 + 4] [i_2 + 4]), (arr_8 [i_2 + 3] [i_2 + 4] [i_2 + 3])))));
                                var_21 -= ((/* implicit */signed char) arr_5 [i_1]);
                                var_22 &= ((/* implicit */unsigned char) ((((var_1) / (((/* implicit */unsigned long long int) -928908687)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 3]))))));
                                var_23 ^= ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) -5391289651289553358LL)), (arr_10 [i_4]))));
                            }
                            for (unsigned short i_5 = 2; i_5 < 14; i_5 += 3) 
                            {
                                var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((-5391289651289553329LL), (((/* implicit */long long int) 4294967295U))))) ? ((-(arr_8 [i_2 + 2] [i_2 + 4] [i_5 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [(signed char)5] [(unsigned char)13] [(unsigned short)0] [i_5 + 3])))));
                                var_25 = ((/* implicit */long long int) arr_0 [i_3] [1U]);
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_19 [i_5 + 2] [i_5 - 1] [i_3] [i_2 + 1] [i_2 - 1] [2ULL])), (195006357050832449ULL)))) ? (((((/* implicit */long long int) arr_6 [(short)2] [i_2 + 3])) % (min((((/* implicit */long long int) var_12)), (5391289651289553362LL))))) : (((/* implicit */long long int) 527693886U))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
