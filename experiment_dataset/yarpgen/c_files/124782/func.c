/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124782
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
    var_11 = ((/* implicit */signed char) ((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    var_12 = ((/* implicit */signed char) ((var_4) | (((/* implicit */unsigned long long int) var_1))));
    var_13 = ((/* implicit */signed char) var_5);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) arr_4 [i_0] [9ULL] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 4; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_12 [i_4] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) arr_5 [i_1 + 1]))))) || (((/* implicit */_Bool) arr_5 [i_1 + 1]))));
                                var_15 |= ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((4095LL) / (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_10)) : (arr_10 [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
                }
            } 
        } 
    } 
    var_16 ^= var_5;
}
