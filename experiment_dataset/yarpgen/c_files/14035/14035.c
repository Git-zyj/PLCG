/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((min(1, (max(var_14, var_6))))), ((var_13 ? (min(1619928332, var_9)) : var_1))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = 3242470071;
                    var_22 = ((((var_15 && (arr_3 [i_0 + 1])))) - ((((var_14 ? (arr_0 [i_0] [i_1]) : 1)) << ((((1 ? -656934072 : 1)) + 656934080)))));
                    var_23 = (((10817843796429629474 * var_11) << (((~1023) - 4294966222))));
                    var_24 = (((((max(var_2, var_6)))) & (((((0 << (44730 - 44721)))) ? (arr_4 [i_1] [i_1] [i_2]) : var_16))));
                }
            }
        }
    }
    #pragma endscop
}
