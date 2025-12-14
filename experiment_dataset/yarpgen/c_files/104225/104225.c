/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_2] [i_2 - 3] [14] [i_0] = -3940649673949184;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_11 *= ((1 ? 1 : 19844));
                            var_12 += var_6;
                            arr_14 [i_0] [i_4] [i_0] = (~var_5);
                            var_13 = (min(var_13, (!var_6)));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            var_14 = -1;
                            var_15 &= ((var_10 << (var_0 == var_0)));
                            var_16 *= ((19848 ? ((var_5 ? var_5 : 1)) : ((854283017 ? -854283017 : 65535))));
                            var_17 = var_1;
                        }
                        var_18 += ((-((((((var_0 ? 62 : 16202104030801157188))) && var_5)))));
                    }
                }
            }
        }
        var_19 *= var_3;
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 12;i_6 += 1)
    {
        var_20 = (min(var_20, (((!(((854283017 ? var_8 : 1))))))));
        var_21 = (min(var_21, 5573110590908801248));
        var_22 = ((((var_9 ? -19844 : var_3))) ? 854283017 : 9968);
    }
    var_23 = (max(((-((min(var_5, var_7))))), (max(-65535, (var_9 && var_3)))));
    #pragma endscop
}
