/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-((var_12 | ((var_5 ? 9360919488004197160 : var_3))))));
    var_15 = (max(var_15, (((var_3 ? (((var_1 * 2583785820121330055) ? (((max(187, var_6)))) : var_2)) : var_1)))));
    var_16 = ((var_12 ? var_8 : (((((var_12 ? var_9 : var_1))) ? var_6 : (max(var_8, var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = 9279048923310114637;
                    var_18 &= (((arr_10 [i_2] [i_2] [i_2] [i_2]) ? (min((arr_10 [i_0] [i_1 - 1] [i_2] [10]), (arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1]))) : (arr_10 [i_0] [i_1 - 1] [i_2] [10])));
                    arr_11 [7] [i_1] [5] [7] = -var_8;
                    arr_12 [i_0] [i_0] = ((-((((max((arr_6 [i_0 - 4]), 15862958253588221557))) ? (arr_2 [i_0 - 1]) : (arr_3 [i_0 - 3] [i_1 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
