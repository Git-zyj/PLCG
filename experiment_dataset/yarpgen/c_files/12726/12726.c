/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_0 ? -1966581526 : (((((var_6 ? var_2 : -1413441896))) ? var_12 : -292679279669235294))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = -var_10;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((((min((max((arr_1 [7]), 625351117842897593)), 1023))) || 151)))));
                    var_15 = var_1;

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_16 |= (((var_0 ? (arr_7 [i_0 - 3] [i_0 + 1] [i_0 - 1] [i_0 - 1]) : (arr_7 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_1]))));
                        var_17 = (arr_6 [i_0] [i_0] [i_0] [i_0 - 1]);
                        arr_12 [i_0] [i_0] [i_1] [i_3] = 1413441895;
                        var_18 = (max(var_18, var_10));
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [10] [i_1] = (((arr_7 [i_0] [i_0] [i_0] [i_4 - 1]) ? var_8 : (((+(((arr_4 [i_2] [i_1]) + (arr_13 [1] [i_2] [i_2] [i_1] [i_0]))))))));
                        var_19 = ((((var_6 - (((var_5 ? 1023 : 21)))))) ? (arr_11 [4] [i_4] [i_4] [i_4]) : (max((max((arr_13 [i_0] [i_0] [i_2] [i_4] [i_2]), var_3)), (arr_1 [i_0]))));
                        arr_16 [i_0] [i_0] [i_1] [i_4 + 1] [i_4 + 1] [i_0] = (arr_8 [i_0]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                {
                    var_20 = -1413441896;

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_25 [i_0] [i_5 - 2] [i_5] [i_0] = 182234955;
                        arr_26 [i_5] [i_6 + 1] [i_6 + 1] [i_6] = var_4;
                        var_21 = -7703841262401886861;
                        arr_27 [i_0] [i_5] [i_5] [i_7] = ((((arr_24 [i_0] [i_0]) ? (arr_4 [i_5 - 1] [i_5]) : (max(696373115, var_0)))));
                    }
                    var_22 = (max(var_22, (max(((-(arr_5 [i_0 + 1] [2] [i_6 + 1]))), (((arr_22 [i_0] [i_0] [2]) | (1413441895 || 21)))))));
                }
            }
        }
    }
    var_23 = (max(((var_7 ? (var_7 / var_3) : 49)), (((var_12 ? var_10 : -1413441895)))));
    #pragma endscop
}
