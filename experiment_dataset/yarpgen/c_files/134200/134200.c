/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0 - 2] [i_1] = -32757;
                arr_5 [i_0] [i_0] = -295044652;
                var_13 = arr_3 [16] [i_1];
            }
        }
    }
    var_14 = (max(var_14, ((((((min(8, -5212072480088498970)))) ? var_0 : ((-32757 - (682138565 + var_0))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_15 = (max((((-(arr_6 [1] [i_3])))), (max(((var_10 / (arr_11 [i_2] [i_4] [i_3]))), (arr_6 [i_2] [18])))));
                    arr_14 [i_2] [i_4] [i_3] [10] = var_9;
                    arr_15 [i_4] = var_3;
                }

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_18 [i_2] [i_2] [i_5] = var_2;
                    var_16 = ((!(((max(4294967290, (arr_13 [i_2])))))));

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_17 = ((32758 ? (arr_20 [i_2] [i_3] [i_3] [i_6]) : var_1));
                        var_18 = (min((((((var_9 ? var_12 : (arr_9 [i_5])))) ? (arr_13 [i_6]) : (max(7605, (arr_19 [i_2] [i_3] [i_5] [i_5]))))), -32741));
                        var_19 = -1505848745224525860;
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_20 = (min(((~(max((arr_20 [i_3] [i_2] [i_2] [i_7]), var_7)))), ((min((min((arr_23 [i_2] [i_3] [i_5] [i_7]), var_1)), (min(246, (arr_22 [i_5] [i_5] [i_5]))))))));
                        var_21 ^= ((-((var_5 ? ((min(-1763536655, (arr_17 [i_3] [i_3])))) : ((1 ? (arr_22 [i_7] [0] [i_2]) : var_12))))));
                    }
                    arr_24 [i_3] [i_3] = var_12;
                }
                var_22 = ((!(arr_12 [i_2] [i_3])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                var_23 += ((((((arr_6 [i_8] [i_9]) ? var_11 : (arr_16 [i_8])))) ? ((1 ? (arr_16 [i_8]) : 1105062239)) : ((-(arr_16 [i_8])))));
                arr_30 [i_8] [i_9] &= 1;
                arr_31 [i_9] = ((+(((arr_9 [i_8]) ? 65519 : (arr_28 [i_8] [i_8])))));
            }
        }
    }
    #pragma endscop
}
