/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((+((max((max((arr_0 [i_0]), (arr_3 [i_1] [i_0] [i_0]))), (arr_1 [i_0] [i_0]))))));
                var_19 = (arr_3 [i_0] [i_0] [i_1]);
                var_20 = (~54917);
                var_21 = -35962;
                arr_5 [i_0] [i_0] = (max(((max(93, 1))), (arr_2 [i_0] [i_1])));
            }
        }
    }
    var_22 = ((var_17 ? var_3 : 0));

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_9 [1] [1] = ((max((((arr_2 [i_2] [i_2]) | 15491)), ((26 ? var_2 : -48)))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_23 = (max(var_23, (1 * var_12)));
            var_24 = (((((var_1 <= (arr_10 [i_2])))) >> ((+(((arr_8 [i_2]) ? (arr_0 [i_3]) : (arr_0 [i_2])))))));
            var_25 = (max(var_25, (arr_0 [1])));
            var_26 = (max(var_26, (arr_2 [i_2] [0])));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_27 = ((arr_14 [i_2]) == (arr_14 [5]));
            arr_16 [i_2] = ((1 ? (1 >> var_17) : ((var_0 ? (arr_14 [i_4]) : var_11))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_21 [i_2] [i_5] [i_2] [i_2] = var_18;
                var_28 = 1;
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_25 [i_2] [i_5] [i_2] = ((var_14 << (arr_24 [i_2] [i_2])));
                var_29 ^= var_16;
                var_30 = (((((var_17 ? var_2 : var_16))) ? (arr_20 [i_5] [i_5] [i_5] [7]) : (arr_12 [i_5] [i_5])));
            }
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_31 = (arr_6 [i_5]);

                    for (int i_10 = 1; i_10 < 8;i_10 += 1) /* same iter space */
                    {
                        var_32 = var_15;
                        var_33 ^= var_3;
                    }
                    for (int i_11 = 1; i_11 < 8;i_11 += 1) /* same iter space */
                    {
                        var_34 = (max(var_34, 1));
                        arr_35 [i_2] [i_5] [i_5] [1] [i_11] = (((arr_29 [i_5]) ? 1 : (arr_29 [i_5])));
                        var_35 = ((arr_27 [i_5] [i_5] [i_5]) <= (arr_33 [i_11] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_5] [i_11 + 1]));
                        var_36 *= (((arr_33 [i_2] [i_5] [i_8] [2] [i_8] [i_8]) >> 1));
                    }
                }
                for (int i_12 = 3; i_12 < 6;i_12 += 1)
                {
                    arr_39 [i_5] [i_8] = (((arr_20 [i_2] [i_5] [i_8] [i_12 + 4]) > (arr_10 [i_2])));
                    var_37 = 1;
                }
                var_38 = 1;
                var_39 = ((var_12 ? 40137 : (arr_22 [1] [i_5] [i_8])));
                var_40 |= (arr_38 [i_2] [i_2] [i_2] [i_5] [6] [i_8]);
            }
            var_41 ^= (((arr_26 [i_2] [i_2] [i_5]) ? var_9 : var_8));
        }
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_42 = 1;
        var_43 = ((var_11 ? (0 || 1) : var_18));
        var_44 = (arr_40 [i_13]);
    }
    for (int i_14 = 1; i_14 < 9;i_14 += 1)
    {
        var_45 = (max(var_45, (arr_30 [i_14 + 1] [i_14])));
        arr_46 [i_14] [i_14] = (((((var_5 ? 1 : (((arr_15 [i_14] [8]) ? 1 : 0))))) ? (max((1 && 65535), (~0))) : ((var_7 ? (arr_23 [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_14]) : (arr_23 [i_14] [i_14 - 1] [i_14 - 1] [i_14])))));
    }
    var_46 = (max(var_46, (~0)));
    var_47 = (max((~var_15), (max((!55429), ((var_12 ? var_6 : var_5))))));
    #pragma endscop
}
