/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = ((((~(arr_5 [i_0 - 4] [i_0 - 4] [i_0 - 4])))) ? (((arr_5 [i_1] [i_0 - 4] [i_0 - 4]) ^ (arr_5 [i_1] [i_0 - 4] [i_0 - 4]))) : ((~(arr_5 [i_0 - 4] [i_0 - 4] [i_0 - 4]))));
                var_21 = ((((-973757541 ? 32 : (arr_0 [12] [12])))));
            }
        }
    }
    var_22 = (max(var_22, ((((((((var_11 ? var_0 : var_7))) % ((var_12 ? var_13 : var_8)))) << (var_10 + 18149))))));
    var_23 = var_8;
    var_24 += (60 * 87);
    #pragma endscop
}
