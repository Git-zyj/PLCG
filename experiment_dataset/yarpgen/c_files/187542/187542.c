/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 = (~8953530052642538472);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((25996 || (-127 - 1)))));
                var_18 *= ((-(--12023674435205031864)));
                arr_6 [i_0] [i_0] = (arr_2 [i_0]);

                for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_19 ^= ((-12023674435205031861 / (arr_4 [i_2 + 2] [i_2 + 1] [i_1 - 2])));
                    var_20 = (min(var_20, (arr_5 [i_2])));
                    var_21 = (min(var_21, var_0));
                    arr_10 [i_0] [i_1 + 1] [i_0] = ((-(-127 - 1)));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_3 + 1] [i_0] [i_0] = (~321761118);
                    var_22 = (12023674435205031861 && 26012);
                    arr_14 [i_3] [i_0] [i_0] = (arr_1 [i_0] [i_0]);
                }
            }
        }
    }
    var_23 |= var_5;
    #pragma endscop
}
