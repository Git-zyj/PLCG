/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_16 = var_14;
            arr_6 [i_0] [i_0] [i_1] = (min(var_9, 15311792592982639224));
            arr_7 [i_1] = (240 != 13254521670386355312);
        }
        arr_8 [i_0] = ((((min((185 != 9223372036854775807), (max(var_3, (arr_4 [6])))))) || (min(((22 == (arr_4 [i_0]))), (-23134 && 185)))));
        var_17 += 1402764808;
        var_18 += ((((var_0 <= var_1) != (71 >= 65527))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {

                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    arr_15 [i_4 + 2] = (-32185 == (arr_10 [i_2] [i_2]));

                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        var_19 = (max(var_19, ((((min((min(var_15, 26)), (((arr_18 [i_2] [i_2] [i_2] [i_2]) * 3571677565)))) > -1)))));
                        arr_20 [i_2] [i_3] [i_4] [i_5 + 4] = (min(2199006478336, (((214 | (arr_17 [i_2] [18] [i_2] [i_2] [i_2] [14]))))));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            var_20 = (max(var_20, ((max(0, 0)))));
                            var_21 = (max(var_21, (1882906373 > var_4)));
                        }
                        arr_25 [i_2] [i_6] [i_2] [i_6] [8] [i_6] = min((((min(14209890347752698800, -6112)) | (var_15 > 1345242297))), var_2);

                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 20;i_8 += 1)
                        {
                            arr_29 [22] [i_3] [i_3] [i_4 + 1] [i_8] [i_3] [i_8] = var_12;
                            var_22 = (min(var_22, ((((var_12 - 2199006478340) + 0)))));
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            var_23 = (max(var_23, (!var_2)));
                            arr_34 [i_2] [i_2] [i_9] = var_11;
                            var_24 = var_2;
                        }
                        for (int i_10 = 2; i_10 < 19;i_10 += 1)
                        {
                            var_25 = (var_0 && -32761);
                            arr_37 [i_6] [i_6] [i_6] [i_6] [i_6] = 534773760;
                            arr_38 [i_2] [22] [i_4 + 1] [i_6] [i_10] = (min((var_10 ^ 46714), (((!(var_12 / var_7))))));
                        }
                    }

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        arr_42 [i_2] [i_11] = arr_28 [i_2] [i_3] [i_11] [i_11] [11] [i_2] [i_3];
                        var_26 = (max(var_26, (var_11 * 0)));
                        arr_43 [1] [i_11] [13] [i_3] [i_11] [i_2] = 1941;
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        arr_46 [i_12] [16] [18] [i_12] = ((((min((204 == 137), (!var_3)))) > (((2147483647 != (max(-1071387465, var_5)))))));
                        var_27 = (max(var_27, -812651466575817423));
                    }
                }
                arr_47 [i_2] = (max(3471212239, 65527));
                arr_48 [i_2] [i_2] [i_2] = var_4;
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            {
                                var_28 = (min(var_28, ((((arr_35 [8] [i_14] [i_14] [i_13] [i_13] [i_2] [i_2]) * 1)))));
                                var_29 = ((((max(65527, 65527))) < var_9));
                                var_30 = (min(var_30, ((min((((!(1624111778 != -1074332782)))), (min(4381518683094716271, ((min(2980702299, var_7))))))))));
                                arr_59 [i_3] [i_3] [i_15] &= (var_14 - var_15);
                                arr_60 [i_2] = 4294967295;
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = (var_6 == var_14);
    #pragma endscop
}
