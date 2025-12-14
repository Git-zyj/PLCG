/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = min((((arr_0 [i_1 + 2] [i_1 + 2]) ? (1 >= 1) : (min(var_13, 120)))), 0);
                var_21 = ((-((-(var_9 <= var_4)))));
            }
        }
    }
    var_22 = ((((-2147483647 & ((max(var_1, -2177))))) >> (var_3 + 6825)));
    #pragma endscop
}
