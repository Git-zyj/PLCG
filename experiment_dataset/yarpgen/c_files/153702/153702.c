/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 65535;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((min((arr_5 [i_0 + 1] [i_1] [i_0 + 1]), 7)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    arr_9 [16] [i_1] [i_2] = (arr_3 [i_0] [i_1]);
                    var_17 ^= -1048575;
                    arr_10 [8] [i_1] [8] &= (27888661062028560 <= 11155476795910421908);
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_15 [i_1] [i_1] = (arr_5 [i_0] [i_1] [i_3]);

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_18 = (~2147483647);
                            var_19 -= (65535 ? -1 : (arr_11 [i_0 + 1] [i_0 + 1] [i_3]));
                            var_20 = 32760;
                        }
                        var_21 += ((22552 ? -1 : 27));
                        var_22 = 13;
                    }
                    arr_19 [16] |= -26;
                    arr_20 [i_1] = arr_0 [i_0];
                    var_23 = var_11;
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1] [i_6] [i_1] [i_8] = (13 != 1933732224);
                                var_24 = (min(268435455, 1577821483277490062));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 -= (!-1577821483277490061);
    #pragma endscop
}
