/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [0] [i_1] [7] = ((((422920204811412569 ? 3932850999928471375 : -127))) ? (((arr_3 [i_2 - 1]) ? (arr_3 [i_2 + 2]) : (arr_6 [i_0 + 2] [i_0 + 1] [i_0 - 2]))) : ((var_18 ? (arr_3 [i_2 + 1]) : (arr_6 [i_0 + 3] [i_0 - 2] [i_0 + 1]))));
                    arr_9 [i_0] [i_1] [i_0 + 3] [i_0] = ((((((((var_11 ? (arr_5 [i_0] [i_0]) : (arr_3 [i_0])))) ? (min(641379349, (arr_6 [i_0] [i_1] [i_2]))) : (((1121501860331520 ? var_3 : var_12)))))) ? 50 : (arr_5 [i_0] [i_0 - 1])));
                }
            }
        }
    }
    var_20 = var_18;
    var_21 = var_4;
    var_22 = (var_13 ? ((6 << (121 - 113))) : (((var_1 ? (2246 / var_14) : var_9))));
    #pragma endscop
}
