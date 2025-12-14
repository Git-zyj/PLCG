/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [5] [i_0];
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_12 [i_2] |= (max((((var_5 ? (arr_10 [i_2] [i_2] [i_2] [i_2] [4] [i_2]) : 101))), (arr_11 [i_1] [i_1] [i_2] [i_3 - 1])));

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            var_19 = (max(var_19, ((min(((var_18 - ((171 ? 4842579180364677872 : -4842579180364677873)))), ((((arr_1 [i_0 + 3]) >= 3434919806))))))));
                            arr_15 [i_3] = ((~((((arr_10 [i_4] [i_3] [i_3] [i_3] [7] [i_0]) >= (arr_0 [i_1 + 1] [7]))))));
                            var_20 = arr_0 [i_4] [1];
                        }
                        for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            var_21 = (((arr_5 [i_5] [i_2]) + 12382988726682572599));
                            var_22 = (arr_18 [i_0 + 3] [i_0 + 3] [i_2] [10] [i_3]);
                            arr_20 [i_3] [i_1] [i_2] [i_1] [i_3] = (((max((arr_5 [i_0 + 2] [i_3 + 1]), -4842579180364677850)) + (((((arr_5 [i_0 + 3] [i_3 + 2]) >= (arr_5 [i_0 - 1] [i_3 + 4])))))));
                        }
                        for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] [i_0 + 1] [i_3] [i_0 + 1] = (((((((max((arr_14 [9] [9] [4]), (arr_6 [i_0 + 3] [i_0 + 3] [i_2])))) ? (-21712 >= 17806) : 21731))) >= (max((((arr_4 [i_6] [i_1 - 1]) ? var_1 : 4842579180364677877)), (~var_11)))));
                            arr_25 [i_0] [i_0] [i_2] [i_3] [i_3] = ((6063755347026979018 ? ((((((arr_6 [i_0 - 1] [i_1] [i_2]) ? var_5 : (arr_14 [i_3 + 4] [i_2] [i_0])))) ? 14948 : -var_17)) : ((((arr_0 [6] [i_2]) >= 177)))));
                            var_23 = (arr_5 [i_0 + 2] [12]);
                            var_24 = (((max((arr_21 [12] [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 3]), (((-31334 ? var_0 : var_16))))) - var_13));
                        }
                    }
                }
            }
        }
        var_25 = (arr_18 [i_0] [i_0] [i_0] [i_0] [4]);
    }
    for (int i_7 = 1; i_7 < 16;i_7 += 1)
    {
        var_26 = (arr_27 [i_7]);
        var_27 = ((((min(var_16, var_17))) >= (((!(((var_6 ? 44 : (arr_26 [i_7])))))))));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    arr_35 [i_8] [i_9] = (((arr_28 [i_10]) ? (min(165, (arr_27 [i_10]))) : ((-4842579180364677873 ? 1327235066 : (arr_32 [i_8] [14] [i_9] [i_9])))));
                    arr_36 [i_9] [i_9] [i_10] = ((((((((~(arr_32 [i_10] [i_9] [i_9] [i_8])))) ? (arr_27 [i_10]) : (arr_32 [i_8] [i_9] [i_9] [i_10])))) ? (((((max(var_5, (arr_34 [i_8] [i_9] [i_10]))))) + (56 - 2067404002))) : (((((!(arr_26 [i_8]))))))));
                }
            }
        }
        var_28 = (max(var_28, ((max(((min(var_16, (arr_28 [i_8])))), (((((var_0 + (arr_30 [i_8] [i_8])))) ? (arr_33 [i_8] [i_8]) : ((var_5 ? var_17 : var_10)))))))));
    }
    var_29 = (min((min(var_4, (var_7 - var_2))), ((min((-5148856230621126176 && var_9), var_7)))));
    #pragma endscop
}
