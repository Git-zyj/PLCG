/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((max((9 ^ var_16), var_19)), ((~((max(var_18, var_12)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((((min((arr_0 [i_0]), (0 / -108)))) ? (((-127 - 1) ? 0 : (min((arr_3 [i_1]), var_15)))) : var_2)))));
                arr_5 [i_0] [i_0] = ((-(!var_10)));
            }
        }
    }
    var_22 = ((-((((max(var_5, 122))) ? ((var_11 ? -7 : var_4)) : var_19))));
    #pragma endscop
}
