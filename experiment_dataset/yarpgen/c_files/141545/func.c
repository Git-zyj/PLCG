/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141545
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
    var_19 = var_14;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), ((signed char)0)));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
                                arr_17 [i_1] [6LL] [i_1 + 2] [(signed char)4] = ((/* implicit */short) ((long long int) var_16));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
