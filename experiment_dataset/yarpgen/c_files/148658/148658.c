/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = var_0;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_20 = (((arr_4 [i_1 + 1] [i_1] [i_1 - 1]) * var_4));
                        arr_14 [i_0] [12] [i_1] [5] [i_2] = (((arr_7 [i_1]) ^ (arr_7 [i_1])));
                        arr_15 [i_1] [i_1] = (-393158344625603462 != -2791551854);
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_18 [i_4] [i_4] [i_0] = (arr_13 [i_4]);
            arr_19 [i_4] [i_4] [i_4] = ((((((arr_12 [i_0] [3] [i_0] [17]) + var_1))) + 2791551854));
        }
        arr_20 [i_0] = var_15;
        arr_21 [i_0] [i_0] = (arr_17 [i_0] [i_0]);
    }
    for (int i_5 = 2; i_5 < 23;i_5 += 1)
    {
        arr_24 [i_5] = var_12;
        var_21 = ((((max(((max(var_16, (arr_22 [i_5])))), var_10))) ? ((((((arr_22 [7]) * (arr_23 [i_5 - 1] [i_5])))) ? (var_8 * var_5) : ((((arr_23 [i_5 - 1] [i_5]) / (arr_22 [i_5 + 1])))))) : ((min((arr_22 [i_5 + 1]), var_12)))));
        var_22 = (arr_22 [i_5 + 1]);
        arr_25 [i_5] = ((-(((-(arr_23 [i_5] [i_5 + 1]))))));
        arr_26 [i_5 + 1] [0] = (((arr_23 [i_5 + 1] [i_5 + 1]) ? (((!(~231)))) : ((max((arr_22 [i_5 + 1]), (arr_22 [i_5 + 1]))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 23;i_8 += 1)
            {
                {
                    arr_36 [i_6] [i_6] [i_8 - 2] = (((~-3497845124711876435) ? (~-21062) : (max(var_5, (arr_33 [i_6] [i_6] [i_8 + 1])))));
                    arr_37 [i_6] [i_8 + 1] [i_8] = (arr_27 [i_6]);
                    arr_38 [i_6] [i_6] [i_7] [2] = (min(13003, 24847));
                    var_23 = ((min(1503415442, (arr_35 [i_8 + 1] [i_8 - 1] [i_8 - 2] [i_7]))) * ((((!((max(1503415442, 1))))))));
                }
            }
        }
        var_24 = (max(((max((arr_32 [i_6] [i_6]), (arr_32 [i_6] [i_6])))), ((0 ? 2791551839 : 2791551869))));
        arr_39 [i_6] = ((var_16 ? 1503415441 : (max((((arr_29 [i_6]) * (arr_35 [16] [i_6] [i_6] [i_6]))), (arr_22 [i_6])))));
    }
    var_25 = var_15;
    #pragma endscop
}
