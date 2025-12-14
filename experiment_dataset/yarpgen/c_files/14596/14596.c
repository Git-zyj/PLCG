/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_8 [i_2] [i_2] [i_2] [i_0] = (((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]) && var_1));
                    arr_9 [18] [0] [0] [18] = (arr_4 [i_0] [i_0] [i_0]);
                    arr_10 [i_0] [10] [i_2] [i_2] = (arr_1 [i_2]);
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_13 [i_0] [i_0] [i_1] [i_0] = var_11;
                    arr_14 [i_0] [i_1] [i_0] = (((arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ^ 243));
                }
                arr_15 [i_0] = -21;
                arr_16 [i_0] [i_1] = ((var_3 || (((var_8 ? (arr_2 [i_0]) : ((((arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1]) / var_5))))))));
            }
        }
    }
    var_12 = (~-var_1);
    var_13 = ((((!(3946 ^ 253)))) + ((-(var_4 + 1375753933))));

    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = ((((((max(3946, var_4))))) / (min((min((arr_11 [i_4] [i_4] [i_4]), 3923)), (arr_5 [i_4] [i_4])))));
        arr_20 [i_4] = var_4;
        arr_21 [i_4] [i_4] = var_10;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    arr_26 [i_4] [10] [10] = ((((!(((var_5 ? 0 : var_3))))) || ((min((!var_2), (max(1, 3940)))))));

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_29 [i_4] = (((arr_6 [i_7] [i_4] [i_4] [i_4]) * -1));
                        arr_30 [i_4] [i_6] = ((-(~var_11)));
                    }
                    arr_31 [i_4] [i_4] = ((!((!((max(-3707011833524925057, -3947)))))));
                    arr_32 [i_4] [i_4] [i_5] [i_4] = ((-((31351 + (-127 - 1)))));

                    for (int i_8 = 4; i_8 < 13;i_8 += 1)
                    {
                        arr_36 [i_4] [i_4] [1] [1] = var_0;
                        arr_37 [3] [3] [i_6] [i_4] [3] = ((-(min((min(var_2, 16128)), 1))));
                        arr_38 [2] [i_5] [10] = ((min(var_0, ((var_7 & (arr_2 [7]))))));
                        arr_39 [i_4] [i_5] [i_6] [i_4] = var_6;
                    }
                }
            }
        }
        arr_40 [4] = (16 - (-106 + -3952));
    }

    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        arr_43 [i_9] = (arr_6 [i_9] [0] [i_9] [6]);
        arr_44 [i_9] = ((-(min((arr_5 [4] [4]), -112))));
    }
    for (int i_10 = 1; i_10 < 13;i_10 += 1)
    {
        arr_47 [i_10] = ((((!(arr_46 [i_10] [16])))));
        arr_48 [i_10] [i_10] = (((-3976 ? 18014398509479936 : 3945)));
        arr_49 [i_10] [i_10] = ((-var_11 < (arr_0 [i_10 - 1] [i_10 + 1])));
        arr_50 [i_10] = var_3;
        arr_51 [i_10] = (min((3946 - 4181143468), ((var_11 - (max((arr_2 [i_10]), (arr_0 [i_10] [i_10])))))));
    }
    #pragma endscop
}
