/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-((59188 << ((((57344 ? 59206 : 59206)) - 59192))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_0] = 6341;
                var_18 = min((((arr_0 [i_0] [i_1]) ? 6322 : (arr_0 [i_0] [11]))), (var_7 * -var_9));
            }
        }
    }
    var_19 += (min(6327, (((((var_9 ? var_2 : var_6))) ? var_1 : var_9))));
    var_20 = ((var_0 ? var_15 : (((255 ? 59195 : var_6)))));
    #pragma endscop
}
