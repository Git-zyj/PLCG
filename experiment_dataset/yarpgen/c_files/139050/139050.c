/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_11 = var_1;
        var_12 = (arr_1 [i_0]);
    }

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (-(((((var_5 != (arr_2 [4])))) ^ var_10)));
        arr_6 [i_1] [i_1] = ((+(((!636541711) ? var_4 : (arr_4 [i_1])))));
        var_13 = (arr_2 [i_1]);

        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] = var_4;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    {
                        var_14 = (((arr_3 [i_1]) * (((arr_7 [i_4 - 1]) | (min((arr_11 [i_3] [i_2] [i_1]), var_6))))));
                        arr_14 [i_1] [i_2] [i_2] [i_4] = var_1;
                    }
                }
            }
            arr_15 [i_2] = (((!var_8) ? (min((arr_4 [13]), (arr_7 [i_1]))) : 15));
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_15 = (min(((((((arr_21 [i_7]) << (((arr_2 [i_1]) - 700834459))))) ? (((65535 ? 27 : 65515))) : ((var_6 ? (arr_4 [i_6 + 1]) : (arr_3 [i_1]))))), (min(((var_8 ^ (arr_10 [i_2]))), var_9))));
                            var_16 = (max(var_16, (arr_8 [i_7])));
                            arr_24 [i_2] [i_2] [i_5 + 2] [9] [i_7] [i_2] = (117016740 ? 1 : 0);
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_28 [i_1] [i_1] = (max((arr_8 [1]), (((var_7 / ((-(arr_2 [i_8]))))))));
            arr_29 [i_8] = ((((-(arr_13 [i_1] [i_1] [i_8] [i_8] [i_8] [i_1])))) ? (((((var_8 > (arr_8 [2])))) >> (((arr_20 [i_1] [i_1] [i_1] [i_8] [18]) + 107)))) : (arr_13 [i_1] [1] [i_8] [i_1] [i_8] [i_1]));
            arr_30 [i_8] &= (arr_2 [i_1]);
        }
        arr_31 [i_1] = (arr_3 [i_1]);
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        var_17 = (min(var_17, (((var_4 ? (((((arr_16 [i_9] [i_9] [16]) ? (arr_3 [i_9]) : (arr_23 [i_9] [3] [i_9] [i_9] [9]))) >> ((((var_2 ? (arr_7 [i_9]) : var_3)) + 15174)))) : -43)))));
        arr_35 [i_9] = (((((-((var_5 - (arr_33 [i_9])))))) ? ((65508 ? 117016740 : 4294967295)) : var_0));
    }
    var_18 *= (var_0 ? var_3 : (((((var_1 ? var_5 : var_2)) != (var_4 * var_9)))));
    var_19 = (((var_0 >= (var_4 * var_7))));
    #pragma endscop
}
