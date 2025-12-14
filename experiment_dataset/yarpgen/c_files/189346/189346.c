/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((((~((12 ? -14218 : var_14))))) * (((min(18446744073709551615, (arr_0 [i_0]))) << (var_13 - 1223996029))))))));
                var_18 = var_4;
                arr_6 [5] = ((var_0 ? (((((-(arr_3 [20] [20])))) ? (min((arr_5 [i_0] [i_1] [i_1]), 9)) : var_11)) : (arr_5 [15] [12] [i_0])));
            }
        }
    }
    var_19 = (min(var_19, ((min(((var_7 ? (var_14 ^ var_12) : var_0)), var_9)))));
    var_20 = (~48);
    #pragma endscop
}
