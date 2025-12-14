/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = ((var_9 | var_4) ^ var_8);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((min((((80 << (((arr_3 [i_0 - 2] [i_0 - 2]) - 7745921867018906132))))), (arr_3 [i_0] [i_0 - 1]))))));
                var_16 = -var_5;
                var_17 = (((((arr_2 [i_0 + 1] [i_1] [2]) ? (arr_2 [i_0 - 2] [5] [i_0]) : (arr_2 [i_0 - 1] [i_1] [i_1]))) != (((max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 2])))))));
                var_18 = (arr_0 [i_1]);
            }
        }
    }
    var_19 = ((664205178 ? (((((var_10 ? 80 : var_3))) ? 95 : ((-2045 ? var_0 : var_12)))) : var_9));
    #pragma endscop
}
