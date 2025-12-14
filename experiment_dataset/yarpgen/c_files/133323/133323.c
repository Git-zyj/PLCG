/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~((7574 << (var_6 - 4000671991062359343))));
    var_12 = ((var_6 * (min(var_7, (max(var_3, var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (-30698 >= 18820);
                var_14 ^= (arr_1 [i_0]);
                var_15 = arr_1 [i_0];
                var_16 = (min((max((min((arr_1 [i_0]), (arr_3 [18]))), 4814)), (arr_1 [i_0])));
            }
        }
    }
    var_17 = ((var_10 ? var_9 : var_9));
    #pragma endscop
}
