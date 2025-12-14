/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (max((((~1) ? (-1 || -2147483644) : 1)), (max(1712626444, 1))));
                arr_6 [i_0 + 4] [i_0 + 1] = ((arr_5 [i_0 + 4] [i_1 - 1]) ? (4748848694561770786 / var_15) : (arr_0 [i_0 + 1] [i_1 + 2]));
                arr_7 [i_0 + 1] = var_2;
                var_17 = (min(var_17, (((var_14 ? (arr_5 [i_0 + 4] [i_0 + 1]) : var_15)))));
            }
        }
    }
    var_18 = (min(var_18, 107));
    var_19 = 125;
    var_20 = 3;
    #pragma endscop
}
