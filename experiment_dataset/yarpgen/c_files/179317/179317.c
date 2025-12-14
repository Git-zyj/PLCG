/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max(var_7, (min(1, (arr_1 [i_0])))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_15 = ((((min((!var_7), (arr_4 [i_0])))) || (((-((5004618371846670796 ? 11290312089909530334 : var_2)))))));

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            arr_17 [i_3 - 4] = var_10;
                            var_16 = var_8;
                            var_17 = (max(var_17, (((~((((((arr_16 [5] [i_1] [i_2] [i_0] [i_1] [i_2]) - var_12)) != -16))))))));
                            var_18 = (!108);
                            var_19 = (min((((arr_0 [i_3 - 1] [i_3 - 2]) ? (arr_0 [i_3 - 3] [i_3 - 3]) : (arr_0 [i_3 + 3] [i_3 - 4]))), -var_11));
                        }
                    }
                }
                var_20 = ((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]) | var_5);
                var_21 &= (((arr_6 [i_2] [i_1] [i_0]) < ((-(max((arr_6 [i_0] [i_1] [i_2]), (arr_0 [i_1] [i_1])))))));

                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_2] [i_5] [i_6] |= (((arr_14 [i_1] [i_1] [i_1]) ? (arr_14 [i_5] [i_2] [i_0]) : -4294967278));
                        var_22 = (min(var_22, (((+(((arr_15 [i_0] [i_1] [i_2] [i_5] [i_6]) ? var_11 : -var_6)))))));
                        var_23 = (((((min((arr_8 [1] [i_1] [i_2]), var_5)))) || ((!((max(var_8, (arr_13 [i_0] [i_1] [15] [i_5]))))))));
                        var_24 = (min(((max(var_5, (arr_1 [i_2])))), (arr_19 [i_0] [i_1] [i_2] [i_2] [i_5] [i_6])));
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_25 |= ((((((var_0 ? (arr_13 [i_0] [i_0] [8] [i_0]) : 3347))) ? ((min(229, (arr_20 [i_0] [i_1] [i_2] [i_5] [i_5] [i_7])))) : ((15 ? 0 : var_10)))) ^ (max(((max(2997, var_9))), ((1 ? (arr_8 [i_0] [i_1] [i_2]) : var_1)))));
                        arr_27 [i_7] [i_5] [i_2] [i_2] [i_1] [i_0] [i_0] = ((var_10 & (((-28731 ? 3366 : (arr_8 [i_0] [i_1] [i_1]))))));
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_30 [i_2] = 7156431983800021295;
                        var_26 = ((!((min((max(103, 15)), (((var_2 ? var_11 : 147))))))));
                    }
                    arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] = (((17 ? var_7 : (~var_11))));
                    var_27 = 7156431983800021279;
                }
                for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                {
                    arr_34 [i_0] [i_0] [i_2] [i_9] [i_9] = ((-104 ? (arr_7 [i_1]) : ((-(arr_7 [i_2])))));
                    var_28 |= ((((max((((arr_9 [i_0] [i_2]) ? (arr_18 [i_0] [i_0] [13] [13] [i_2] [13]) : (arr_10 [i_0] [i_1] [i_2] [i_0]))), (!var_5)))) || (((-(arr_18 [i_0] [i_1] [i_2] [i_2] [i_9] [i_9]))))));
                    arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_2 [i_2] [6]);
                }
                var_29 = var_3;
            }
            var_30 = var_7;
            arr_36 [i_0] [i_0] &= ((max(7156431983800021265, var_11)));
        }
    }
    #pragma endscop
}
