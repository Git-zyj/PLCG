/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((((var_5 < var_9) & (var_3 == 9061564927681202105)))), var_18));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_20 = (i_0 % 2 == 0) ? ((((((arr_0 [i_0 + 1] [i_0]) >> (((arr_0 [i_0 + 1] [i_0]) - 1127632962)))) << (var_16 - 3014766192)))) : ((((((((arr_0 [i_0 + 1] [i_0]) + 2147483647)) >> (((((arr_0 [i_0 + 1] [i_0]) - 1127632962)) + 1142167350)))) << (var_16 - 3014766192))));
        arr_4 [4] |= (((1 < 9385179146028349509) ? (arr_3 [i_0 + 3] [18]) : (arr_0 [4] [4])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = (+-74);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_15 [i_3] [i_1] [i_3] [i_1] [i_1] [i_1] = (((((arr_10 [i_1] [i_4 - 1] [i_3 + 1]) >> (((arr_11 [i_1] [i_4 - 1] [i_3 - 1]) - 8627688024509370020)))) <= ((min((arr_11 [i_1] [i_1] [i_1]), ((((arr_13 [i_1] [i_1] [i_1] [i_4]) < var_0))))))));
                        var_22 = (max(var_22, ((min((arr_12 [i_3 - 1] [i_3 - 1] [i_4 - 1]), (min(((((arr_11 [i_1] [i_2] [i_4]) > 9061564927681202123))), (arr_14 [i_3 - 1] [i_4 - 1] [i_2] [i_4 - 1] [i_4 - 1]))))))));
                        arr_16 [i_3] [i_2] = ((max((arr_13 [i_1] [i_4 - 1] [i_1] [i_1]), 536838144)));
                    }
                }
            }
        }
        var_23 = ((((((arr_7 [i_1] [i_1]) > 0))) * (((0 || (arr_7 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_24 ^= (((!0) ^ ((((var_12 ? (arr_14 [i_1] [i_1] [i_7] [i_1] [i_7]) : var_4)) >> (var_8 && 18014397435740160)))));
                                var_25 = (((-75 / 3758129152) + (min((arr_22 [i_1]), (arr_26 [i_8] [i_8] [i_8] [i_7] [i_8])))));
                            }
                        }
                    }
                    var_26 = (min(var_26, ((((((-15114 < (arr_7 [i_6] [i_5])))) * (arr_7 [i_1] [i_1]))))));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 13;i_11 += 1)
            {
                {
                    arr_34 [i_9] = ((((max((arr_25 [i_10] [i_11] [i_10] [i_9] [i_9] [i_9] [i_10]), (max(var_3, (arr_11 [i_9] [i_9] [i_11])))))) ? var_8 : ((((((arr_9 [i_9] [i_9] [i_9]) - var_16))) ^ (max((arr_14 [i_9] [i_9] [i_10] [i_9] [i_9]), 60))))));
                    var_27 = ((!((min((((467439933 << (((var_3 + 31521) - 3))))), (min((arr_30 [i_9] [i_9]), (arr_10 [i_9] [i_9] [i_9]))))))));
                    arr_35 [i_11] [i_10] [i_9] = (((arr_30 [i_11 + 1] [i_10]) ^ ((((arr_17 [i_11 - 1] [i_10] [i_11 - 1]) >> (((arr_20 [i_9] [i_11 + 2] [i_11]) + 17272)))))));
                }
            }
        }
        arr_36 [i_9] [i_9] = (arr_1 [i_9] [i_9]);
    }
    var_28 = -var_16;
    #pragma endscop
}
