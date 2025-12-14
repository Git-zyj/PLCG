/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_3 ? var_2 : ((var_10 ? var_7 : var_8))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_13 = ((!(arr_1 [i_0])));
        var_14 = (((~var_0) & ((min((~2916431242), (arr_0 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = var_4;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_15 = (arr_1 [i_1]);
                    var_16 ^= var_6;

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_14 [i_1] [19] [i_1] [i_1] = (arr_9 [0] [1] [i_1]);
                        arr_15 [i_1] [i_2] [i_4] = var_6;
                        var_17 = (max(var_17, var_4));
                        var_18 = ((12 ? (arr_7 [i_2] [i_2] [i_4]) : (arr_7 [i_4] [i_2] [i_3])));
                    }
                    arr_16 [i_1] [4] [4] = ((0 > (24616 && 68)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] = var_2;
        var_19 = ((arr_13 [i_5] [i_5] [i_5]) >> (251 - 238));
        arr_22 [i_5] = (arr_11 [i_5]);

        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
        {
            arr_26 [7] = (arr_12 [i_5] [i_5] [i_5] [i_5]);
            arr_27 [i_6] [i_5] [i_5] = (arr_19 [i_5] [i_6]);
            var_20 = (4294967280 && 234);
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                var_21 = (min(var_21, 32767));
                var_22 = var_11;
            }
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                arr_35 [i_5] [i_7] [4] = ((-(arr_11 [i_5])));
                var_23 = (5620 + 16383);
                var_24 = (min(var_24, -24616));
            }
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                arr_38 [i_5] = ((-735130069819876915 ? -1 : 240));
                arr_39 [i_5] [i_5] [i_5] = (arr_34 [i_5]);
            }
            var_25 = (!2);

            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                arr_43 [i_5] [i_11] [i_11] [i_5] = (((arr_2 [i_11]) & (arr_23 [i_5] [i_5])));
                var_26 = (arr_8 [i_5] [i_7] [i_11]);
                arr_44 [i_5] [i_7] [i_11] = (arr_18 [i_5]);
            }
            for (int i_12 = 4; i_12 < 20;i_12 += 1)
            {
                var_27 = (((1 * -7936) / ((4095 * (arr_45 [i_5] [i_12])))));
                arr_47 [i_5] [5] [i_12] [i_5] = (arr_45 [i_5] [i_12]);
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 18;i_14 += 1)
            {
                {
                    var_28 = (11 + var_8);
                    arr_52 [i_14] [0] [i_14] = (arr_36 [i_14 - 2] [i_14 + 3]);
                    arr_53 [i_5] [3] = ((!(!72057594037927935)));
                    arr_54 [i_5] [i_5] [i_14] [i_14] = 234;
                    arr_55 [17] [i_13] [i_13] [17] = (-(((arr_41 [i_14]) + var_3)));
                }
            }
        }
    }
    #pragma endscop
}
