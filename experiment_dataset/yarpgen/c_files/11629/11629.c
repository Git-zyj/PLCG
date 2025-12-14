/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = min((var_3 / var_8), (max(4469599705252280499, var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 |= (max(((var_10 - ((560462029981231831 ? -54 : 66)))), (!var_10)));
                var_14 = (min(var_14, 17102));
                var_15 = (((((((var_2 ? var_8 : 1672239197))) || ((((arr_2 [i_1] [i_1] [i_0]) ? var_0 : 53))))) || (((((var_8 ? var_5 : var_9))) || (var_2 && var_3)))));
            }
        }
    }
    #pragma endscop
}
