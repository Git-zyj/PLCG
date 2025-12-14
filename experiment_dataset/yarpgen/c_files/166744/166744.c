/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        var_10 = (((-((~(arr_1 [i_2] [i_3 - 2]))))));
                        var_11 = (~((~(arr_6 [i_0] [10] [i_1 + 1] [0]))));
                        var_12 = (max((max((arr_5 [i_2 - 3] [i_2]), var_1)), (((~(arr_5 [i_2 - 2] [6]))))));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] = ((!(arr_6 [i_0] [i_0] [8] [i_0])));
                        var_13 = (-((-(arr_11 [4] [i_1] [i_2 - 1] [i_1 + 1] [i_0] [i_0]))));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [14] [i_0] [i_1] = (arr_0 [i_0]);
                        arr_18 [i_0] [i_0] [i_1] [i_1] [i_1] [i_5 - 1] = (~32283);
                        arr_19 [i_0] [i_1] [i_2] [i_2] = (max((((!(var_8 < var_1)))), (~var_9)));
                    }
                    var_14 = var_1;
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_15 = ((-((var_5 << ((((~(arr_12 [i_1 + 1] [i_1 + 1] [i_6] [i_6] [14]))) - 42))))));

                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        var_16 = var_8;
                        var_17 = (max(var_17, var_7));

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_18 = var_2;
                            arr_28 [i_1] [i_1] = ((-((((!-1) > ((~(arr_4 [i_0] [5]))))))));
                        }
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        arr_33 [i_0] [1] [8] [i_1] = ((-(((!(arr_11 [8] [i_1] [i_1] [i_6] [i_9] [i_9]))))));
                        arr_34 [i_0] [i_1] [i_6] [i_1] = -1;
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_1] [1] [13] [i_10] = ((-(~var_3)));

                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            var_19 = var_2;
                            arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = var_5;
                            var_20 = -var_5;
                            arr_43 [i_0] [i_1] [i_6] [i_1] = (--10);
                        }
                        var_21 = (max((min((~var_1), (arr_35 [i_1] [18] [8] [i_1 + 1] [i_1 + 1] [i_1]))), (arr_7 [i_0] [i_0])));
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_1] [i_1 + 1] [0] [i_1 - 1] = ((!(var_8 - var_8)));
                        arr_47 [i_1] [i_1] [i_6] = -var_6;
                        var_22 = var_0;
                        arr_48 [i_0] [i_1] [i_0] [i_0] [1] [1] = var_1;
                    }
                    arr_49 [i_1] [i_1] = (min(var_4, (!13)));
                    var_23 = (!var_4);
                }
                arr_50 [i_1] [1] = var_0;
            }
        }
    }
    var_24 = ((min((!var_5), var_6)));
    #pragma endscop
}
