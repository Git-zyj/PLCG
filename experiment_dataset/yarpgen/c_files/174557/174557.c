/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((((max(var_2, var_16))) || var_18))), (max((max(var_10, var_12)), ((max(var_10, var_15)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_20 = (max((arr_7 [6] [6] [6] [1]), (((((max(1116164047, -1194610499))) * (min((arr_4 [i_2] [i_2]), (arr_8 [1] [i_0] [0] [0] [i_0] [i_0]))))))));
                            var_21 = (max(var_21, (arr_5 [i_0] [i_1] [9])));
                            arr_9 [i_1] = (min((max((((arr_7 [i_0] [i_0] [i_1] [i_0]) / (arr_0 [i_2]))), ((min((arr_4 [i_2] [i_0]), (arr_0 [i_0])))))), (arr_3 [i_1])));
                            var_22 = ((((max((((arr_4 [i_2] [0]) / (arr_0 [i_0]))), ((max((arr_2 [i_1]), (arr_0 [7]))))))) / (max((max((arr_8 [i_0] [i_0] [i_0] [i_1] [1] [i_0]), (arr_7 [i_0] [i_0] [i_1] [i_0]))), ((max((arr_8 [i_0] [i_1] [i_1 + 2] [i_1] [10] [i_3]), (arr_4 [i_0] [i_0]))))))));
                        }
                    }
                }
                arr_10 [i_1] = (arr_0 [i_0]);
                var_23 = (max(((max(115, 1157218766))), (max(((min((arr_2 [i_0]), (arr_1 [i_1])))), (max((arr_1 [8]), (arr_7 [12] [12] [i_1] [12])))))));
            }
        }
    }

    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = (arr_11 [i_4]);
        arr_16 [i_4] = (max(((max((max((arr_14 [i_4]), (arr_2 [i_4 + 1]))), ((((arr_8 [i_4 - 2] [i_4] [i_4] [i_4] [i_4] [i_4]) != (arr_6 [i_4] [i_4] [i_4]))))))), (max((max((arr_4 [i_4] [i_4]), (arr_7 [i_4 - 1] [i_4 + 2] [i_4] [12]))), ((((arr_8 [i_4] [i_4] [i_4] [i_4] [i_4 - 1] [i_4]) < (arr_11 [i_4]))))))));
        arr_17 [i_4 + 2] = (max((((min((arr_7 [i_4] [12] [i_4] [i_4 - 2]), (arr_13 [i_4]))) + (arr_5 [i_4 - 2] [i_4 + 2] [i_4 + 2]))), ((((max((arr_6 [10] [6] [i_4]), (arr_4 [i_4] [i_4]))) & (arr_6 [i_4] [i_4] [i_4]))))));
        var_24 = (max(var_24, ((max(((((max((arr_7 [i_4] [4] [i_4] [12]), (arr_3 [i_4]))) <= (arr_2 [i_4])))), (min(((max((arr_4 [1] [i_4 - 2]), (arr_11 [i_4 + 1])))), (((arr_7 [i_4] [i_4] [i_4] [1]) * (arr_1 [i_4]))))))))));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 7;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_25 = (min(((max((((arr_2 [i_5]) - (arr_23 [9] [9] [i_7]))), (max((arr_19 [i_9]), (arr_32 [i_5] [1] [i_6] [i_6] [i_8] [i_7] [i_9])))))), (arr_7 [i_8] [i_8] [i_7] [i_8])));
                                var_26 = (max(var_26, (((max((max(3558780642381938737, -322757018438159629)), (((0 + (arr_13 [5])))))) - 1))));
                            }
                        }
                    }
                    var_27 = (max((-9223372036854775807 - 1), 0));
                }
            }
        }
        var_28 = ((max((((arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) * 841353597)), 262143)) / (max(((min(1, 1))), 255200647)));
        var_29 = (max((((max((arr_1 [i_5]), (arr_30 [i_5] [i_5] [i_5] [i_5] [i_5]))) / (min((arr_6 [i_5] [i_5] [i_5]), (arr_24 [i_5] [1] [i_5]))))), ((max((max((arr_12 [i_5]), (arr_11 [i_5]))), (max((arr_12 [i_5]), (arr_11 [i_5]))))))));
        var_30 = max(226, 1);
        arr_33 [i_5] = (((arr_6 [i_5] [9] [i_5]) && (arr_19 [i_5])));
    }
    var_31 = (min(var_31, ((max(((min((var_0 * var_17), var_16))), ((var_12 * (var_0 * var_7))))))));
    var_32 = max((max((var_4 / var_16), (max(-406224212, 0)))), (min((var_14 != var_11), (max(20, -841353596)))));
    #pragma endscop
}
