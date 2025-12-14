/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_1;
    var_21 = (((((var_19 ? var_17 : var_2))) ? ((var_0 ? (var_9 * var_15) : (var_11 + var_18))) : ((-var_6 ? -var_11 : ((var_12 ? var_19 : var_7))))));
    var_22 = ((!((((53908 && 11845) ? 53876 : (var_14 == var_19))))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_23 = (((((11845 ? 65518 : ((var_15 ? -3517213713358546801 : 12135187100977079189))))) ? (((((~(arr_1 [i_0])))) ? var_2 : ((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))))) : (((~(arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_24 = ((((((arr_10 [i_2] [3] [i_2] [21]) ? (arr_3 [i_0] [i_0 - 2] [i_0]) : (((-(arr_1 [i_0]))))))) ? -var_13 : (((!(arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 1]))))));
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_0] [i_2] [i_2] = (((((((var_16 ? (arr_11 [i_4] [i_3] [i_1] [i_1] [i_0]) : var_18))) ? (((arr_7 [i_4] [i_2] [i_0]) ? (arr_5 [i_1] [i_3] [i_4]) : var_3)) : (((var_1 * (arr_1 [i_0]))))))) | ((var_13 ? (((var_11 / (arr_9 [i_2])))) : (((arr_2 [i_4] [i_1] [i_1]) * (arr_3 [9] [i_3] [i_0]))))));
                            }
                        }
                    }
                    var_25 = ((+(((arr_8 [i_0] [i_0 - 2] [i_1]) ? (arr_6 [i_0 - 2] [i_0] [i_1] [10]) : (arr_11 [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_2] [i_2])))));
                }
            }
        }
        arr_14 [i_0] = (arr_6 [i_0] [i_0] [i_0] [i_0]);

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                arr_20 [i_0] [i_0] [i_0] = ((-(arr_8 [i_0 - 2] [i_0 + 1] [i_0 - 2])));
                var_26 ^= ((-(arr_9 [i_0 + 2])));
            }
            var_27 = var_15;
            var_28 += (arr_7 [i_0 - 1] [i_0 - 1] [i_5]);
            var_29 = var_9;
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_30 += (((var_10 * -var_4) | (((arr_9 [i_0]) ? (arr_0 [i_0]) : ((-(arr_19 [i_0] [i_0] [i_0] [13])))))));

            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                var_31 = arr_25 [i_0];
                arr_27 [i_0] = (arr_17 [7] [i_7] [i_7] [i_8]);
            }
            /* vectorizable */
            for (int i_9 = 2; i_9 < 20;i_9 += 1)
            {
                var_32 = arr_15 [i_9 - 1] [i_9 + 2] [i_0 - 1];
                var_33 -= ((var_10 ? var_5 : var_6));
                arr_30 [13] [i_0] [13] [8] = ((((var_14 ? var_3 : var_18)) | var_8));
            }
            arr_31 [i_0] [i_7] = (((arr_6 [i_7] [i_0] [i_0] [i_0 - 2]) ? (((-(arr_21 [i_0])))) : (((arr_15 [11] [i_0 + 1] [i_0 - 2]) ? (arr_15 [i_0] [i_0] [i_0 - 2]) : (arr_1 [i_0])))));
            arr_32 [i_0] [i_0 + 1] [i_7] = (((((arr_29 [i_0 - 1] [i_0] [i_0 - 1]) ? var_8 : var_6))) ? (arr_15 [i_0] [i_0] [i_7]) : (((var_18 ? (arr_22 [i_0] [i_0] [i_0 - 2]) : (arr_22 [i_0 - 2] [i_0 - 2] [i_0 - 2])))));
            var_34 = (min(var_34, (arr_29 [i_7] [i_7] [i_0])));
        }
        var_35 = ((44832 ? 137438953471 : 6255658513361315894));
    }
    #pragma endscop
}
