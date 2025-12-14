/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (arr_4 [10] [10])));
                arr_6 [i_0] [i_1 + 1] [i_1] = (arr_3 [i_0] [i_1 + 1]);
                arr_7 [i_0] [i_0] [i_0] = -1206915677;
            }
        }
    }
    var_16 = (max(((var_13 ? ((var_4 ? var_14 : var_6)) : var_10)), (~var_14)));
    var_17 = var_14;

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (arr_0 [i_2]);
        arr_11 [i_2] = 1206915700;
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                {
                    arr_22 [i_3] [i_3] [i_5 - 1] = var_4;
                    arr_23 [i_3] [i_3] [i_3] = (arr_20 [i_3] [i_3]);
                    arr_24 [i_3] [i_3] [i_3] [i_3] = (~(arr_16 [i_3] [i_4]));

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_18 = (((((+(min((arr_12 [i_4]), (arr_18 [i_5])))))) ? (((min(255, var_8)))) : ((-1861341812281489152 ? 1861341812281489176 : (arr_14 [i_3])))));
                        arr_27 [i_3] [i_3] [i_3] [i_3] [i_6] = ((((min(109, var_11)))) ? ((var_9 ? var_2 : (arr_15 [i_5 + 2] [i_5 + 2]))) : var_12);
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                    {
                        var_19 = ((~(!1348698343612743741)));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            arr_34 [i_7] [i_7] [i_5] [i_4] [i_7] = var_3;
                            arr_35 [i_3] [i_7] [i_3] [i_7] [i_7] = var_0;
                            arr_36 [i_8] [i_4] [i_7] [i_4] [i_3] = (var_11 - 231);
                            var_20 = ((((((arr_26 [i_4] [i_4] [i_5] [i_7]) ? var_4 : -1))) ? 125 : var_11));
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            arr_39 [i_7] = min(((var_9 ? ((-8603628145728384173 ? var_8 : 9)) : (((max(var_7, (arr_20 [i_4] [i_5 - 2]))))))), var_8);
                            arr_40 [i_3] [i_7] [i_5] [i_7] [i_7] = ((-(+-15327)));
                            var_21 *= ((var_4 ? ((((max((arr_17 [i_3]), var_7))) ? var_13 : ((14 ? -4641403765624250734 : (arr_14 [i_4]))))) : (((min(var_10, (arr_26 [i_5] [i_5 + 2] [i_5 - 1] [i_5])))))));
                        }
                        arr_41 [i_3] [i_7] [i_5] [i_7] = (!var_14);
                        arr_42 [i_7] [i_7] [i_5] = ((var_9 * (min(var_12, (arr_21 [i_5 + 1] [i_5] [i_5 - 1] [i_5])))));
                        var_22 -= (min(33376, (min(var_8, (arr_25 [i_5] [i_5 - 2] [i_5 - 2] [i_5] [i_5] [i_5])))));
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                    {
                        var_23 = (((((6 ? var_3 : var_2))) ? ((var_11 ? (arr_12 [i_5 + 2]) : (var_13 - 65527))) : var_7));
                        var_24 = var_1;
                    }
                }
            }
        }
        arr_45 [i_3] [i_3] = var_7;
        arr_46 [i_3] = (((var_9 < var_10) ? ((183921361 ? (arr_37 [i_3]) : ((137 ? (-2147483647 - 1) : (arr_20 [i_3] [i_3]))))) : ((-25 ? 1 : (max(var_13, (arr_20 [i_3] [i_3])))))));
        arr_47 [i_3] [i_3] = ((((((~(arr_43 [i_3] [i_3] [i_3] [i_3] [0]))))) ? var_14 : var_4));
    }
    #pragma endscop
}
