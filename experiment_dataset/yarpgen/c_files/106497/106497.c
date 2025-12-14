/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max(-var_10, ((-var_10 - (max(1338901230, 14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((var_3 ? var_8 : (arr_3 [i_1 + 1] [i_1 + 1]))))));
                arr_5 [i_1] [i_1] [0] = ((min(((var_6 << (var_0 - 8402))), (var_10 || var_5))));
            }
        }
    }
    var_15 = ((((((!var_3) - var_12))) ? (min(var_3, -var_0)) : (-1884474997 <= var_6)));
    var_16 = var_10;
    var_17 = var_11;
    #pragma endscop
}
