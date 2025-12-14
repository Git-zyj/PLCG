/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_1 ? (var_10 < var_7) : ((4035225266123964416 ? -4035225266123964416 : 2030506767663639886)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((arr_0 [i_0]) >= 5364458989153789905));
        var_16 = (min(var_16, ((((5364458989153789905 ^ var_7) / (((16416237306045911729 ? var_4 : 1))))))));
        arr_4 [5] [i_0] = ((var_10 & ((-(arr_2 [1] [1])))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_17 = -5364458989153789903;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_19 [i_4] [i_3] [i_1] [i_1] [19] = (~-1267649494);
                        var_18 += ((((-15667 ? var_0 : ((((2030506767663639886 < (arr_18 [i_1] [i_2] [i_3] [1]))))))) < ((4 ? 7 : 16416237306045911710))));
                        var_19 += (((((arr_14 [i_2]) ? (arr_5 [8]) : (arr_14 [i_2])))) ? var_0 : (((((((var_1 << (((arr_10 [i_4] [9] [i_4]) + 4927165063707326496))))) || (arr_11 [i_1]))))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_22 [i_1] [i_5] [i_1] = (((arr_20 [i_1]) ? (arr_20 [i_1]) : (arr_20 [i_5])));

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                var_20 = (max(var_20, (((~(arr_9 [i_6] [i_1]))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_32 [i_1] [i_5] [i_6] [i_1] [i_8] = ((2030506767663639855 ? 2030506767663639914 : 1));
                            var_21 = ((var_2 ? 1 : (1 < 5364458989153789905)));
                            var_22 = var_4;
                        }
                    }
                }
            }
            var_23 = (max(var_23, 15998638960807739446));
            var_24 = (min(var_24, var_1));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            arr_35 [i_1] [3] = var_14;
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 18;i_11 += 1)
                {
                    {
                        var_25 = var_4;
                        var_26 = (min(var_26, (!var_14)));
                        var_27 += (-var_14 && var_13);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 0;i_13 += 1)
                {
                    {
                        var_28 = (max(var_28, (arr_10 [7] [i_9] [i_13])));
                        arr_49 [i_1] = var_3;
                        var_29 = ((!(arr_15 [i_1] [19] [i_13 + 1] [i_1])));
                        var_30 = ((!(arr_44 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_12])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 20;i_15 += 1)
                {
                    {
                        arr_56 [i_1] [3] [i_14] [13] = (arr_45 [4] [i_15] [i_15 - 1] [i_15]);
                        arr_57 [i_1] [i_1] [i_15 + 1] [i_1] = (arr_7 [i_1]);
                        var_31 -= var_11;

                        for (int i_16 = 2; i_16 < 18;i_16 += 1)
                        {
                            var_32 = var_13;
                            var_33 = var_8;
                            arr_61 [12] [i_9] [i_1] [i_9] = (var_6 >= var_1);
                            var_34 = (var_14 & 4035225266123964406);
                            arr_62 [i_1] = (((~5364458989153789905) ? (((1 ? 2 : 236))) : (arr_45 [i_16 - 1] [i_15] [i_15 - 1] [i_14])));
                        }
                        for (int i_17 = 0; i_17 < 21;i_17 += 1)
                        {
                            var_35 = (~(arr_21 [15] [15] [15]));
                            arr_67 [i_1] [8] [i_1] [i_14] [i_15] [3] [i_1] = (~236);
                        }
                    }
                }
            }
        }
        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
        {
            var_36 = ((((var_11 ? -2005924726 : var_8))));
            var_37 = (!962708776);
            var_38 = var_12;
        }
        var_39 = ((18446744073709551615 ? 16416237306045911713 : -2936912507934938009));
    }
    var_40 = 16416237306045911729;
    var_41 = (((((((var_0 ? var_9 : var_1))) || (((var_3 ? var_13 : var_5))))) ? var_11 : var_14));
    var_42 = (min(var_42, var_12));
    #pragma endscop
}
