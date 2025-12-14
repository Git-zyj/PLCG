/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (min(var_16, (((var_9 | ((((~(arr_0 [i_0] [i_0]))) | (arr_0 [i_0] [i_0]))))))));
        arr_2 [i_0] [i_0] = ((((var_2 || (((-30736 ? var_7 : 1))))) ? var_5 : 648850403203768043));
    }
    var_17 = 24174;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_1] = ((1 ? 2653584960513224915 : (arr_6 [i_2])));
            var_18 = ((((18446744073709551605 ? var_8 : var_2)) - (arr_7 [i_1])));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_11 [i_1] = (65535 | 30034);
            var_19 *= (((63 < 1) ? 65520 : (arr_10 [1] [i_3] [i_3])));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_20 = (max(var_20, (arr_6 [i_4])));
            var_21 = 8046356179716117759;
            arr_15 [i_1] [i_4] = ((-63 ? var_10 : ((67043328 ? var_11 : var_5))));
            arr_16 [i_1] = (((arr_10 [i_1] [i_4] [i_1]) != 15));
            var_22 = 1;
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_23 = (max(var_23, ((((arr_10 [i_1] [i_5] [i_5]) ? (!1) : var_4)))));
            var_24 = ((var_1 ? (arr_17 [i_1] [i_5] [i_1]) : (arr_17 [i_1] [i_1] [i_1])));
            arr_19 [4] [i_5] = 67043328;
            arr_20 [i_1] [i_5] = var_15;
            var_25 -= (!24174);
        }
        var_26 += (5833436103011442006 | 3968);
        var_27 &= var_13;
        var_28 = (((arr_9 [i_1]) + 65535));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_29 -= (63 - 1);
        var_30 = (min(var_30, ((((((-(arr_21 [i_6] [i_6])))) ? (max(-10305, 0)) : (var_4 && var_9))))));
        var_31 = (-32767 - 1);
        arr_23 [i_6] = (((arr_21 [i_6] [i_6]) && (arr_22 [i_6])));
        arr_24 [i_6] = var_11;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_32 = (max(var_32, (((52166 ? -33554368 : var_10)))));
        arr_27 [11] = arr_13 [i_7] [i_7] [i_7];
        arr_28 [i_7] = 24174;

        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_33 = 16608;
            arr_33 [i_8] [i_8] = ((-6179 != (arr_22 [i_7])));
            var_34 = 18446744073709551615;
            /* LoopNest 3 */
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_35 = (!var_7);
                            arr_45 [i_7] [13] [i_10] [i_8] = (((((-19114 ? 65535 : -4921))) || var_5));
                        }
                    }
                }
            }

            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                arr_48 [i_8] = (((-2147483647 - 1) ? var_2 : (arr_6 [i_8])));
                var_36 = (min(var_36, (arr_38 [i_7] [i_7] [2] [i_8] [i_12] [2])));
            }
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            var_37 = var_0;

            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    arr_57 [i_13] &= (2048 | 22926);
                    arr_58 [i_7] [i_7] [i_7] [i_14] = arr_5 [i_15];
                }
                arr_59 [i_14] [i_13] [i_14] [5] = ((0 >> (63 - 60)));
                var_38 = 20343;
                var_39 = (((arr_18 [i_14] [i_13]) ? (arr_18 [1] [i_13]) : -16619));

                for (int i_16 = 3; i_16 < 14;i_16 += 1)
                {
                    var_40 = 1;
                    var_41 -= ((-711864599 / (arr_14 [i_16 + 2])));
                    arr_63 [i_7] [i_14] [i_13] [i_14] [2] [i_16] = (arr_29 [i_7] [0] [6]);
                    var_42 = (min(var_42, -var_3));
                }
                for (int i_17 = 0; i_17 < 16;i_17 += 1)
                {
                    var_43 = (max(var_43, (var_8 * -31951)));
                    var_44 = var_8;
                }
            }
        }
        var_45 -= (620131413 & -755);
    }
    for (int i_18 = 0; i_18 < 16;i_18 += 1) /* same iter space */
    {
        arr_70 [i_18] = (((((max(var_3, var_8)) ? ((1 ? var_1 : var_8)) : (min(812482769381584046, 4903))))));
        var_46 = var_15;
        var_47 = (!1);
    }
    #pragma endscop
}
