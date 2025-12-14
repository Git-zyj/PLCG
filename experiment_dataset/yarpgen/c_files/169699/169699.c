/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_2 [2] [i_0] = (((((var_7 % (((var_5 || (arr_0 [i_0]))))))) ^ (min((var_4 | 21), (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 = (((((~-7173506171035890700) ? -7173506171035890691 : (((~(arr_3 [i_0])))))) <= (max(var_13, (max((-9223372036854775807 - 1), 0))))));
            var_15 = (arr_3 [i_1]);
        }
        arr_5 [i_0] = (min(1, -82));
    }
    for (int i_2 = 3; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (((arr_8 [i_2 - 2]) / ((var_11 ? (arr_1 [4] [i_2]) : (var_0 / 123)))));

        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            arr_13 [i_3] = (~1);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_16 *= 81;
                        var_17 = (~60);
                        var_18 &= ((67 ? (((((max(var_3, var_2)) >= var_11)))) : ((-8480 ? (min(-7173506171035890700, 33490)) : var_0))));
                    }
                }
            }
            var_19 = (max(var_19, (arr_10 [i_2])));
        }
    }
    for (int i_6 = 3; i_6 < 21;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                {

                    for (int i_9 = 3; i_9 < 20;i_9 += 1)
                    {
                        var_20 *= (((((~((min(1, 1)))))) / (1 & 15593)));
                        var_21 = (((~((var_4 ? (arr_6 [i_7 + 3] [i_8 + 2]) : -1475254824667231056)))));
                        var_22 = (max(var_22, (((max((arr_16 [i_9 - 2] [i_7] [i_9 - 2] [i_9 - 2] [i_7]), (arr_8 [i_6])))))));
                        var_23 ^= -56364;
                    }
                    arr_27 [16] [i_7] [i_8] [i_7] = (arr_21 [i_6]);

                    for (int i_10 = 3; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        var_24 = (min((~var_13), 18732));
                        var_25 = ((~(((var_12 ? 96 : var_1)))));
                    }
                    for (int i_11 = 3; i_11 < 19;i_11 += 1) /* same iter space */
                    {
                        arr_32 [i_8] = (arr_10 [i_7]);
                        arr_33 [i_7] [i_8] = (max((max((arr_29 [i_8] [i_8]), (-9223372036854775807 - 1))), ((max(80, 67)))));
                        var_26 = var_4;
                    }
                    for (int i_12 = 3; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        var_27 += (((arr_14 [i_12] [10] [i_6]) > (arr_1 [i_8 - 1] [i_8 + 2])));
                        var_28 -= (max(((((arr_15 [19]) ? 1 : (((var_5 && (arr_16 [10] [16] [i_7] [i_6] [i_6]))))))), 7173506171035890700));
                    }
                    for (int i_13 = 3; i_13 < 19;i_13 += 1) /* same iter space */
                    {

                        for (int i_14 = 3; i_14 < 19;i_14 += 1)
                        {
                            var_29 += (((((var_4 % var_5) ? ((8131903200352254094 * (arr_15 [12]))) : (~-4273047096595913435)))) ? ((((((arr_34 [i_6] [9] [9] [9] [i_6] [i_14]) ? -3156 : (arr_38 [20])))) ? (max(var_5, var_7)) : (arr_36 [8] [i_13 + 2]))) : (((max(32767, 1)))));
                            var_30 ^= (min((arr_6 [i_6] [i_6 - 2]), ((((~32375) || (((var_13 ? (arr_17 [i_7] [i_14]) : var_1))))))));
                            arr_43 [i_6] [i_7] [i_7] [i_8] [i_8] [i_14] = ((~(((arr_34 [i_7] [i_7 + 1] [i_7 + 1] [i_8] [i_8] [i_8 - 2]) | var_7))));
                            var_31 ^= ((var_5 < -4273047096595913435) ? var_13 : var_5);
                        }
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            var_32 = (min(var_32, ((max(3150, (arr_6 [14] [14]))))));
                            var_33 += ((((-60 < -27) <= 27826)));
                            var_34 = ((~((var_10 + (arr_30 [i_8 - 1] [i_8] [i_8])))));
                        }
                        var_35 = (max((((arr_18 [i_6 - 2]) ? (arr_18 [i_6 - 3]) : var_2)), (~var_3)));
                    }
                    var_36 |= ((-30756 ? (((arr_14 [i_6] [18] [i_8 + 1]) * var_8)) : (~-60)));
                }
            }
        }
        var_37 = ((~(max(1348629207, -84190256))));
        var_38 = min((((arr_7 [i_6 + 1]) ? -6973430856323639280 : 125)), -126);
    }
    for (int i_16 = 3; i_16 < 21;i_16 += 1) /* same iter space */
    {
        var_39 = ((min(65, var_3)));
        var_40 |= (~var_3);
    }
    var_41 = min(var_13, (((var_6 < 110) ? ((var_8 ? var_1 : var_4)) : (((min(var_11, var_11)))))));
    var_42 |= var_10;
    #pragma endscop
}
