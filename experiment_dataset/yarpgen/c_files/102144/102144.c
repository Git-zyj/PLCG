/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] &= ((max((max((-32767 - 1), var_19)), -var_14)));
                    var_20 = (((arr_3 [8] [i_0 - 1] [i_0 - 1]) ? var_12 : 0));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_21 = (min(var_21, (arr_7 [i_0 + 4] [i_0 + 4] [i_0])));
                        arr_10 [i_0] [i_1] [i_2] [i_3] = (((-20 + var_18) - -0));
                        arr_11 [0] [0] [i_1] [i_2] [0] = 1;
                        var_22 = ((-(arr_0 [i_1 + 2] [i_3])));
                        var_23 = -1;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_24 = ((9223372036854775807 ? 1 : 1));
                        var_25 = ((-1727 ? (((!((max((arr_12 [i_2 - 1] [5]), (arr_0 [i_0] [i_1 - 1]))))))) : (((arr_2 [i_0 + 4] [i_1] [i_2]) ? (arr_5 [i_0 - 1] [i_1] [i_1 + 2] [i_2 - 1]) : ((~(arr_12 [i_0] [i_0 - 1])))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_26 = (((arr_17 [i_0 + 3] [i_1 + 2] [i_2 + 1]) ? var_0 : ((var_17 ? (arr_5 [i_0] [1] [i_0] [i_5]) : 1))));
                        arr_18 [i_0] [i_2 - 1] [i_0] [i_5] [i_5] = 1;
                        var_27 = (((arr_14 [8] [12] [i_2 - 1] [i_1 - 1] [i_0 + 3] [i_0 + 3]) ? (arr_14 [9] [i_2] [i_2 + 1] [i_1 + 2] [i_0] [i_0 + 4]) : (arr_14 [i_5] [i_2] [i_2 + 1] [i_1 - 2] [i_0] [i_0 + 4])));
                        arr_19 [i_0 + 4] [i_1 - 3] = var_16;
                    }
                }
            }
        }
    }
    var_28 = ((var_17 ? var_2 : (((-((127 ? 255 : var_18)))))));
    #pragma endscop
}
