/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 |= ((~(min((((-9223372036854775803 ? 176 : 79))), ((var_15 ? (arr_2 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_1] [i_0])))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_20 ^= 1;
                        arr_10 [0] [i_3] [i_3] [i_0] = ((!(arr_4 [i_1 - 2] [i_2])));
                    }
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_0] = (min((((arr_11 [i_4] [i_4 + 1] [i_2] [i_1 - 4]) ? (arr_11 [i_1] [i_4 + 3] [i_1] [i_1]) : (arr_11 [6] [i_4 + 3] [i_2] [i_2]))), (arr_11 [i_4] [i_4 - 1] [i_4 + 2] [5])));
                        arr_15 [i_1] [i_0] [i_2] [i_4] [i_4] [i_2] = var_8;
                        var_21 = ((((arr_2 [i_1 + 3] [i_1 + 3] [i_4 - 1]) >= var_0)) ? -176 : var_16);
                    }
                    var_22 = (max(var_22, (((max((arr_4 [i_1 - 1] [i_1 + 3]), (arr_13 [i_1 - 4] [i_1 + 2])))))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_23 = (max(var_23, (((~(-2147483647 - 1))))));
                        arr_18 [i_0] [i_2] |= (arr_5 [i_1 - 2]);
                        arr_19 [i_0] [7] [8] [i_5] = (arr_4 [14] [i_2]);
                        arr_20 [i_0] [i_0] [i_0] [i_2] [i_5] [i_0] = (-2147483647 - 1);
                        var_24 = (1 * 9309375089089413476);
                    }
                }
            }
        }
    }
    var_25 = (min(var_25, ((max((((var_12 ? (~var_6) : var_1))), ((var_13 ? var_0 : var_18)))))));
    var_26 *= var_17;
    var_27 = (max((max(66, var_7)), ((min(var_17, (min(1, (-32767 - 1))))))));
    var_28 += (~-1436627773);
    #pragma endscop
}
