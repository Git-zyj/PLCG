/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141181
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
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_2 [i_1 + 1]), (arr_2 [i_0 - 1]))))));
                    var_15 *= ((/* implicit */long long int) min((((((((/* implicit */int) arr_3 [i_2] [i_2 + 3])) + (2147483647))) << (((((var_12) + (1927922981))) - (21))))), (((arr_5 [i_2 + 3] [i_1 + 1] [i_0 - 1]) % (arr_5 [i_2 + 1] [i_1 - 1] [i_0 + 1])))));
                    var_16 = ((/* implicit */short) arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))));
}
