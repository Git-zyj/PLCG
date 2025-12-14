/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 &= ((var_3 ? (arr_2 [i_0]) : (arr_2 [8])));
                arr_4 [15] [0] [11] = arr_2 [4];
            }
        }
    }

    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_16 ^= (min(-var_8, (arr_8 [i_2 + 1])));
            var_17 -= (min((arr_5 [14] [i_2 - 1]), (((arr_5 [i_2] [i_2 - 1]) ? (arr_5 [15] [i_2 + 1]) : (arr_5 [i_3] [i_2 - 1])))));
            var_18 = (max(var_18, ((((arr_6 [16] [i_2 + 1]) - (((arr_8 [i_2 + 1]) | ((var_2 - (arr_7 [1]))))))))));
            arr_9 [i_3] [3] = var_8;
        }
        var_19 += (!var_5);
        var_20 ^= (!124);
        var_21 = (((arr_6 [i_2 - 1] [i_2 + 1]) - (arr_6 [i_2 + 1] [i_2 + 1])));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {

        for (int i_5 = 4; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    {
                        var_22 = ((!((((var_9 ? -124 : (arr_13 [i_6 + 1] [0] [i_6])))))));
                        arr_19 [1] [i_6] [i_5] [i_6] [i_4] = max((max((arr_7 [i_5 - 2]), (arr_3 [i_6 - 1] [i_5 - 1]))), (arr_3 [i_6 + 1] [i_5 - 1]));
                        var_23 = arr_5 [20] [i_4];
                        var_24 = -1;
                    }
                }
            }
            arr_20 [5] [2] = (min((max(var_2, var_6)), (arr_12 [i_5 + 1])));
            arr_21 [0] = var_12;
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_32 [i_4] [2] [i_8] [5] = (((arr_12 [2]) ? (((arr_30 [i_10 - 2] [i_10] [i_10 - 2] [i_10 - 2] [10]) & (arr_30 [i_10 - 2] [0] [i_10 - 2] [10] [3]))) : ((var_1 ? ((var_11 ? var_4 : (arr_12 [2]))) : (arr_25 [3])))));
                            arr_33 [i_8] = ((+((min((arr_17 [i_10 - 2] [i_8] [i_8] [i_9]), (arr_25 [i_5 - 3]))))));
                        }
                    }
                }
            }
        }
        var_25 *= (min(255, (max((((arr_14 [4]) ? (arr_7 [16]) : var_3)), ((min(var_2, (arr_11 [10]))))))));
    }
    #pragma endscop
}
