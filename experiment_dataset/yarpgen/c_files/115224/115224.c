/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    var_17 &= (((((-95 || 30720) ? var_13 : ((-10013 ? 20040 : 20040)))) & (var_2 / var_12)));
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_19 += ((((!(-2048 & -87))) ? ((((((arr_1 [i_1]) ? var_7 : var_12))) ? 37462 : (max(1, 402653184)))) : ((~(var_10 <= 20040)))));
                var_20 = (~var_11);
            }
        }
    }
    #pragma endscop
}
