/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10531
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
    var_13 |= ((/* implicit */unsigned long long int) (_Bool)1);
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_7)) : (min((((/* implicit */long long int) var_10)), (-1LL)))))) && (((/* implicit */_Bool) max(((-(-1LL))), (max((-1LL), (((/* implicit */long long int) var_10)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0])) ? (min((arr_6 [i_0 - 1] [i_0]), (((/* implicit */unsigned long long int) (signed char)-105)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */short) (signed char)89))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1 - 1] [0ULL] [i_3] [i_0] = (-(((-8657537875595103504LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 1; i_4 < 24; i_4 += 2) 
                        {
                            arr_14 [i_0] [i_2] [i_4 + 1] [i_3] [(short)4] [(unsigned short)12] [i_3] &= ((/* implicit */unsigned short) arr_4 [i_2]);
                            arr_15 [i_0 - 1] [i_4 + 1] [i_2] [i_0] [i_4 + 1] [22U] = ((/* implicit */unsigned int) (+((-(arr_4 [i_0])))));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        var_16 = ((/* implicit */signed char) ((unsigned long long int) arr_19 [i_0] [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_2]));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [22])))))));
                        arr_20 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2ULL)) ? (arr_19 [i_0] [i_0 - 1] [i_1] [i_1 - 1] [i_1 - 1]) : (arr_19 [i_0] [i_0 - 1] [i_0] [i_1 + 1] [i_1 + 1])));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        arr_24 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */unsigned int) var_5);
                        var_18 = ((/* implicit */long long int) arr_13 [i_1]);
                    }
                }
            } 
        } 
    } 
}
