/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 -= (var_9 != 25);
        var_20 = (3022834886 ? (42 <= 80) : (0 || 202394396));
        var_21 = (-74 ? (!1) : (var_15 >= 80));

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] = (32764 << 1);
            var_22 = var_10;
            var_23 = (min(var_23, (((var_2 ? var_3 : -32762)))));
            arr_6 [i_0] [i_0] = (((var_0 > var_6) < ((-624799828 ? var_3 : var_18))));

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                arr_10 [i_0] [i_0] [i_0] = (16744766367960538563 << (65526 - 65486));
                var_24 = (~14930);
                var_25 -= ((((1023 ? 5064 : 0)) ^ -14922));
            }
        }
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            arr_13 [1] [i_3] [i_0] = ((((var_6 ? 1 : var_12))) ? (-53 - 42) : ((-80 ? 9782047363809888719 : 55)));
            var_26 *= 8388606;
        }
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            var_27 = ((var_15 ? 1 : var_16));
            arr_16 [i_0] [i_0] [i_4] = (1 / var_0);
            var_28 -= (((((var_18 ? var_11 : 45111))) ? (9782047363809888719 <= 1) : ((-54 ? 29767 : -1987))));
        }
        arr_17 [i_0] [i_0] = ((8664696709899662897 ? var_9 : var_2));
    }
    var_29 = ((8664696709899662897 ? 26722 : 1));
    var_30 = (max(var_30, var_8));
    #pragma endscop
}
