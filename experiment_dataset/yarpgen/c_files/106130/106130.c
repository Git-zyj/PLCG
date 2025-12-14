/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = (((arr_1 [i_0]) % 4294967295));
                var_17 -= ((123 ? ((-(arr_4 [20] [i_1]))) : ((28398 ? (arr_4 [1] [1]) : (arr_4 [18] [i_1])))));
                var_18 = var_7;
                arr_6 [14] |= ((min((((3 ? 1 : (arr_1 [i_1]))), -7371796188719002620))));
            }
        }
    }
    var_19 *= (1 - var_6);
    #pragma endscop
}
