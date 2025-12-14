/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!63635);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [5] = (((min(var_18, ((var_14 ? var_5 : 1901))))) ? ((29 / ((((arr_11 [i_0] [i_0] [12] [1] [i_3]) ? 1 : var_18))))) : (((((5534719583105560845 ? 1 : 4294967285))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max(((~(arr_1 [i_0 + 1]))), 1920));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_21 = arr_5 [i_0 + 1] [i_1 - 1] [i_0 + 1] [i_0];
                        var_22 = (((-2147483647 - 1) ? var_16 : var_8));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            var_23 = 63654;
                            arr_21 [i_2] [i_0] = (~var_0);
                        }
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            var_24 = (arr_0 [i_0]);
                            arr_24 [i_0] [i_0] [i_0] [0] [8] = 128;
                            arr_25 [i_0] [1] [2] [i_0] [i_0] [i_0] = var_3;
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            var_25 = var_11;
                            var_26 = 2147483647;
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                        {
                            var_27 = ((!(arr_30 [i_0] [i_0] [i_0 + 1] [i_0] [i_1 - 4] [i_0 + 1] [10])));
                            var_28 = 62;
                        }

                        for (int i_10 = 4; i_10 < 10;i_10 += 1)
                        {
                            var_29 = (arr_11 [i_0] [i_5] [i_0] [i_0] [i_0]);
                            var_30 = var_19;
                            var_31 = (((arr_35 [1] [1] [i_0] [12] [i_0] [0] [6]) ? (arr_29 [i_10] [i_10] [i_10 + 1] [i_10] [i_10 + 1] [3] [i_0]) : (arr_35 [0] [0] [i_0] [11] [0] [i_0] [10])));
                            arr_36 [i_0] [1] [i_0] [i_0] [1] = ((-2082275689 ? (((var_2 ? -2082275680 : 1))) : var_19));
                        }
                        arr_37 [i_0] = (arr_33 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 - 1] [i_0]);
                        arr_38 [i_0] [i_0] [i_0] [i_0] = var_6;
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 12;i_12 += 1)
                        {
                            {
                                arr_43 [i_0] [i_0] [0] = ((min((min(2082275664, 1890)), ((39 ? 52698 : -18271)))));
                                var_32 = (((((((3775071147 ? -2147483640 : -1277269680))))) < 1765576718));
                                arr_44 [i_0] = 32767;
                            }
                        }
                    }
                    var_33 = (arr_39 [i_0] [i_0] [11] [i_0]);
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                var_34 = ((((var_8 ? (arr_23 [i_0] [10] [i_0] [11] [10] [i_13 - 3]) : var_3)) == 1277269679));
                                var_35 = 16383;
                            }
                        }
                    }
                    arr_51 [i_1] [i_1] [i_0] = (max((((arr_22 [i_0] [i_0] [i_1 - 3]) ? -31659 : (arr_17 [i_0] [i_1] [i_2] [i_1 + 2] [9] [i_2]))), 3619056254));
                }
            }
        }
    }
    var_36 = 52698;
    var_37 = (((4294967289 + 1) ? var_14 : (((var_6 > -470572135) ^ var_19))));
    #pragma endscop
}
