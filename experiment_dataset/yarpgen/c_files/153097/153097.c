/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 17095226227382344206;
    var_20 = ((!(1351517846327207409 ^ 71)));
    var_21 = var_9;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_6;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_22 = -102;
                    arr_12 [3] [i_1] [i_3] [i_2] [i_1] = (((!var_7) ? ((var_1 ? (arr_1 [i_0]) : (arr_9 [i_2]))) : ((10284449213667633271 ? (arr_0 [i_0]) : (arr_1 [i_2])))));
                    arr_13 [i_2] [i_1] [i_1] [i_3] [i_0 - 3] [12] = (((arr_6 [i_0] [i_1] [i_1] [i_3]) - (arr_6 [i_2] [i_2] [i_2] [i_2 - 1])));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_2] [i_1] [1] [i_4] = (arr_8 [3] [i_2]);
                    arr_17 [i_2] [1] [i_2] = (~11);
                    arr_18 [i_0] [9] [i_2] [i_4] = (arr_10 [i_4] [i_2] [6] [i_0 + 4]);
                }
                arr_19 [i_2] = var_12;
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                arr_23 [i_0] [i_1] [i_5] = 242;
                arr_24 [i_0] [i_5] = (arr_11 [i_5] [i_5] [i_5] [i_1] [i_0]);
                var_23 = (arr_8 [i_5] [i_5]);
            }
            arr_25 [i_0 - 2] [i_0 - 2] [i_0 - 2] = (((max((~198), var_8)) / (arr_6 [i_0] [i_0] [10] [i_0])));
            arr_26 [i_1] [i_1] [i_0] = var_9;
            arr_27 [i_1] = ((-var_13 < (arr_2 [i_0] [i_0])));

            for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    arr_34 [i_0] [i_7 - 1] [i_1] [i_7] = (arr_5 [i_0 + 2]);
                    arr_35 [6] [i_6] [i_0] [i_1] [i_7] = (((((var_1 ? 1 : 13))) && (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    var_24 = (max(var_24, (arr_30 [i_7 - 1] [i_7] [1] [1] [i_7] [i_7])));
                }
                for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    arr_39 [i_0] [i_1] [i_6] [i_1] = (arr_0 [i_0]);
                    var_25 = var_5;
                    arr_40 [i_0] [i_6] = (((arr_0 [i_8 - 1]) ? 1351517846327207410 : 1));
                }
                arr_41 [i_0 + 3] [i_1] [i_1] = (max((!1), ((-((max(245, 182)))))));
                arr_42 [13] [i_1] [i_6] [3] = min(1, 1);
            }
            for (int i_9 = 2; i_9 < 12;i_9 += 1) /* same iter space */
            {
                var_26 = (max(var_26, (arr_38 [i_0])));
                arr_46 [i_0] [i_9] = var_8;
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 12;i_11 += 1)
                    {
                        {
                            arr_51 [i_1] [i_10] [i_10] = var_7;
                            arr_52 [i_0] [i_10] [i_0] [13] [10] = -20129;
                            arr_53 [i_11] [i_10] [i_10] [i_0] = (~9046791934511850159);
                            arr_54 [i_10] [i_10] = ((arr_30 [7] [i_1] [7] [i_9 - 2] [i_10] [i_11]) + 1);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
