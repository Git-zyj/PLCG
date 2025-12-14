/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_2] [i_1] [i_0] |= ((((max((min((arr_1 [i_0]), -28580)), -28580))) && ((((((-28580 - (arr_3 [i_0] [3])))) ? ((-2236 ? 64648 : 28580)) : (((arr_6 [i_0] [i_0] [i_0 - 2]) + (arr_3 [i_0] [i_0]))))))));
                        arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 3] [i_2] [i_0 - 1] = (((arr_1 [i_0 - 2]) * 64648));
                        var_10 = (max(var_9, (+-64648)));
                    }
                }
            }
        }
        arr_13 [i_0 - 1] [i_0 - 1] = (arr_2 [i_0] [i_0 + 1]);
        var_11 ^= (-1002 < -7202);
    }
    for (int i_4 = 2; i_4 < 7;i_4 += 1) /* same iter space */
    {
        var_12 += ((((max((28573 || 32942), ((7202 ? (arr_4 [i_4]) : var_2))))) ? ((min(7628, -2236))) : ((min((arr_14 [i_4 - 1]), (arr_14 [i_4 + 3]))))));
        var_13 -= (((((arr_4 [i_4 + 4]) ? var_1 : (arr_2 [i_4 - 2] [i_4 - 2]))) - var_4));
    }
    for (int i_5 = 2; i_5 < 7;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] = (arr_6 [9] [9] [9]);
        var_14 = (max(var_14, ((((((arr_17 [i_5]) ^ ((-26254 ? (arr_14 [0]) : 978)))) != ((max((min(-13581, -9074)), (arr_7 [i_5] [i_5])))))))));
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        arr_21 [i_6] [i_6] = (((((978 << (((arr_20 [i_6]) - 2929))))) ? ((var_1 % (((arr_19 [i_6] [i_6]) ? var_4 : var_9)))) : ((max(var_8, (max(var_6, 59567)))))));
        arr_22 [i_6] [i_6] = ((29590 ? 64629 : 3883));

        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            var_15 = (min(var_15, (((9593 ? -26254 : -14909)))));
            var_16 = (max(var_7, ((41674 ? 28580 : (arr_23 [i_7])))));
            var_17 = (min(((62351 ? -1002 : 26133)), -7366));
            var_18 = (((arr_20 [i_7]) ? ((min(var_6, 55170))) : 41674));
            var_19 = (arr_20 [i_7 - 2]);
        }
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            arr_28 [i_6] [i_8 + 1] = 27450;
            var_20 = var_3;
            arr_29 [i_8] = (max(23862, (max(var_6, (var_8 - var_3)))));
        }
        for (int i_9 = 2; i_9 < 14;i_9 += 1)
        {
            arr_33 [i_6] [i_6] [i_9 - 1] = (((((max(-24853, 15987)))) ? 42056 : ((max(var_7, -26254)))));
            var_21 = (-8589 != 1966);
            arr_34 [i_9 + 1] [i_6] = (arr_25 [i_6] [i_9] [i_9 - 2]);
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            var_22 = (min((max((380 ^ 29359), ((23490 ? -15200 : 25382)))), (~10389)));

            for (int i_11 = 2; i_11 < 14;i_11 += 1)
            {
                var_23 = (((((((arr_36 [i_10]) ? var_7 : 1002)) << (((((arr_37 [i_6] [i_6]) / 22793)) + 7)))) > ((min(var_3, (max((arr_38 [i_10]), var_0)))))));
                arr_42 [i_6] [i_6] [i_6] = (!-21919);
            }
            for (int i_12 = 2; i_12 < 13;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 4; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        {
                            var_24 -= (((-((-24783 * (arr_38 [i_12]))))));
                            arr_53 [i_6] [i_10] [i_10] [i_12] [i_13] [i_14] = ((((max((arr_49 [i_6] [i_10]), -21919))) ? (arr_50 [i_6]) : (((arr_52 [i_6] [i_6] [i_6] [i_6] [3]) ? var_4 : 989))));
                            var_25 = (min(var_25, (min((arr_19 [i_6] [i_6]), var_1))));
                            arr_54 [i_6] [i_6] [i_13 - 1] = var_4;
                        }
                    }
                }
                var_26 = ((var_1 ? -29369 : ((var_7 + (arr_52 [i_12] [i_12 + 2] [i_12 + 2] [i_12] [i_12])))));
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                var_27 = (24783 + 4365);
                var_28 -= (((arr_41 [i_6]) ? (arr_41 [i_10]) : var_6));
                var_29 = var_0;
            }
            var_30 = 59902;
            var_31 = ((((3213 == ((min(var_2, (arr_47 [i_6] [i_6] [i_6] [i_6] [i_6]))))))));
            var_32 = ((!((max(var_5, var_0)))));
        }
        var_33 *= ((-18352 ? 20069 : ((max((arr_25 [i_6] [i_6] [i_6]), (min(15020, (arr_36 [i_6]))))))));
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 17;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 13;i_17 += 1)
        {
            {
                var_34 ^= ((~(((arr_59 [i_17 + 4] [i_17 + 1]) ? (arr_59 [i_17 + 1] [i_17 + 2]) : (arr_59 [i_17 + 4] [i_17 + 2])))));

                /* vectorizable */
                for (int i_18 = 2; i_18 < 16;i_18 += 1)
                {
                    var_35 = (2142 % 25878);
                    arr_65 [i_16] [i_16] [i_16] [7] = 15202;
                }
                /* vectorizable */
                for (int i_19 = 2; i_19 < 16;i_19 += 1)
                {
                    var_36 += var_5;
                    var_37 = ((-(2110 + 18644)));
                }
                var_38 = ((-(((arr_66 [i_17] [i_17] [i_17 - 1]) ? (arr_66 [i_17] [i_17] [i_17 + 1]) : (arr_66 [i_17] [i_17] [i_17 + 3])))));
            }
        }
    }
    var_39 = ((((var_1 - var_5) & 50490)));
    #pragma endscop
}
