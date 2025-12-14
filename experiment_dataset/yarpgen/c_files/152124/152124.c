/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 += (arr_10 [i_3] [i_3] [i_3]);
                                var_19 = (min(var_19, (arr_6 [i_4] [i_2] [i_0] [i_0])));
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_1] = (max((max(1, (arr_1 [i_0]))), (max((max((arr_11 [i_1] [12] [4] [i_0] [i_0]), (arr_2 [6]))), (arr_5 [1] [i_1])))));
            }
        }
    }
    var_20 = (min(var_20, ((min(var_0, 114)))));

    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        var_21 *= max(((min((arr_10 [1] [1] [i_5]), (arr_13 [i_5])))), (min((((2147483645 ? 1 : -1232657397))), 15122969707470806539)));
        var_22 = (min(((((arr_9 [15] [i_5] [i_5 - 1]) ? (arr_9 [i_5] [i_5] [i_5 - 1]) : (arr_9 [i_5] [i_5] [i_5 + 1])))), (min((((arr_13 [i_5]) ? (arr_1 [3]) : (arr_8 [6]))), (arr_1 [i_5 - 1])))));
        arr_17 [i_5] [i_5] = (max((((!(arr_14 [i_5 - 1])))), (arr_10 [0] [0] [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    arr_24 [8] [7] [i_5] [i_5] = ((+(min((arr_8 [i_7]), (arr_8 [i_7])))));
                    var_23 ^= (min(((((min((arr_18 [i_5] [i_6]), (arr_1 [i_6])))) ? (((arr_10 [i_7] [8] [i_7]) ? (arr_16 [i_5] [i_5]) : (arr_15 [0] [8]))) : (min((arr_15 [i_7] [i_5]), (arr_13 [i_7]))))), (arr_13 [i_5])));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_24 = (min(var_24, ((max((min((((-(arr_23 [i_6] [i_6] [i_9])))), (((arr_22 [i_9] [i_5] [i_5]) ? (arr_25 [i_5] [i_8] [i_8] [i_8] [i_8]) : (arr_26 [i_5] [3] [i_7] [i_5] [i_9]))))), (((4055764346365150581 ? 3184231100 : 2199023255551))))))));
                                var_25 = (max(var_25, ((max((((max(2963, 1)))), ((~(min(14, -4055764346365150573)))))))));
                                arr_29 [i_5] [i_6] [i_5] [i_6] [i_5 + 1] = (((arr_28 [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5]) ? (min(4114252985679854949, 15727726695159114315)) : (((max(1, 0))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        var_26 ^= (arr_7 [i_10] [0] [i_10] [0]);

        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        var_27 *= (arr_9 [i_10] [i_10] [i_13]);
                        var_28 += (max((((arr_3 [i_11]) ? (arr_7 [i_10] [i_10] [i_10] [i_10]) : (((max((arr_32 [i_11] [i_11]), (arr_33 [i_11] [i_11] [i_11]))))))), (arr_35 [i_10] [i_13])));
                    }
                }
            }
            arr_39 [i_11] [i_10] = ((!((((~(arr_31 [i_10] [5])))))));
        }
        for (int i_14 = 2; i_14 < 16;i_14 += 1)
        {
            var_29 = (((max((arr_0 [i_14 - 1]), (arr_0 [i_14 - 1])))) ? (arr_0 [i_14 + 1]) : ((min((arr_0 [i_14 - 2]), (arr_0 [i_14 - 1])))));
            var_30 = (max(var_30, (((((max((min((arr_42 [i_14] [i_10] [i_10]), (arr_2 [i_10]))), (arr_32 [i_14 - 2] [i_14 + 1])))) ? (((min((min((arr_33 [i_10] [i_10] [i_10]), (arr_38 [i_10] [i_10] [i_14]))), (arr_38 [i_10] [i_10] [i_10]))))) : (min((arr_5 [i_10] [i_14 + 1]), (arr_5 [i_10] [i_14 - 2]))))))));
            arr_43 [i_14] = ((min((arr_41 [i_14 - 2] [i_14]), (arr_41 [i_14 - 2] [i_14]))));
        }
    }
    var_31 = var_9;
    #pragma endscop
}
