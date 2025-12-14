/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((((((min(var_5, var_7)) == var_1))) >= (((((-733466029 | -1) + 2147483647)) << ((((7 ? 255 : 0)) - 255)))))))));
    var_11 = (min((((var_0 ? (min(-1, var_2)) : -8))), var_5));
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = (((~var_8) ^ (var_3 ^ var_1)));
                var_14 = (max(var_14, 14));
                var_15 += (~(((1 > 37892) ? var_6 : var_5)));
            }
        }
    }
    #pragma endscop
}
