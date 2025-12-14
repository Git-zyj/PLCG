/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [24] = ((-((var_0 ? var_9 : (((arr_0 [i_0] [i_0]) ? (arr_7 [i_1 - 3] [i_1 - 3] [15]) : var_10))))));

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_17 = (min((((((2380380418 ? var_7 : var_3)) > (((max(var_9, var_10))))))), (((((var_16 ? var_7 : 26439))) ? (((arr_1 [i_0] [i_1]) ? (arr_6 [i_0] [i_1] [i_2] [i_3]) : 1570116036)) : (arr_10 [i_0] [i_0] [i_1 - 3] [i_2 + 2] [i_1 - 3])))));
                        var_18 *= (((arr_12 [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 1] [6] [i_2]) >= (min((arr_10 [i_2] [i_2 - 1] [i_2] [i_2] [i_2]), (arr_10 [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 2] [i_2])))));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_19 = (((arr_13 [17] [i_1] [i_1] [12]) ? (((arr_7 [i_1] [i_1 + 2] [1]) & (arr_7 [i_1] [i_2 + 1] [i_2]))) : (arr_7 [i_0] [i_1 + 1] [i_2])));
                        var_20 = (min(var_20, var_3));
                        arr_15 [i_0] [i_1] [i_2] [i_0] = ((var_8 - (arr_5 [i_4] [i_4] [i_1 - 2] [1])));
                    }
                    var_21 = ((-((((((arr_13 [19] [i_1] [19] [i_2 + 3]) - (arr_4 [i_0] [i_0])))) ? var_8 : var_12))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_22 = (arr_3 [9] [i_6]);
                                var_23 = (arr_1 [i_2 - 2] [i_1 + 3]);
                            }
                        }
                    }
                    var_24 = (arr_17 [i_1 - 3] [i_1 - 3] [i_0] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    var_25 = (min(var_25, (((max(var_16, (var_4 / -14910))) * ((min((var_4 || 255), var_0)))))));
    var_26 = (min(var_26, ((min(((min(var_3, var_9))), (min((max(var_4, var_5)), var_9)))))));
    var_27 = max(var_8, var_1);
    var_28 ^= var_9;
    #pragma endscop
}
