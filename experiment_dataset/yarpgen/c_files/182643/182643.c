/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = ((!(!288147628)));
                var_21 ^= var_8;
                var_22 = (min(((var_2 ? 6146 : var_11)), (((196 > var_15) | var_5))));
                var_23 = ((((max((var_17 | var_3), (~6)))) ? (arr_1 [9]) : var_15));
            }
        }
    }
    var_24 = max((((!((max(var_12, 111)))))), (max(((2147483647 >> (-1 + 25))), 55679)));
    #pragma endscop
}
