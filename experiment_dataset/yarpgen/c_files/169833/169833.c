/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_14 = 49892;
            var_15 |= -65532;

            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_16 = (min(var_16, 3023));
                            var_17 = 3023;
                            var_18 = (min(var_18, var_4));
                        }
                    }
                }
                var_19 = (min(var_19, (arr_3 [i_0])));
                var_20 = (((max((min((arr_0 [i_0] [i_1 - 1]), var_4)), (arr_3 [i_1]))) > 45273));

                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    var_21 = (min(var_21, (51345 | var_10)));
                    arr_15 [i_1] [i_2] [i_1 + 1] [i_1] = (max(((3023 / (arr_12 [i_0] [i_0] [i_2] [i_5])), (62513 / 54378))));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    var_22 = (((max(((7837 | (arr_8 [i_0] [i_1] [i_2] [i_2] [i_0]))), (min(18446744073709551612, (arr_0 [i_0] [i_0]))))) - 6706044769626526953));
                    var_23 = 57124;
                    var_24 = -62512;
                    var_25 = (min(var_25, 11995334891211182406));
                }
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
            {
                var_26 = 64807;
                var_27 = 59895;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_28 = (max(var_28, (((((((var_13 | (arr_5 [i_1]))) >> (((arr_20 [i_9 - 1] [i_7] [i_1 + 1]) - 5270073999604469519)))) ^ (min(12205671329473456594, (arr_22 [i_0] [i_8] [i_7]))))))));
                            arr_26 [i_9] [i_1] [i_0] [i_1] [i_0] = 9;
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
            {
                var_29 = (((((-(arr_5 [i_1]))) ^ (((((arr_23 [i_10]) != var_3)))))) << (((((arr_10 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 1]) << (((arr_11 [i_1] [i_1 - 1] [i_1 + 1] [i_1]) - 23752)))) - 4436220)));

                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    arr_33 [i_10] [i_10] [i_10] [i_10] |= (((((!(!var_5)))) | (((arr_11 [i_0] [i_1] [i_0] [i_11]) ? ((((arr_28 [i_0] [i_1 - 1]) != 11554155287184452074))) : ((min(62512, (arr_11 [i_0] [i_1 - 1] [i_0] [i_10]))))))));
                    var_30 = (6706044769626526952 | 16347272983081637716);
                    var_31 = (((((((arr_16 [i_0] [i_10] [i_1] [i_0] [i_0]) / (arr_19 [i_0] [i_0] [i_10])))) * (((arr_0 [i_0] [i_1]) * (arr_1 [i_1] [i_1 + 1]))))) ^ (!15865858706055456678));
                }
                for (int i_12 = 4; i_12 < 9;i_12 += 1)
                {
                    var_32 = (((arr_16 [i_0] [i_1] [i_1] [i_10] [i_12]) * (((arr_17 [i_10] [i_1] [i_1 - 1] [i_12]) + (((arr_34 [i_0] [i_1] [i_1] [i_1]) / 2685263230358593466))))));
                    arr_36 [i_12] [i_1] [i_1] [i_12] [i_12] = (arr_11 [i_1] [i_1] [i_1] [i_1]);
                    var_33 = ((+((+((min((arr_16 [i_12] [i_12] [i_10] [i_1 + 1] [i_0]), var_4)))))));
                    arr_37 [i_0] [i_1] [i_0] = ((((((max(6706044769626526952, 2099471090627913892))) ? (arr_28 [i_0] [i_0]) : 62503)) != (arr_31 [i_1] [i_1])));
                }
            }
            var_34 = 18446744073709551615;
        }
        var_35 = 6;
    }
    for (int i_13 = 2; i_13 < 12;i_13 += 1)
    {
        var_36 = (arr_38 [i_13 + 1] [i_13 + 1]);
        var_37 = 7726383710034842287;
    }
    var_38 = 8297796534771213891;
    #pragma endscop
}
