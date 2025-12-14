/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_7 [i_0] = (max((((8388576 * var_7) ? -8070624037613473303 : (((arr_5 [1] [1] [i_1]) ? (arr_3 [0]) : -8070624037613473315)))), ((min(var_16, (arr_4 [i_0] [10]))))));
                arr_8 [i_0] = (((8070624037613473315 || var_3) && ((-8070624037613473315 && (!-8070624037613473303)))));
                arr_9 [i_0] = (arr_4 [i_0] [i_0]);
                var_19 = (arr_5 [i_1] [9] [20]);
            }
        }
    }
    var_20 = (min((max(8070624037613473314, (max(var_13, var_10)))), var_4));
    var_21 = (((((var_3 != var_0) ? ((min(var_11, var_3))) : var_2)) << ((((~((var_13 ? var_2 : var_18)))) + 111))));
    var_22 = (min(((((55 ? 1 : 8070624037613473315)) / -8070624037613473321)), (((max(8070624037613473314, var_2)) / var_12))));
    var_23 = ((255 - ((48 ? (max(8070624037613473329, var_2)) : -60))));
    #pragma endscop
}
