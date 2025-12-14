/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= -127;
    var_17 = (min((!var_15), ((var_13 ? var_5 : ((min(202, var_15)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((((arr_0 [6]) * 1)))));
                var_19 ^= (arr_1 [0]);
                var_20 = (+(((arr_4 [i_1 + 1] [i_1] [i_0]) ? (arr_4 [i_0] [i_1 - 1] [i_0]) : (arr_4 [i_0 + 1] [i_1] [i_0]))));
                var_21 *= ((-(!var_5)));
            }
        }
    }
    #pragma endscop
}
