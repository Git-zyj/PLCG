/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_1] [i_2] = (min(((max((arr_8 [i_1 - 1] [i_1] [i_1 - 1]), var_7))), (var_11 * var_1)));
                    arr_12 [i_0] [i_0] [1] [i_1] = ((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1]))));
                    arr_13 [i_0] [i_0] [i_2 + 3] = (((0 | var_12) ? (arr_8 [i_1 - 1] [i_0] [i_1 - 1]) : (max(0, 2186974833))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_3] = (1399323047 ^ var_10);

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_19 [i_3] [i_3] = (-13 / 1);
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((-(arr_15 [i_1] [i_1] [2] [i_4])))) ? ((var_3 ? (arr_18 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 1]) : (arr_18 [i_1] [i_1 - 1] [i_1] [6] [i_1 - 1]))) : (min(-1366096743, (arr_15 [i_1 - 1] [1] [i_1 - 1] [i_3])))));
                            arr_21 [i_0] [i_1] [i_1] [i_3] = ((0 >= ((+(min((arr_10 [i_1]), var_6))))));
                        }
                        for (int i_5 = 4; i_5 < 12;i_5 += 1)
                        {
                            arr_24 [i_1] = ((var_13 ? (((0 << (((min((arr_17 [i_0] [i_0] [i_1] [i_0] [i_0]), 2895644249)) - 2895644247))))) : 1463061279));
                            arr_25 [i_0] [i_0] [i_3] = var_1;
                            arr_26 [14] [0] [i_2 + 1] [i_1] [i_3] [i_0] = max(75, 244);
                        }
                        arr_27 [i_0] [i_1 - 1] [i_1] [i_3] = var_1;
                    }
                }
            }
        }
    }
    var_20 = (max((((var_15 / var_5) * -var_2)), ((min((max(var_1, var_15)), var_17)))));
    var_21 = -var_5;
    #pragma endscop
}
