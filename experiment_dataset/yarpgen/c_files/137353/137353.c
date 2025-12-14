/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (arr_0 [i_0]);
                arr_6 [i_0] [i_0] = (arr_3 [i_0] [i_1]);
                var_17 |= (arr_5 [i_0]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_2] [6] [i_3] [i_4] = arr_11 [i_4] [i_3] [i_2] [i_1];
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((arr_11 [i_0] [i_0] [i_2] [i_4]) || (arr_10 [i_0] [i_3] [i_4]));
                                var_18 ^= (arr_8 [i_0] [i_1] [i_2]);
                                var_19 = arr_11 [i_0] [i_2] [i_1] [i_0];
                            }
                        }
                    }
                    var_20 = (min(var_20, (arr_9 [i_0] [i_1] [i_2] [16])));
                    arr_18 [i_0] [i_0] [i_2] = (arr_0 [i_0]);
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_21 = (min(var_21, ((((min(((min((arr_5 [i_5]), (arr_5 [i_1])))), (max((arr_19 [22] [i_1] [22]), (arr_7 [i_5] [i_1] [i_1] [3]))))) % (arr_12 [i_0] [i_0] [i_1] [18] [1] [i_0]))))));
                    arr_21 [1] [1] [i_0] &= ((max((arr_13 [4] [i_1] [i_5] [i_5]), (((arr_5 [i_0]) - (arr_9 [i_0] [i_0] [i_1] [10]))))));
                    arr_22 [i_0] = (((max(((max((arr_10 [i_0] [i_1] [i_5]), (arr_11 [i_0] [1] [1] [i_0])))), (arr_19 [i_0] [i_0] [i_0]))) - (((max(1, 1))))));
                    arr_23 [i_1] [i_0] = (arr_0 [i_0]);
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_22 = (((arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) >= (arr_2 [i_6])));
                                var_23 = (max(var_23, (arr_12 [i_8] [1] [i_6] [i_6] [i_1] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            var_24 = (max(var_24, ((min((max((arr_33 [i_10]), ((max((arr_31 [i_9]), 135))))), (arr_31 [i_10]))))));
            var_25 *= (arr_31 [i_9]);
            arr_35 [i_9] = (arr_33 [i_10]);
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_26 = (((arr_31 [i_9]) - (max(((min((arr_32 [i_9]), (arr_36 [i_9])))), (((arr_37 [i_9] [i_9] [i_11]) - (arr_32 [i_9])))))));
            arr_38 [i_9] [i_11] = (arr_36 [i_11]);
            var_27 = (min((max((arr_34 [i_11]), (max((arr_33 [i_11]), (arr_31 [i_9]))))), (arr_34 [i_9])));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    {
                        var_28 = (arr_32 [i_12]);
                        var_29 = (arr_37 [i_9] [i_11] [i_12]);
                        var_30 = max((((arr_33 [i_13]) - (min((arr_33 [6]), (-2147483647 - 1))))), ((((((arr_36 [i_9]) || (arr_42 [i_13] [i_11] [i_12] [i_13])))) - (max((arr_41 [i_13] [i_9] [i_9] [i_9]), (arr_36 [i_9]))))));
                    }
                }
            }
            var_31 &= (min((arr_32 [i_9]), (arr_41 [i_11] [i_11] [i_9] [8])));
        }
        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            arr_48 [i_14] = (max((arr_36 [i_14]), (((((((arr_42 [i_14] [i_9] [i_14] [i_14]) << (((arr_33 [i_9]) + 6890))))) <= (max((arr_37 [i_14] [i_9] [i_9]), (arr_47 [i_9] [20] [i_14]))))))));
            var_32 -= (max((min((arr_40 [i_14] [i_14]), ((((arr_32 [i_14]) || (arr_31 [i_9])))))), ((min((min((arr_42 [22] [i_9] [i_9] [22]), (arr_34 [i_9]))), (arr_34 [i_14]))))));
            var_33 = ((((((((arr_44 [i_9] [i_9] [i_9] [i_9] [i_14]) > (arr_32 [i_9])))) >> (((arr_45 [i_14]) - 17816)))) >= (arr_36 [i_14])));
            var_34 = (((max((min((arr_45 [i_9]), (arr_37 [i_14] [i_9] [i_9]))), (arr_39 [i_9] [i_14]))) >= ((((arr_42 [i_14] [23] [i_9] [i_14]) - (arr_32 [i_9]))))));
        }
        arr_49 [i_9] = (arr_33 [i_9]);
    }
    var_35 = var_4;
    var_36 = (max(var_36, ((((max(var_0, ((max(var_14, var_7))))) + var_2)))));
    #pragma endscop
}
