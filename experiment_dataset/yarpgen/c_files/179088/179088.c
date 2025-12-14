/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_19 += var_3;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                arr_11 [i_3] [i_3] [i_0] [i_0] [i_0] [i_0] = 120;
                                var_20 -= var_15;
                            }
                            for (int i_5 = 1; i_5 < 1;i_5 += 1)
                            {
                                var_21 -= var_5;
                                var_22 -= min(var_2, (min(var_11, 1)));
                            }
                            for (int i_6 = 1; i_6 < 9;i_6 += 1)
                            {
                                arr_18 [i_0] [i_0] [i_1] [i_0] [i_3] [i_6 - 1] = (!2);
                                var_23 = ((1 ? (var_9 || var_15) : ((min(6, 20867)))));
                            }
                            arr_19 [i_0] [i_1] [i_0] [i_1] = (!var_13);
                        }
                    }
                }
                var_24 = ((6 ? (~var_7) : var_1));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 11;i_9 += 1)
            {
                {

                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_25 = (((((max(var_11, (arr_29 [i_7]))))) ? 15 : (1 != 2074980467)));
                        var_26 = var_5;
                    }
                    for (int i_11 = 4; i_11 < 9;i_11 += 1)
                    {

                        for (int i_12 = 4; i_12 < 8;i_12 += 1)
                        {
                            arr_36 [i_9] [i_7] = 1;
                            var_27 = (arr_32 [i_8 + 1] [i_12 - 4] [i_8 + 1] [i_8 + 1]);
                            arr_37 [i_7] [i_9 - 2] [i_9 - 2] [i_9] [i_9] = 1;
                            var_28 = (max(((~(max(var_7, 17214)))), var_15));
                            var_29 = 8;
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1)
                        {
                            var_30 = (min(var_30, (((+(((-106 ^ 11814) | (arr_34 [i_7] [i_8 - 1] [i_11] [i_11 - 4] [i_11]))))))));
                            var_31 = (min(var_31, var_12));
                            arr_41 [i_7] [i_7] [i_9] [i_11] [i_13] [i_7] = (max((((max(var_16, (arr_25 [i_8] [8]))))), ((-(6586742444627509880 != 0)))));
                            var_32 = (max(var_32, (arr_23 [i_7] [i_8])));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 12;i_14 += 1)
                        {
                            arr_45 [i_11 - 3] [i_7] = ((var_2 << (var_3 - 38)));
                            var_33 = (min(var_33, -26));
                        }
                        arr_46 [i_7] [i_9] [i_7] = arr_31 [i_8];
                    }
                    for (int i_15 = 0; i_15 < 12;i_15 += 1)
                    {
                        var_34 -= (min(0, (min((arr_28 [i_8 + 1] [i_15] [i_8 + 1] [i_8 + 1] [i_15] [i_8 + 1]), -56))));

                        for (int i_16 = 1; i_16 < 11;i_16 += 1)
                        {
                            var_35 = (min((((arr_29 [i_7]) ? (arr_21 [i_7] [i_8]) : (((!(arr_38 [i_7] [i_8 + 1] [i_7] [i_7] [i_16])))))), (((0 <= (!1))))));
                            arr_52 [i_7] [i_7] [i_7] [i_7] [i_16] = (59 ? 136902082560 : var_8);
                            var_36 = (!9508);
                        }
                        arr_53 [i_7] [3] [i_7] [i_15] = ((var_2 * (17216 * var_12)));
                        var_37 = (max(var_37, (!53721)));
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 8;i_18 += 1)
                        {
                            {
                                arr_58 [i_7] [i_7] [i_7] [i_7] = min(((((((-85 > (arr_20 [i_7] [i_8 - 1])))) <= -2408))), 1919596840);
                                arr_59 [i_18] [i_8] [i_7] [i_8] [0] = 70;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
