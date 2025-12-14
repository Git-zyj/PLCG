/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~var_1) >= (max(var_5, (min(446100282, var_8))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (max(var_3, var_4));
        var_11 = (max(var_11, (((!((min(-1073741824, -2))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((63768 == (((arr_4 [i_1]) + (arr_4 [i_1])))));

        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            arr_9 [i_1] = var_8;

            for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_11 [i_1]);
                            var_12 += 28107;
                        }
                    }
                }

                for (int i_6 = 3; i_6 < 19;i_6 += 1)
                {
                    var_13 = ((~(arr_5 [i_2 + 2] [i_2 + 2])));
                    arr_22 [i_1] [i_1] [i_1] [i_1] = (((arr_19 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 3] [i_6 - 3] [i_6]) ? (arr_19 [i_6] [i_6 + 1] [i_6] [i_6 - 1] [i_6 - 2] [i_6]) : var_2));
                    arr_23 [i_1] [i_1] [i_3] = ((var_8 ? (arr_17 [i_1] [i_2 + 1] [i_2] [i_2 + 1] [i_3] [i_2] [i_6 - 3]) : (arr_17 [i_1] [i_1] [i_2] [i_3] [i_3] [i_6] [i_6 + 1])));
                    var_14 = (max(var_14, 100));
                    arr_24 [i_6] [i_2] [i_3] [i_6] = -15226;
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                {
                    arr_27 [i_1] = ((1 * (arr_0 [i_2] [i_2])));
                    var_15 = (((arr_20 [i_1] [i_3]) ? var_7 : ((var_6 ? 1153025062 : 118))));
                    arr_28 [i_1] [i_2] = (60338 - var_7);
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    arr_32 [i_1] [i_2 - 1] = (2452427142 || var_8);
                    var_16 = (max(var_16, -3283496352239211689));
                }
                arr_33 [i_1] [i_2] [i_3] = (arr_4 [i_1]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_17 = 83;
                            arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] [i_10] &= (~1384297893);
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
            {

                for (int i_12 = 1; i_12 < 19;i_12 += 1)
                {
                    var_18 += (arr_8 [i_12 - 1] [i_12 + 1]);
                    var_19 = (max(var_19, 1));
                    arr_45 [i_12 - 1] [i_12 - 1] = ((18446744073709551603 << (var_5 - 195)));
                    arr_46 [i_2] [i_2] [i_2] = (61 >= var_2);
                    arr_47 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_41 [i_1] [i_11]);
                }
                arr_48 [i_1] [i_1] [i_11] = ((65535 >= (arr_43 [i_2 - 1] [i_2] [i_2] [i_11] [i_1])));
            }
            for (int i_13 = 2; i_13 < 19;i_13 += 1)
            {
                var_20 = ((-(arr_10 [i_13 - 2] [i_13 + 1] [i_2 - 1])));
                var_21 = (min(var_21, ((((arr_52 [i_13 + 1] [i_13] [i_1]) - (arr_42 [i_1] [i_2] [i_13] [i_1]))))));
                arr_53 [i_1] [i_13] [i_13] [i_2] = var_4;
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        {
                            arr_58 [i_1] [i_1] [i_1] [i_1] [i_13] = (arr_30 [i_1] [i_1] [i_13] [i_1] [i_1]);
                            var_22 += var_1;
                        }
                    }
                }
            }
            var_23 = ((((arr_31 [i_2]) && 42)) || (arr_43 [i_2] [i_2] [i_2] [i_2] [i_2]));
            var_24 = (max(var_24, 1271486902));
            arr_59 [i_2 + 1] = (((arr_34 [i_2 - 1] [i_2]) && (arr_57 [i_2] [i_2 - 1] [i_1] [i_2] [i_1] [i_2 - 1])));
        }
        for (int i_16 = 1; i_16 < 18;i_16 += 1)
        {
            var_25 = (((arr_56 [i_1] [i_16] [i_1] [i_16] [i_1] [i_16] [i_16]) <= ((((arr_19 [i_1] [i_1] [i_1] [i_16] [i_16] [i_16]) && var_3)))));
            arr_62 [i_16] = ((1073741823 ? (33 * 4139886728) : (arr_12 [i_16 - 1] [i_16 - 1] [i_16 - 1])));
            arr_63 [i_16 - 1] [i_16 - 1] [i_16] = -6628001156284397183;
            arr_64 [i_1] [i_1] = ((12881595002697753392 ? (((arr_4 [i_1]) ? -231689076560125041 : (arr_26 [i_1] [i_16] [i_1] [i_16] [i_16 - 1] [i_1]))) : (arr_30 [i_16 + 1] [i_16] [i_16 + 2] [i_16 + 1] [i_16 - 1])));
        }
    }
    var_26 = (201326592 - 3283496352239211691);
    #pragma endscop
}
