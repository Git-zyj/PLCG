/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_1] [0] [i_1] [i_1] = 0;
                    arr_7 [11] [i_1] [i_1] [i_1] = var_3;
                    var_21 = (min(var_21, (((((min(((min((arr_0 [i_0] [2]), 65533))), ((var_13 ? (arr_3 [i_0]) : var_16))))) ? (min(((13 ? 65529 : var_12)), 3444807771)) : 1)))));
                    var_22 = (max(((var_14 ? (arr_5 [i_0] [1] [i_0] [i_0]) : var_12)), -93));
                }
            }
        }
    }
    var_23 = 20;
    var_24 = (6945914214958704717 ? (((((var_11 ? 322147833425977618 : 65522))) ? var_18 : (18446744073709551613 + 3779015827))) : (((min(var_8, var_8)))));
    #pragma endscop
}
