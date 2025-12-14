/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 213;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_15 = (arr_0 [i_0 - 1]);

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_16 = ((-111 % 1067007707) ? ((((max((arr_0 [12]), 3227959577))) ? (((-(arr_2 [i_1])))) : (((arr_1 [i_0 + 2]) ? 1067007703 : (arr_3 [13]))))) : (max(((-5653333782176187683 ? 1067007707 : (arr_1 [i_0]))), 1633249366)));

            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_17 = (min(var_17, (((var_3 << (((arr_0 [i_0 - 1]) ? ((96 ? 0 : 249)) : (((((arr_3 [8]) != (arr_7 [i_0] [i_0]))))))))))));
                    var_18 = (min(var_18, 6));
                    arr_9 [i_0 + 2] = ((-(arr_0 [i_0 - 1])));
                    var_19 = arr_3 [i_1];
                }
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    arr_12 [10] [10] [i_2 - 1] [i_4 - 1] [i_0] = ((-25477 < ((98 ? (arr_2 [i_2 - 2]) : (arr_1 [i_1 - 2])))));
                    arr_13 [0] [0] [0] &= (arr_1 [i_0]);
                    var_20 = var_6;
                    var_21 = min(6, 11799644947636646327);
                }
                arr_14 [i_0] [i_1] [9] [i_1] = (min((((((-163576830 * 1) + 2147483647)) << (((((arr_1 [i_0]) ? (arr_5 [i_0 + 1] [i_1] [i_0 + 1]) : -163576829)) - 155422300)))), 63));
            }
            /* vectorizable */
            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {
                var_22 = (!508);
                var_23 = ((!(arr_10 [i_0] [i_1] [i_0 + 3] [i_5 - 1] [i_1 + 2] [i_1 + 1])));
                var_24 -= var_9;
            }
            /* vectorizable */
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                arr_21 [i_0] [i_0] [i_6 + 2] [i_0] = ((((arr_16 [i_0] [i_1 + 2] [9]) ? -1916262581 : (arr_4 [i_0]))));
                arr_22 [i_0] [i_1] = ((-23915 ? -1 : var_8));
                arr_23 [i_6 + 2] [i_0] [i_1 - 1] [i_1 - 1] = (arr_3 [i_0 + 3]);
                var_25 = (max(var_25, (!255)));
            }
            arr_24 [2] = ((-(max((arr_8 [i_0] [i_0] [i_1 - 1] [i_1] [1] [i_1]), (((-1 ? -1 : 1)))))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_26 = (-(((arr_31 [i_1 - 2]) ? (arr_16 [i_1 + 1] [i_1 - 2] [i_1 - 2]) : (arr_31 [i_1 - 2]))));
                            arr_36 [i_7] = ((!(((~(((arr_1 [i_0]) & 6)))))));
                            var_27 = (-(min((~1), (((arr_32 [i_7] [i_1] [i_1] [i_8] [i_1] [i_7] [i_1]) ? var_9 : (arr_11 [i_0] [13] [i_0] [i_0] [i_9]))))));
                            var_28 = (min(((45 ? -163576827 : 245)), ((-((-(arr_1 [1])))))));
                        }
                    }
                }
            }
        }
    }
    var_29 = ((18446744073709551590 * (((((1 ? var_5 : var_1)) & var_4)))));
    var_30 = (((max(((max(var_8, var_2))), var_10)) * (max(var_11, (min(1, 18446744073709551598))))));
    var_31 ^= ((((max((3227959608 < 9), 18446744073709551595))) ? ((((var_10 * var_6) <= ((var_2 ? 15 : -19181))))) : ((var_0 + (~32767)))));
    #pragma endscop
}
