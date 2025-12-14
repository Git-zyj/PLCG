/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [0] [i_1] = ((((!(arr_0 [i_0]))) ? var_3 : var_11));
                arr_6 [i_0] [i_1] [i_1] |= (((arr_2 [i_0]) ? (min((((arr_2 [1]) ? (arr_4 [i_1] [i_0]) : var_13)), -var_5)) : (arr_2 [i_0])));
                var_16 &= (((((((max(var_2, var_3))) ? 18446744073709551615 : ((var_6 ? var_14 : (arr_4 [i_1] [i_0])))))) ? var_5 : ((((arr_1 [i_0]) ? (((arr_4 [i_0] [i_1]) ? var_10 : var_12)) : (((arr_3 [i_0]) ? (arr_2 [i_1]) : var_14)))))));
            }
        }
    }
    #pragma endscop
}
