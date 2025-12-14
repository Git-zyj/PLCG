/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = ((-((~(254 <= -73)))));
                arr_7 [i_1] = (min(73, (((-97 <= (arr_3 [i_0 - 1] [i_0 + 1]))))));
                var_14 *= ((min(119, (min(1080866150414283879, var_0)))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_15 = (max(var_15, 96));
                    var_16 = (max(var_16, ((min((min((min(72, (arr_9 [i_0 - 2] [i_1] [i_0 - 2] [i_2]))), 46)), (arr_4 [9] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = (arr_11 [i_0]);
                                var_18 = (~1);
                                var_19 = -0;
                            }
                        }
                    }
                }
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    var_20 = (((((min(-14, 1)) / 1))));
                    var_21 |= var_13;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        var_22 ^= (((((arr_22 [i_7] [i_6] [i_1] [i_0]) ? 1 : 230))));
                        var_23 = 1;
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_24 = ((!((!(12 && var_7)))));
                        var_25 = (1 || var_13);
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_26 = (((((var_6 << (3044206868 - 3044206858)))) && 4788278741375838131));
                        var_27 = (max(var_27, var_13));
                        var_28 = (max(var_28, (((157 ? 108 : (10 | 2167100800))))));
                        var_29 = ((337081134 + (89 + 4634170748680780587)));
                    }
                    for (int i_10 = 2; i_10 < 20;i_10 += 1) /* same iter space */
                    {
                        var_30 = (((-73 + 2147483647) >> (((-127 - 1) + 141))));
                        var_31 = 100;
                        var_32 ^= ((-(arr_14 [i_0] [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 20;i_11 += 1) /* same iter space */
                    {
                        var_33 = var_5;
                        var_34 = (-72 * 2869161109);
                        arr_36 [i_11] [i_1] [i_1] [i_1] = ((~(206 != 80)));
                        var_35 = (min(var_35, -4634170748680780576));
                    }
                    var_36 += (arr_31 [i_0] [i_0] [i_0] [i_0 + 1] [i_0]);

                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        var_37 = (((arr_30 [i_12 - 1] [i_6] [i_1] [i_0 - 2]) ? 1086410849 : (arr_2 [i_12 - 1] [i_6] [i_1])));
                        var_38 = -92;
                        var_39 = var_5;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 12;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 12;i_14 += 1)
        {
            {
                var_40 = 535822336;
                var_41 = (((~72) < (((15138 > (arr_27 [i_14 + 1] [i_14 - 1] [i_13 + 1] [i_13]))))));
                var_42 = ((-(2892820946 - 65535)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 1; i_15 < 14;i_15 += 1)
    {
        for (int i_16 = 3; i_16 < 15;i_16 += 1)
        {
            {
                var_43 = ((~(((arr_4 [i_15 + 2] [i_15 + 3]) ? -4235374658637428261 : 1771659170))));
                var_44 = (min((min(201326592, -var_6)), (min((arr_14 [i_15] [i_15] [i_15 + 1]), 2225921034))));
            }
        }
    }
    var_45 *= (!((((var_7 / -127) * 13220))));
    #pragma endscop
}
