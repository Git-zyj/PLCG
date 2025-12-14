/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = ((18446744073709551607 ? (min((min(1152214938221841016, (arr_3 [i_0]))), ((128 ? var_4 : var_7)))) : (((min((((!(arr_0 [i_1] [i_1])))), (min(127, (arr_3 [i_0])))))))));
                arr_8 [i_0] [9] [i_0] = (((((579781558 ? (arr_1 [i_0]) : var_12))) ? (((((-(arr_0 [12] [11])))) ? ((min((arr_6 [i_0] [i_0]), 23464))) : (min(var_3, var_7)))) : ((max(var_13, 2904060270)))));
                var_15 = (min(64, (min((arr_5 [i_1] [i_0]), (arr_5 [i_0] [i_1])))));
            }
        }
    }
    var_16 = ((((min(((max(0, var_2))), ((141 ? 127 : var_6))))) ? -var_14 : var_6));
    var_17 = var_0;
    var_18 = var_13;
    #pragma endscop
}
