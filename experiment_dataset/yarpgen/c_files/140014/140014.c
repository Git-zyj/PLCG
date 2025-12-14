/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_8 ? var_1 : (min(var_3, var_10))));
    var_13 |= var_0;

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, var_5));
                        var_15 = (((!var_1) ? var_5 : (~var_11)));
                        var_16 = var_2;
                    }
                }
            }
        }
        arr_10 [i_0] = (min(var_8, (var_10 < var_10)));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_17 = (var_10 < var_3);
        arr_13 [i_4] = -var_4;
        arr_14 [i_4] [13] = (~var_6);
        var_18 = var_6;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_19 = ((~var_6) ? var_5 : var_2);
        var_20 = -var_10;

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_21 = var_11;
            var_22 = (max(var_22, var_1));
            var_23 = (min(var_23, (var_3 * var_9)));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_24 -= -var_7;
            var_25 = ((231 ? 25 : 7243119339078758917));
        }
        var_26 = (var_8 / var_1);
    }
    #pragma endscop
}
