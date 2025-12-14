/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            arr_4 [1] [i_1] = ((+((max((((arr_3 [i_0] [i_0] [i_0]) != var_18)), (((arr_3 [i_1] [i_1] [i_1]) && 63673)))))));
            arr_5 [i_0] = max((((!(arr_0 [i_0 + 1] [1])))), (max(var_14, var_10)));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            var_20 &= (!var_7);
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_21 = (arr_8 [i_0 - 1] [i_3 - 1] [i_3]);
                        var_22 = (arr_3 [i_3 + 1] [i_3 + 1] [i_3]);
                        var_23 = var_11;
                        var_24 *= 1;
                    }
                }
            }

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_25 = (((arr_12 [i_5] [12] [i_0 - 1] [12] [i_0 - 1]) || (((var_13 ? (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_7 [21] [21]))))));
                arr_16 [i_0] [i_0 - 2] = (arr_7 [i_5] [i_5]);
                arr_17 [i_0 - 2] [i_0 - 2] [i_2] [i_5] = var_6;

                for (int i_6 = 1; i_6 < 24;i_6 += 1)
                {
                    var_26 = var_2;
                    arr_20 [i_6] [i_2] [i_6] [4] = -108;
                    var_27 = (((var_6 - var_13) && (((199 ? var_4 : (arr_14 [i_0]))))));
                    arr_21 [i_0 - 2] [3] [5] [i_6] = ((((arr_18 [i_0] [8] [1] [i_5] [1] [1]) | var_2)));
                    var_28 = (((arr_13 [i_6] [i_6] [i_5] [i_0 - 2] [i_6]) == (arr_15 [i_2] [i_0 - 1])));
                }
                var_29 = (min(var_29, (((-(arr_15 [i_0 + 1] [i_5]))))));
            }
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {

                for (int i_8 = 2; i_8 < 24;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_30 &= ((-(((!(arr_28 [i_0] [i_2] [i_7] [i_9]))))));
                        var_31 = -var_10;
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        arr_33 [7] [i_0] [i_7] [i_7] [i_8] [i_10] = (arr_12 [i_0 - 2] [i_0 - 1] [i_0] [i_7] [i_0 + 1]);
                        arr_34 [i_7] [i_8] [i_7] [i_7] [i_2] [10] = var_9;
                        arr_35 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_7] = ((~((116 ? 111 : 65024))));
                        var_32 &= (arr_8 [i_0 - 2] [i_2] [i_8]);
                    }
                    var_33 = var_3;
                    arr_36 [i_0] [i_7] [i_8] = var_14;
                    var_34 = (min(var_34, (arr_1 [i_0] [i_2])));
                }
                for (int i_11 = 1; i_11 < 24;i_11 += 1)
                {
                    var_35 = ((var_12 ? var_16 : (~var_2)));
                    var_36 = (max(var_36, (arr_23 [i_11] [i_7] [i_2])));
                }
                var_37 = (((((arr_37 [i_0] [i_0] [i_2]) * (arr_22 [i_7]))) + (arr_7 [i_2 + 1] [i_0])));
                arr_39 [i_7] [i_2] [9] [i_7] = var_7;
                arr_40 [i_7] = (((arr_10 [i_7] [i_7] [i_2] [i_0]) ? (arr_18 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (((!(arr_38 [i_0] [i_0] [i_0]))))));
            }
            arr_41 [i_0 - 2] &= ((((((arr_24 [i_0]) >= (arr_11 [i_0] [24] [i_0])))) * var_2));
        }
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            var_38 -= (max((max((!var_16), var_11)), var_3));
            arr_45 [4] [i_0] = ((((((arr_22 [i_12]) + (arr_32 [i_0 + 1] [i_0 - 1] [i_0] [i_0])))) ? var_1 : var_13));
        }
        var_39 += var_17;
    }
    var_40 = var_12;
    var_41 = (min(((var_11 ? ((max(var_7, -13))) : ((var_9 ? var_3 : var_8)))), ((max((min(var_4, var_16)), var_9)))));
    #pragma endscop
}
