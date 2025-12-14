/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((((min((-127 - 1), -112))) || var_0));
    var_17 = (min(var_17, ((min(1416791220, (~var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((((((arr_1 [i_0 + 2] [i_1 + 2]) >> (arr_1 [i_0 - 3] [i_1 + 2]))) == 71)))));
                arr_5 [4] &= (~((((arr_4 [i_1 + 2] [3] [i_0 + 1]) == (((arr_0 [i_1] [i_1]) ? -105 : var_13))))));
                var_19 = (max(var_19, (((17787 ? -85 : 10)))));
                arr_6 [4] [i_1] &= max((((!((max(var_15, var_3)))))), 21);
            }
        }
    }
    #pragma endscop
}
