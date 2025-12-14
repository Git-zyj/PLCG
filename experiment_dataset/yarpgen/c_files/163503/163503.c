/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_6;
    var_16 = (-866135759 ? ((-1243284751 ? -var_0 : 1243284751)) : var_9);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = ((185766555 ? (1 % -1243284751) : 84007388));
                var_18 = arr_0 [i_0];
                arr_4 [i_0] [i_0] [i_0] = min(134, (min(-1, 1243284751)));
                var_19 = -893517789;
            }
        }
    }
    var_20 ^= (min((min(((var_1 ? var_10 : 1)), var_4)), var_3));
    var_21 = min(-1243284751, ((-((((-2147483647 - 1) >= -1243284751))))));
    #pragma endscop
}
