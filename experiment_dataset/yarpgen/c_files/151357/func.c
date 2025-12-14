/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151357
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
    var_11 = ((/* implicit */unsigned char) (signed char)-89);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (-(var_0)));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2] [(unsigned char)3] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned short) (signed char)-109));
                                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1]))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1] = ((/* implicit */signed char) ((1ULL) ^ (16308720635539600799ULL)));
                    arr_16 [i_1] [2ULL] [i_2] [i_1] = ((/* implicit */unsigned char) ((long long int) 18446744073709551600ULL));
                    arr_17 [(signed char)2] |= ((/* implicit */unsigned short) arr_4 [i_1 - 1]);
                }
            } 
        } 
    }
    for (unsigned char i_5 = 2; i_5 < 23; i_5 += 2) 
    {
        arr_21 [i_5 + 2] = ((/* implicit */int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_1)))))))));
        arr_22 [i_5] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81))) : (0ULL)));
        arr_23 [i_5] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)31539)) - (((/* implicit */int) (short)22858))));
    }
    for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        arr_28 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((unsigned long long int) arr_18 [i_6]))))) && (((/* implicit */_Bool) arr_27 [i_6]))));
        arr_29 [i_6] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_26 [(unsigned short)8] [i_6]))))))), (((((/* implicit */_Bool) (-(4109792364642858306LL)))) ? (1ULL) : (((/* implicit */unsigned long long int) 1U))))));
        arr_30 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-(9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_26 [i_6] [i_6])), (arr_24 [i_6])))) ? (var_0) : ((-(((/* implicit */int) arr_27 [i_6]))))))) : ((((+(13U))) / (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) arr_24 [i_6])) : (((/* implicit */int) arr_25 [i_6])))))))));
    }
}
