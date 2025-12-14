/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_19 = (max(var_19, var_17));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_4 [2] [i_1] = (arr_0 [i_0 - 3]);
            var_20 = (~var_17);
            var_21 = ((~((~(arr_2 [7])))));
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            arr_7 [i_0 + 1] [i_2 - 1] [i_0 - 3] = (var_12 && 135);
            arr_8 [i_2] [i_0] = 135;

            for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
            {
                arr_11 [i_0 - 2] [i_2] [i_3] = ((~(arr_3 [i_2 + 2] [i_0 - 2])));
                var_22 = (134213632 % 24);
                var_23 = var_11;
                var_24 = (arr_6 [i_2] [i_3]);

                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    var_25 = 1;
                    var_26 += (~9027);
                    var_27 = (15 > 0);
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_18 [i_5] [15] [i_2 - 2] [i_0] = var_17;
                    arr_19 [6] [i_2] [i_3] [i_2] = (132 ^ 135);

                    for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [i_2] = 1036933246533386319;
                        arr_24 [i_6] = 17592183947264;
                        var_28 = var_2;
                    }
                    for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                    {
                        var_29 = ((1494400847 * (((var_1 ? var_2 : (arr_15 [i_0 - 3]))))));
                        var_30 = (-2147483647 - 1);
                        arr_28 [i_7] = (arr_5 [i_5]);
                    }
                    arr_29 [i_0] [13] [i_0] = 2546244338;
                    arr_30 [i_0] [i_2] [i_3] [9] = ((~((134213632 ? (arr_5 [i_0]) : (arr_2 [i_0])))));
                }
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    var_31 = ((~((0 ? 0 : 1))));
                    var_32 *= (var_8 * (arr_5 [i_2 + 2]));
                    var_33 = ((~(arr_27 [i_2] [i_2] [i_2] [i_3] [i_2])));
                    arr_33 [i_3] [i_2] = ((var_6 ? 98 : (arr_31 [i_2])));
                }
                for (int i_9 = 2; i_9 < 16;i_9 += 1)
                {
                    var_34 = (max(var_34, (arr_15 [i_0 - 3])));
                    arr_36 [6] [16] [16] [i_9] [i_3] [16] = (arr_9 [i_2 + 2] [i_2 + 1]);
                }
            }
            for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
            {
                var_35 = (max(var_35, var_17));
                var_36 = (max(var_36, var_12));
            }
            var_37 = (~var_9);
        }
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        var_38 += 255;
        var_39 += var_15;
    }
    var_40 = var_6;
    var_41 = (min((((((var_15 ? 255 : var_1))) ? ((1 ? var_12 : var_9)) : (135 % var_5))), var_12));
    #pragma endscop
}
