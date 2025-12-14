/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170257
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_9 [15LL] [9] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (short)0)), (-2060357019)))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_6 [i_0] [(signed char)12] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? ((~(((/* implicit */int) (short)-1)))) : (((((/* implicit */int) arr_4 [i_0] [i_0 - 1] [(unsigned char)0])) ^ (((/* implicit */int) arr_5 [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_16 [i_2] [i_1] [i_2] [i_3] &= ((/* implicit */int) ((max(((~(arr_12 [(unsigned char)6] [i_1] [i_1] [i_2] [i_3] [i_3] [i_4]))), (((/* implicit */long long int) arr_13 [i_0 + 2] [i_0] [i_2] [i_2] [i_4])))) | (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 1306455146)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (short)0))))))));
                                var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0 + 2] [i_0 + 2])), (8966592449033891744ULL)))) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) 1306455146)))))));
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)16396))) && (((/* implicit */_Bool) arr_4 [i_1] [i_3] [i_4]))));
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */unsigned long long int) (signed char)-20);
    var_17 = ((/* implicit */short) var_4);
    var_18 ^= ((/* implicit */signed char) ((min(((!(((/* implicit */_Bool) -1306455147)))), ((!(((/* implicit */_Bool) var_4)))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
}
