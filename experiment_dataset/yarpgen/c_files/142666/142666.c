/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_2 - 1] = (((((~1) ? var_4 : var_12)) < (min((arr_4 [i_1 - 1] [i_2 + 1]), var_1))));
                    var_15 = ((((((arr_5 [i_2] [i_1 - 1] [i_0]) - (arr_5 [i_2] [0] [i_0])))) ? (arr_7 [9] [9] [i_0] [i_2]) : (arr_0 [i_0] [i_0])));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_2] = ((-(max(((max(1, var_7))), ((var_10 ? var_3 : var_8))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_16 ^= (min((max(var_2, (var_3 | -9067113308665089842))), (((max(var_6, var_5))))));
                            var_17 = ((((min(1, 32358))) ? (((min(1, 1)))) : (arr_10 [9] [9] [i_2 - 1])));
                            var_18 = (((((((((var_3 && (arr_12 [i_4] [i_3] [i_2] [i_0] [i_1 - 1] [i_0] [i_0]))))) * ((1 ? var_6 : var_0))))) ? (min((arr_10 [i_1 - 1] [i_2 - 1] [i_2]), var_4)) : ((((((~(arr_13 [i_4] [i_4] [7])))) ? (((arr_12 [i_0] [i_1] [14] [i_2] [9] [i_3] [i_4]) ^ var_6)) : (min(32355, (arr_4 [i_2] [i_1]))))))));
                        }
                        for (int i_5 = 4; i_5 < 18;i_5 += 1)
                        {
                            var_19 = ((max((arr_5 [i_2 + 1] [i_5 - 3] [i_1 - 1]), (24786 ^ var_6))) * ((min(((var_13 ? 121 : var_1)), (((!(arr_2 [i_0] [i_3]))))))));
                            arr_19 [i_3] [i_3] [i_0] [i_3] [i_3] = (arr_3 [i_0]);
                            var_20 = (max(var_20, ((min((max(var_5, (arr_5 [i_5 - 4] [i_1 - 1] [i_2 - 1]))), (((!(var_8 ^ var_5)))))))));
                            arr_20 [i_0] [i_2] [i_0] [i_5 - 3] = (1 + 9067113308665089841);
                            var_21 = (!((max(((max(-17, 32358))), ((var_1 ? var_2 : var_13))))));
                        }
                        var_22 ^= var_11;
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        var_23 = (min(var_23, ((24811 && ((max(var_13, var_12)))))));
                        var_24 += ((var_2 || (((((((arr_14 [i_0] [i_0] [i_2] [i_6] [i_0] [i_6]) > var_8))) / ((max(var_2, var_11))))))));
                        var_25 = (max(var_25, ((((arr_1 [i_1 - 1]) > var_7)))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_26 *= (arr_12 [i_0] [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_2 - 1] [i_2 - 1]);
                        var_27 = (max(var_27, ((min(-7684162431763555843, 0)))));
                        arr_27 [i_0] [14] [14] [i_2 - 1] [i_2 - 1] = ((((((-9067113308665089827 ? var_12 : var_9))) ? (~4146819090) : (~var_12))));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_28 = (((-14 < 37316) * ((var_9 ^ (arr_14 [i_2] [i_1 - 1] [i_2 + 1] [i_1] [i_1 - 1] [i_1 - 1])))));
                        var_29 = (max((((((var_0 ? var_10 : var_1))) ? (min(var_8, var_1)) : (min(var_9, var_1)))), ((((arr_12 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]) && (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    }
                }
            }
        }
    }
    var_30 = (var_14 * var_8);
    #pragma endscop
}
