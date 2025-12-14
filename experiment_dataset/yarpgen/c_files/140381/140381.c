/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_11 = (((((56 ? 108 : (arr_4 [i_0])))) ? var_7 : 1594013657));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_12 = ((-(arr_9 [13] [i_0 - 1] [i_0 + 1] [i_1 + 1] [i_1] [i_1 - 1])));
                        arr_10 [i_0 - 1] [i_1] [i_1] [i_1 - 1] [i_2] [i_1] = ((arr_6 [i_0] [i_0] [i_1]) ? ((-(arr_4 [i_3]))) : -1594013627);
                        arr_11 [i_1] [i_1] = var_6;
                        var_13 = (((arr_9 [i_0] [i_0 + 2] [i_2] [9] [7] [i_0]) * (arr_2 [i_1])));
                    }
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_17 [7] [i_1] [11] [i_1] = ((~(max(-1594013663, (max(3350693662, 48))))));
                        arr_18 [i_0] [i_1] [i_1] [i_1] = ((~(!var_1)));
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_22 [i_0 + 2] [i_0 + 2] [i_1 - 1] [i_4] [i_1] = 14336;
                        var_14 = (max(((max(65, var_4))), (((arr_15 [i_0 + 1] [i_1 + 1] [i_1] [i_6] [i_6]) ? (arr_15 [i_0 - 1] [i_1 + 1] [i_1] [i_1 + 1] [9]) : (arr_15 [i_0 - 2] [i_1 - 1] [i_1] [i_1] [i_1])))));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_26 [i_7] [i_1] [i_1] [i_0] = ((-1594013680 ? (arr_6 [i_4] [i_4] [i_1]) : (((max(var_1, -1594013659))))));
                        var_15 = ((((var_2 << (var_1 - 57)))));
                    }
                    arr_27 [i_1] = ((6 == (min((arr_8 [i_0] [i_0] [i_0] [i_1 + 1] [i_0] [i_4]), 555383410))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_35 [i_9] [i_1] [i_4] [i_1] [i_0] = var_1;
                                var_16 = 1594013656;
                                var_17 = ((var_2 ? -16055 : 1594013628));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    arr_39 [i_1] [1] [i_1 - 1] [0] = 14357;
                    var_18 = (min(var_18, (max((((arr_1 [i_0 + 2] [11]) ? (arr_29 [i_1 + 1] [i_10]) : (arr_29 [i_0 - 3] [i_10]))), (((!5229601053334246291) ? (((3179851592 || (arr_7 [i_0] [6] [i_1 - 1] [i_1 + 1] [i_10] [i_10])))) : -551415348))))));
                    arr_40 [i_1] [i_1] [i_1] = 1594013648;
                    var_19 *= -1594013649;
                }
                var_20 = ((((arr_7 [i_0 - 3] [i_1] [i_0 + 2] [i_0 + 1] [i_1 - 1] [i_0]) ? (arr_23 [i_0 + 2] [i_1] [i_1 - 1] [i_0]) : (arr_38 [i_1 + 1] [i_1] [i_1 + 1]))));
                var_21 = ((-((~(arr_1 [i_0 - 2] [i_1 + 1])))));
                var_22 = (max(var_22, (((!(((((28 != (arr_16 [1] [i_1 - 1] [11] [5] [5])))))))))));
                var_23 ^= (min((((-(arr_19 [i_1 + 1] [i_0 + 2])))), 32767));
            }
        }
    }
    var_24 &= var_0;
    var_25 = var_1;
    var_26 = ((var_3 == ((((var_1 * var_0) ? 1594013626 : 255)))));
    #pragma endscop
}
