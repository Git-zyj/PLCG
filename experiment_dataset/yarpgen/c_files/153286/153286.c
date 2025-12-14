/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, 803028980380854228));
    var_18 = var_9;
    var_19 -= var_8;

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_20 = (((((arr_2 [i_0 + 1] [i_1] [i_0]) > ((((128 >= (arr_2 [i_0 - 2] [i_0 - 2] [i_0]))))))) ? (arr_1 [i_0] [i_0 + 1]) : (((-(-663680656159309301 < 0))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_21 = (((~(arr_4 [i_0] [i_0]))));
                            arr_11 [i_0] [i_1] [i_0] [i_4] = (((((arr_2 [7] [i_0 - 4] [i_0]) ? (arr_10 [i_0] [i_0] [i_1] [i_0] [i_4]) : (arr_7 [i_0 - 3] [i_0]))) - (((((41 ? 0 : var_10)) >= ((((arr_9 [i_0] [12] [i_3] [i_0]) ? var_6 : var_12))))))));
                        }
                    }
                }
            }
            var_22 ^= (((((arr_8 [i_0] [i_0] [i_0 - 2] [i_0] [8]) ? (arr_8 [i_0 - 3] [i_0] [i_0 - 2] [8] [i_0]) : (arr_8 [i_0] [i_0] [i_0 - 2] [3] [i_0])))) ? (((arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0]) / (arr_8 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]))) : (((arr_8 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 4]) ? (arr_8 [i_0] [i_0] [i_0 - 2] [15] [i_0 - 3]) : (arr_8 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]))));
            arr_12 [i_0] [i_0] [i_1] = max((((arr_3 [i_0] [i_0 - 1] [i_0]) ^ var_11)), ((max((var_15 >= var_7), (((arr_2 [i_0 - 3] [i_0 - 3] [i_0]) + (arr_10 [i_0] [i_1] [i_0] [i_0] [i_1])))))));
            arr_13 [i_0] = ((((48430 / 32049) * ((-(arr_4 [i_1] [i_0]))))));
        }
        var_23 += ((var_13 ? (min(var_10, ((max(3, var_13))))) : ((((arr_1 [8] [i_0 - 4]) ? (arr_9 [i_0] [i_0] [i_0] [1]) : (arr_3 [2] [i_0] [12]))))));
    }
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    var_24 *= ((((-9223372036854775807 - 1) ? (arr_16 [i_5 + 1] [i_5 + 2]) : (arr_16 [i_5 + 2] [i_5 + 1]))));
                    arr_24 [i_5 - 1] [i_5] [i_6] [i_7] = ((((min((arr_9 [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 1]), (arr_9 [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 1]))))) / (((arr_9 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) ? (arr_14 [i_5 + 1] [i_5 + 1]) : (arr_14 [i_5 + 1] [i_5 + 1]))));
                    arr_25 [i_7] [i_6] [i_5 - 1] [i_5 - 1] = 1;
                }
            }
        }
        arr_26 [i_5 + 2] = ((var_10 ? (arr_16 [i_5 + 2] [i_5 - 1]) : (arr_16 [i_5 - 1] [i_5 - 1])));
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_25 *= var_16;
        var_26 |= (max(((var_11 + (arr_10 [i_8] [1] [i_8] [i_8] [i_8]))), var_4));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_27 = (max(var_27, (((((arr_10 [i_9] [i_9] [i_9] [i_9] [i_9]) || (arr_10 [1] [i_9] [i_9] [i_9] [i_9])))))));
        var_28 = ((((((arr_4 [i_9] [2]) | (arr_30 [i_9])))) ? ((((((var_4 ? (arr_5 [i_9] [i_9] [9] [i_9]) : var_2))) ? ((var_14 ? (arr_9 [i_9] [i_9] [i_9] [i_9]) : var_13)) : ((max(0, (arr_30 [i_9]))))))) : (max((arr_0 [i_9] [i_9]), (arr_7 [i_9] [1])))));
        arr_32 [i_9] = (-(arr_9 [i_9] [i_9] [18] [i_9]));
        var_29 = ((((max(var_7, (arr_1 [1] [i_9])))) || -112));
        arr_33 [i_9] = var_2;
    }
    #pragma endscop
}
