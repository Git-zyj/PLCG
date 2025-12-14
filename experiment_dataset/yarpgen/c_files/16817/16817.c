/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (((arr_2 [i_1]) || ((min((!var_7), ((124 ? -58 : 75)))))));
                arr_7 [i_1] = (-((((arr_1 [i_0 + 2]) < var_15))));
            }
        }
    }
    var_19 = var_14;
    var_20 = ((((((var_16 * var_0) - var_8))) ? (((min(var_5, var_17)) + (((var_13 ? var_9 : var_9))))) : (((var_4 / var_13) + (var_4 - var_1)))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            {
                arr_13 [i_2 + 2] = (((~(min(var_12, (arr_12 [i_2 - 1] [i_3]))))));
                var_21 = (min(var_21, (193 / -5810951015162795152)));
            }
        }
    }
    var_22 = (((min(var_14, var_10))) ? ((-var_12 ? (((var_1 ? var_13 : var_2))) : (max(var_7, var_14)))) : (min(12186509113257012441, var_12)));
    #pragma endscop
}
