/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((((!(((112 << (((arr_3 [i_0] [i_0] [i_0]) + 1989684539))))))) && -122));
                    var_19 = var_6;
                    var_20 = (max(((((arr_2 [i_0]) << (((((((arr_2 [i_0]) ? (arr_0 [0]) : (arr_4 [i_0] [i_0] [i_0]))) + 42)) - 2))))), ((((max((arr_1 [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0])))) ? var_2 : (max(var_18, (arr_2 [i_0])))))));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_1] = ((arr_2 [i_0]) - (arr_2 [i_0]));
                    var_21 = (max((arr_1 [4] [4]), (max(3896763311786896611, 1))));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    var_22 = var_2;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_6] [i_0] [i_0] [i_6] [i_0] = arr_1 [12] [12];
                                arr_23 [i_0] [i_1] [i_6] [i_6] = (arr_5 [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    var_23 -= (var_6 ? ((((arr_8 [i_1 + 2] [i_1] [i_0]) == (arr_8 [i_1 - 1] [i_1 - 1] [i_4])))) : (((!(((var_3 ? (arr_1 [i_1] [i_1]) : 0)))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_29 [i_8] [i_7] [1] [i_1] [i_1] [i_7] [i_0] = (!((((max((arr_2 [i_1]), (arr_27 [i_7] [i_7] [i_4] [i_1 + 1] [i_7]))) + (arr_28 [i_1] [i_1] [i_1] [i_4] [i_8 - 1] [i_8])))));
                                var_24 = (max(var_24, (((!(arr_20 [i_0] [i_1] [i_4] [i_7] [i_4] [i_8]))))));
                            }
                        }
                    }
                    var_25 = (arr_5 [i_4] [i_1 + 2] [i_0] [i_0]);
                }
                arr_30 [i_0] = (((max(var_6, var_16)) <= (!-0)));
            }
        }
    }
    var_26 = ((((var_4 > var_9) + (var_4 * var_4))) & (max(var_0, (~var_9))));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            {
                var_27 -= ((~(arr_36 [i_9] [8] [i_9])));

                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    arr_40 [i_9] [i_9] [i_10] [i_9] = ((~(max((arr_37 [i_10] [i_10] [i_9] [i_9]), (arr_37 [i_11] [i_10] [i_9] [i_9])))));
                    var_28 = -889455530;
                }
                arr_41 [14] [14] [i_10] = (arr_38 [i_10]);
            }
        }
    }
    var_29 = (min(var_29, var_0));

    for (int i_12 = 4; i_12 < 14;i_12 += 1)
    {
        var_30 = (max(var_30, (((var_5 / (arr_24 [i_12] [i_12 - 1] [i_12 - 3] [i_12 - 2] [i_12 - 2] [i_12 - 4]))))));
        var_31 = max((((max(1308276576, (arr_28 [1] [1] [i_12] [i_12] [i_12] [i_12]))) & (((arr_16 [i_12]) ? 3351 : var_5)))), (((max((arr_2 [i_12 - 2]), (arr_34 [i_12]))))));
        var_32 = (max(var_32, ((~((1308276588 + (arr_37 [i_12] [i_12] [1] [i_12])))))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                {

                    for (int i_15 = 1; i_15 < 13;i_15 += 1)
                    {
                        var_33 = (min(var_33, (arr_14 [i_12] [i_12])));
                        var_34 += ((!((((arr_43 [i_12 - 3] [i_15 + 2]) ? (arr_20 [i_12 - 3] [i_13] [i_15 + 1] [i_15 - 1] [i_12] [i_15 + 2]) : (arr_16 [i_12 - 3]))))));
                    }
                    arr_53 [i_13] [i_13] [i_14] = ((!(!113)));
                    var_35 = (max((max((!7799), (max(var_16, (arr_13 [i_12]))))), (((-86 << (((!(arr_49 [i_12 - 4] [i_12 - 4] [i_14] [i_12 - 2])))))))));
                    arr_54 [i_12 - 4] [i_13] [i_14] [i_14] = ((-(-9223372036854775807 - 1)));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 14;i_17 += 1)
                        {
                            {
                                arr_60 [i_17 + 1] [i_13] [4] [i_13] [i_12] = ((((max(1665233784, -1308276581))) | (~1914072644644169236)));
                                var_36 = (((((~(arr_45 [i_12 - 1] [i_12 - 4] [i_17 + 1])))) ? ((((arr_50 [i_12 - 1] [i_12 - 4] [i_17 + 1] [i_17 + 1]) == (arr_6 [i_12 - 1] [i_12 - 4] [i_17 + 1] [i_17 + 1])))) : ((((arr_59 [i_12 - 1] [i_12 - 4] [i_13]) < (arr_6 [i_12 - 1] [i_12 - 4] [i_17 + 1] [i_17 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_18 = 2; i_18 < 24;i_18 += 1)
    {
        arr_64 [i_18] &= (arr_62 [19] [1]);
        var_37 = (((arr_63 [i_18 - 2]) / (arr_61 [i_18 - 1])));
        var_38 += ((!(arr_62 [i_18] [i_18 + 1])));
    }
    #pragma endscop
}
