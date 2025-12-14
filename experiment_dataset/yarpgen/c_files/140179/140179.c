/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = (max(var_13, ((((arr_1 [i_0] [i_0]) != (arr_0 [i_0] [i_0]))))));
        var_14 = -15196;
        var_15 = (max(var_15, 50340));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_16 = (var_8 ^ 1);
            var_17 = var_7;
            var_18 = (min(var_18, (((arr_3 [i_1]) ? (arr_3 [i_1]) : 50331))));
            arr_6 [i_1] = (arr_3 [4]);
            arr_7 [i_1] [3] = -1692642615;
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    {
                        var_19 -= 27465;
                        var_20 ^= var_1;
                    }
                }
            }
            var_21 *= -1692642615;
            var_22 = (((arr_11 [i_1] [i_1] [i_1]) ? 3111840113 : 38071));
        }
        var_23 = (min(var_23, ((((72 - 50340) ? (arr_2 [i_1]) : ((3580277714 ? (arr_5 [6]) : var_12)))))));
    }
    var_24 = (max(var_24, 0));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            {
                var_25 = ((((((-1692642615 ? 5054570371016456754 : var_12)))) ? ((var_1 ? var_2 : (min(1927207853, 13498)))) : -2324435366));
                var_26 = ((3497724634 ? -2379641332590625926 : 43982));
                arr_21 [i_6] [i_7] [i_6] &= var_8;
                arr_22 [i_6] = (arr_13 [i_7] [i_6] [i_6] [i_6] [i_6]);
            }
        }
    }
    #pragma endscop
}
