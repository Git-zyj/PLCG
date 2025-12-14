/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_20 -= ((249 ? ((3097 ? (arr_0 [i_0 + 1]) : (arr_1 [i_0 + 2]))) : 65516));
        var_21 = ((!((min(62439, 3122)))));
        arr_3 [14] [i_0] = (((((((min(6506856365226103867, -3037620048294277716))) ? (max(3115, var_12)) : ((min(62413, -6175030437604533846)))))) ? 8 : (((~(~-102))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_22 -= (arr_5 [i_0 + 2]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            var_23 = (min(var_23, ((4294967274 ? -7 : (arr_15 [i_0 + 2] [i_4 - 3] [i_4] [i_4 + 2] [i_4 + 2] [i_4] [i_4 - 3])))));
                            var_24 = (arr_14 [i_0 - 2] [i_1] [i_3 + 1]);
                        }
                        var_25 = 144110790029344768;
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            var_26 += (max((~var_15), (((arr_1 [i_0 + 2]) & (arr_1 [i_0 + 2])))));
            arr_19 [i_5] [i_5] = ((((!(arr_17 [i_0 - 2] [i_0 - 2] [i_5 + 1])))) <= (arr_16 [i_0 - 2] [i_5] [10]));
            arr_20 [i_5] [i_5 - 1] = (((-19 | 3115) ? var_4 : 49473));
            arr_21 [i_0] [i_0] [1] |= ((!(((var_7 ? (arr_12 [i_0 - 2] [i_5 + 1]) : (arr_12 [i_0 + 1] [i_5 + 1]))))));
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            arr_25 [i_6] = 49452;
            var_27 -= ((((max(((max((arr_4 [i_0 + 2] [i_6]), (arr_2 [i_0] [i_6])))), (var_11 * -1998577349)))) ? (min(695546221, 249)) : ((((!(((1016 / (arr_18 [i_0] [12] [i_6]))))))))));
            arr_26 [i_0] &= (min(((min(1474265877, (arr_9 [i_0 - 1] [i_0 - 2] [i_6] [i_6] [i_6] [i_6])))), -8280042241120557736));
        }
    }
    for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
    {
        var_28 = (arr_13 [1] [i_7 - 1] [i_7] [i_7 - 1] [11] [i_7]);
        var_29 &= arr_15 [i_7 - 2] [i_7] [i_7 + 2] [i_7 + 1] [i_7 - 1] [i_7] [3];
        var_30 = (max(var_30, (min((arr_11 [i_7] [i_7]), (((((2147483647 - (arr_10 [i_7 + 1] [i_7] [i_7] [i_7 - 2])))) ? ((3599421083 ? 8388607 : (arr_5 [i_7 - 2]))) : (arr_4 [16] [i_7])))))));
        var_31 = ((+(((arr_22 [i_7] [7] [i_7 + 1]) * (arr_22 [i_7] [i_7] [i_7 + 1])))));
    }
    for (int i_8 = 2; i_8 < 18;i_8 += 1) /* same iter space */
    {
        var_32 -= (((1 % 3117) ? ((12027943745212399546 ? (arr_32 [i_8 - 1]) : 61238)) : 62463));
        arr_33 [i_8 - 2] = ((min((arr_5 [i_8 + 1]), 1)) < (min((arr_5 [i_8 - 1]), (arr_5 [i_8 + 2]))));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 16;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {
                        var_33 -= ((~(arr_40 [i_9 - 1])));
                        var_34 = (arr_27 [i_11]);
                        arr_44 [i_9] [i_10] [i_11] [i_11] [6] [i_12] = (~(((arr_28 [i_10] [8]) ? (arr_34 [i_9 - 1]) : var_16)));
                    }
                }
            }
        }
        arr_45 [i_9] = (((arr_6 [i_9 - 1] [i_9 + 1] [i_9 + 1]) != (((14 ? 2530420250 : -11)))));
        var_35 = ((-21784 > ((7390 ? (arr_7 [i_9] [i_9] [i_9 - 1]) : var_17))));
    }
    var_36 = (((((((min(var_9, 62438))) ? var_0 : ((1 ? 18846 : 10541))))) ? 39546 : ((min(16, 0)))));
    #pragma endscop
}
