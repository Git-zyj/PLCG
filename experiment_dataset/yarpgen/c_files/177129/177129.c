/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_5, ((((max(var_15, var_13))) ? (!var_10) : -70368744177662))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (min(var_18, (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_20 ^= (((((-73 ? -1 : 18446673704965373960))) ? -73 : ((((var_15 ? -1 : var_3))))));
                        arr_14 [i_0] [i_0] [i_1] = (((~(~86))));
                        var_21 ^= (((max((max(16, 70368744177675)), var_12)) >> ((((!var_4) > 72)))));
                        var_22 = (((((var_1 ? (arr_2 [i_2]) : ((min(20, var_6)))))) ? (arr_12 [i_0] [i_1 + 1] [i_2] [i_3]) : (((var_14 ? var_15 : (!77))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
    {
        var_23 ^= 63;
        var_24 -= ((+(((arr_16 [i_4]) ? (arr_6 [i_4] [i_4]) : -25563))));
        var_25 = (((!67108863) != (-42 < var_13)));
    }
    var_26 = var_16;
    var_27 = ((((max(var_12, var_16))) ? ((((!125) == var_16))) : 7));
    #pragma endscop
}
