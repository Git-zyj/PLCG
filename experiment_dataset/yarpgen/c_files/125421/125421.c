/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_6 ? var_9 : -2525391649)));

    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 3] = (arr_1 [i_0]);
        arr_3 [i_0 - 2] = ((max((arr_1 [i_0]), (min((arr_0 [i_0]), 1769575647)))));
        arr_4 [i_0 - 3] [i_0] = ((((min(var_8, var_8))) ? (((arr_0 [i_0 + 1]) ? 2525391649 : (arr_1 [i_0 - 2]))) : ((((arr_0 [i_0 - 2]) << (-408738145 + 408738152))))));
        arr_5 [i_0 - 3] = 1769575646;
        arr_6 [i_0 + 1] = ((max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 2]))));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            arr_12 [i_1] [i_2] = var_0;
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_19 [i_4] = (~(arr_11 [i_3]));
                        arr_20 [i_4] [i_2 + 1] = var_2;
                        arr_21 [i_3] [i_2] = (((~(arr_0 [i_2 - 1]))));
                        arr_22 [i_3] [i_2] [i_3 - 1] = var_6;
                        arr_23 [i_4] [i_2] [i_2 + 2] = var_5;
                    }
                }
            }
            arr_24 [i_2 + 1] [i_2] = -2525391651;
        }
        arr_25 [i_1] [i_1 - 3] = ((var_8 + (arr_18 [i_1 - 3] [i_1 - 3] [i_1 + 1] [i_1 + 1])));
        arr_26 [i_1] [i_1] = (((arr_18 [i_1 + 1] [i_1 + 1] [i_1 - 2] [i_1 - 2]) >= ((-(arr_18 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1])))));
    }
    for (int i_5 = 3; i_5 < 18;i_5 += 1) /* same iter space */
    {
        arr_29 [i_5] = (((-1 ? var_4 : (arr_7 [i_5 + 1] [i_5 + 1]))));
        arr_30 [i_5] = ((((min((arr_0 [i_5 - 1]), var_1))) < (arr_18 [i_5 + 1] [i_5] [i_5 - 1] [11])));

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            arr_33 [6] = (min((arr_0 [i_6]), (var_2 > 2525391649)));
            arr_34 [i_6] = (arr_0 [i_6]);
            arr_35 [i_5] [i_6] [i_6] = arr_18 [i_5] [i_6] [i_5] [i_5];
            arr_36 [i_5] [i_6] = (((((20617 ? 1788166226 : 181))) * ((var_6 & (arr_0 [i_5 - 3])))));
        }
        for (int i_7 = 2; i_7 < 17;i_7 += 1) /* same iter space */
        {
            arr_39 [1] [i_7] [i_5 + 1] = var_9;
            arr_40 [i_5] [i_5] [i_7] = ((((~(arr_0 [i_7 - 2]))) > (((max(var_8, (arr_1 [i_5])))))));
            arr_41 [i_5 - 1] [i_5 - 1] = (((min((max((arr_9 [i_7 - 1] [i_5]), var_6)), -var_0)) >= (((-(((var_7 || (arr_8 [i_7] [15])))))))));
        }
        for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 4; i_9 < 16;i_9 += 1)
            {
                arr_46 [i_8] [i_8 - 1] [i_9] [i_8] = var_4;
                arr_47 [i_5] [i_8] [i_9 - 4] [i_9] = 2179160487;
                arr_48 [18] = 1023;
            }
            for (int i_10 = 1; i_10 < 16;i_10 += 1) /* same iter space */
            {
                arr_51 [4] [i_8 + 1] = ((~((~(arr_44 [i_5 - 3] [7] [i_10 + 2])))));
                arr_52 [i_10] [12] [18] = (min((arr_45 [2] [i_8] [4]), ((((arr_15 [i_5] [i_5 - 3] [10] [i_5 + 1]) < var_1)))));
            }
            for (int i_11 = 1; i_11 < 16;i_11 += 1) /* same iter space */
            {
                arr_56 [12] [i_8] [i_8] |= ((!((!(arr_11 [i_5 - 2])))));
                arr_57 [2] [6] [i_11 - 1] = var_7;
                arr_58 [i_5] [i_8] [i_11 + 2] = (-(min((arr_16 [i_5 - 1] [i_5] [i_8 - 1] [i_8] [i_11] [i_11 - 1]), (arr_16 [i_11 + 1] [i_8 - 2] [i_8] [i_8] [i_5] [i_5]))));
            }
            arr_59 [i_8] = ((var_7 & (((arr_0 [i_5 - 3]) ? var_6 : var_7))));
        }
    }
    #pragma endscop
}
