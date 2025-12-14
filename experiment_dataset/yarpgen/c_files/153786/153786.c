/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (((min(0, 0)) ? ((var_13 ? (arr_1 [i_0]) : (arr_1 [i_1]))) : ((-2927749548136662925 ? 1 : (-2147483647 - 1)))));
                arr_5 [i_0] [i_0] [i_1] &= ((((((arr_2 [i_0]) ? var_16 : 1))) ? (((2147483647 ? (arr_4 [i_0] [i_1]) : 2927749548136662955))) : ((var_5 ? var_8 : 1))));
                arr_6 [i_1] [i_1] [i_1] = ((0 ? 2147483621 : 2927749548136662926));
                var_21 = (max(((min((arr_4 [i_0] [15]), (arr_2 [i_1])))), (max(var_10, var_17))));
                var_22 *= (max((min(var_10, ((var_14 ? var_10 : var_18)))), (((var_4 ? 2147483647 : (arr_0 [i_0] [i_0]))))));
            }
        }
    }
    var_23 = (((((((min(var_14, var_5))) ? ((var_16 ? var_11 : var_0)) : var_7))) ? var_13 : var_15));
    var_24 = (min(var_15, var_4));
    #pragma endscop
}
