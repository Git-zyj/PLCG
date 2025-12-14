/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = (min((min((max(var_2, var_8)), -6068590967529405622)), var_7));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = (((((((arr_2 [i_0] [i_1]) ? var_2 : 38878)) - var_2))) ? (((((var_10 >> (((arr_8 [i_1] [11]) - 16554))))) % ((var_9 ? (arr_4 [i_0] [i_1]) : var_4)))) : (var_0 > var_2));
                    var_13 = ((-4930 >= ((var_2 ? (((-(arr_6 [i_0] [i_1] [i_1] [i_2])))) : ((3 ? (arr_6 [i_2] [i_1] [9] [21]) : var_3))))));
                    arr_10 [19] [i_1] [i_0] [i_0] = var_7;
                    var_14 += ((+((((arr_0 [i_1]) ? var_2 : (arr_8 [23] [12]))))));
                    var_15 *= (((((((var_6 ? var_2 : var_10)) / (arr_1 [24] [i_1])))) ? ((((((var_9 >> (60605 - 60594)))) <= ((var_10 ? (arr_7 [21]) : var_2))))) : var_0));
                }
            }
        }
    }
    var_16 = ((var_10 / (var_10 <= var_2)));
    #pragma endscop
}
