/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-2147483636 != (!20351)));
    var_11 = ((min(1, 967499461)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_12 = (arr_1 [i_0] [i_1]);
            var_13 -= (((~var_6) * (var_4 == var_1)));
            var_14 = var_1;
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                var_15 = ((-(arr_9 [i_0])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_16 = (var_4 || -2147483643);
                            var_17 = ((var_6 ? var_9 : 56101));
                            var_18 = (~var_2);
                        }
                    }
                }
            }
            var_19 = (min(var_19, -18657));
        }
        var_20 = ((((2147483642 || (arr_11 [i_0] [i_0] [i_0] [8]))) || (var_5 && var_8)));
        var_21 = (min(var_21, ((((arr_6 [i_0]) ? 18446744073709551615 : 1)))));
        var_22 = (1 < var_2);
        var_23 = ((1 ? (arr_5 [i_0] [i_0] [6]) : (arr_5 [i_0] [i_0] [i_0])));
    }
    #pragma endscop
}
