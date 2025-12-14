/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = var_5;
    var_16 = var_7;
    var_17 = ((var_10 + (((8372224 || -9042151548377382184) ? (!var_4) : (var_10 >= var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_18 = (arr_7 [i_0] [i_2] [i_0]);
                    var_19 = (((var_12 | var_13) != var_1));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_13 [i_0] [i_0] = (arr_1 [i_1] [i_1]);
                    var_20 = (arr_5 [i_1]);
                    var_21 = var_12;
                }

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_22 = var_1;
                        var_23 *= var_8;
                        var_24 *= -2139095040;
                        arr_21 [i_0] [i_4] = (2155872281 & 0);
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_25 = ((!((((1073610752 ? 65024 : 2155872248)) != 1))));
                        arr_26 [i_4] = ((-((var_6 ? (min((arr_5 [i_0]), var_10)) : var_3))));
                    }
                    for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_33 [i_4] [i_7 - 1] [i_1] [1] [i_1] [i_4] = ((((((arr_18 [i_4] [i_1] [i_1] [i_1]) / (arr_22 [i_4])))) - var_9));
                            arr_34 [12] [i_1] [i_4] [i_1] [i_1] [i_1] [i_1] = var_8;
                        }
                        arr_35 [i_4] = arr_10 [i_0 + 2] [i_1] [i_1] [i_7];
                        arr_36 [i_0] [i_1] [i_1] [i_0] [i_4] [1] = var_12;
                    }
                    var_26 = (!-1121860691);
                    arr_37 [i_0] [i_4] = (max(((min(0, 203))), (63488 & var_11)));
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_27 = var_3;
                            var_28 = ((((((arr_43 [i_0] [i_0 - 2] [i_0] [i_9]) || (arr_43 [i_9] [i_9] [i_1] [i_9])))) != (((arr_43 [i_0] [i_1] [i_9] [i_9]) - (arr_43 [i_10] [i_0 - 2] [i_9] [i_9])))));
                            var_29 = ((((((arr_29 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]) ? ((min((arr_12 [i_0] [i_0] [i_10] [i_10]), var_1))) : var_8))) ? (arr_41 [i_0] [i_1] [i_9] [i_9] [i_10]) : ((((var_11 && (arr_41 [i_0 - 1] [i_0] [i_1] [i_9] [i_9])))))));
                        }
                    }
                }
                arr_44 [i_1] = var_3;
            }
        }
    }
    #pragma endscop
}
