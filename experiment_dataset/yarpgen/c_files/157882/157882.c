/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_13 ? var_5 : var_14))) <= ((var_12 ? var_10 : (-127 - 1))))) ? (max((max(var_7, var_4)), ((min(var_13, 3767563))))) : (((-((max(124, 50)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 -= (min((-707645131 + -707645137), (max(((4 ? -124 : (arr_3 [i_0]))), (((708209572 >> (((arr_3 [i_1]) - 4276954452)))))))));
                var_22 = ((-(max((arr_0 [i_0]), (~127)))));
                arr_7 [i_0] = (((((((((arr_4 [i_0 - 3]) ? 3775411649 : 16590948899749555518))) ? 1055531162664960 : (var_2 - 1855795173959996098)))) ? 1 : (min((((-(arr_3 [i_1])))), ((-50 ? 10994060166118526681 : 50))))));
                arr_8 [i_0] [i_1] = ((~((127 ? -22 : 2004953152443091936))));
            }
        }
    }
    var_23 ^= ((var_8 ? (max(-var_8, (((7 ? var_14 : -1))))) : var_4));
    #pragma endscop
}
