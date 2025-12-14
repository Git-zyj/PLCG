/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(((255 ? var_4 : var_14)), 255))) && ((((var_9 == 71) ? var_1 : (~163))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = (max(1, (8388607 + var_11)));
                    var_18 = (((((((1 ? 185 : 1))) ? ((min(var_5, var_15))) : var_4)) * (((((198 ? var_7 : var_5)) >= (240 & 1577259007506561161))))));
                    var_19 -= ((((min(((var_5 ? -1598838695 : var_15)), 65535))) ? (((arr_0 [i_0] [i_0]) * var_7)) : (((52 ? (arr_4 [i_0 - 1] [i_0] [i_1]) : -2)))));
                    var_20 = (((((7 ? var_5 : (arr_3 [i_1 + 3] [i_2] [i_2 - 1])))) ? (arr_7 [i_1 + 3] [5] [i_2 - 1] [0]) : (((122 ? var_6 : (arr_3 [i_1 - 3] [i_2] [i_2 - 1]))))));
                }
            }
        }
    }
    var_21 = ((var_2 ? var_3 : var_3));
    #pragma endscop
}
