/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150252
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_13 ^= arr_6 [i_0] [i_0] [i_0 + 1] [i_0];
                                var_14 = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [11] [i_1])) ? (((/* implicit */unsigned int) var_1)) : (695656513U)))) / (var_0)))));
                                var_15 ^= 3599310783U;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 2) 
                        {
                            {
                                var_16 = ((9223372036854775807LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (3599310783U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-20136)))))))));
                                arr_17 [i_1] [i_1] [(signed char)14] [i_1] = ((/* implicit */unsigned short) ((arr_7 [(signed char)6]) / (arr_7 [i_0 + 1])));
                                arr_18 [i_6] [i_6] [i_2] [i_5] [i_6 + 1] [13ULL] |= ((/* implicit */unsigned long long int) 695656491U);
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) 11075908604864747721ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */unsigned int) (+(var_10)));
    var_19 = ((/* implicit */signed char) var_11);
}
