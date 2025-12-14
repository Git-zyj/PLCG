/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= (((((24896 ? 40635 : var_6)) != var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (arr_3 [i_0]);
                var_20 = ((!(((arr_0 [i_0] [i_1 + 3]) != ((51812 ? 32767 : 40650))))));
                var_21 = (max(var_21, 12394004118488563833));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_22 += ((1 ? 32767 : var_7));
                    var_23 = (max(var_23, 1));
                    var_24 = (~var_6);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_25 = 1;
                    var_26 *= (47381 || 7093);
                }
                var_27 = ((min(9223372036854775807, 216)));
            }
        }
    }
    var_28 = ((var_6 ? var_7 : (min(var_12, (var_17 && 33554416)))));

    for (int i_4 = 4; i_4 < 20;i_4 += 1)
    {
        var_29 = 0;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_30 = (min(var_30, -1));
                                var_31 = 1;
                            }
                        }
                    }
                    var_32 &= 65535;
                    var_33 = ((((min((min(0, 3397985045)), (arr_16 [i_6] [17] [1])))) ? 1 : (arr_19 [i_4 + 4] [i_5] [i_6] [i_4 - 1])));
                    var_34 = ((var_1 ? (arr_19 [i_6] [i_5] [i_4] [i_4]) : var_12));
                }
            }
        }
        var_35 = var_4;
        var_36 = (min(var_36, ((min(1, 31)))));
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                var_37 = (!(!1));
                var_38 = 1;
            }
        }
    }
    #pragma endscop
}
