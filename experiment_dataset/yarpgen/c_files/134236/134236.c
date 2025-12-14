/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    var_21 = ((((min(((var_13 ? var_5 : var_2)), var_16))) ? ((((min(var_4, var_10))) ? ((1690542892 ? var_18 : var_5)) : var_3)) : (((var_6 ? var_0 : 255)))));
    var_22 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_23 = (max(var_23, ((((((arr_5 [i_0 + 2] [i_0 + 2]) ? (arr_5 [i_0] [i_1]) : (arr_1 [i_0 + 2]))) | (arr_4 [i_1]))))));
                    var_24 = (((arr_0 [i_2 + 1] [i_0 + 2]) & ((((arr_5 [i_2 + 3] [i_0 + 1]) > var_17)))));
                    var_25 = (arr_4 [i_0]);
                    var_26 = var_1;
                }
            }
        }
    }
    #pragma endscop
}
