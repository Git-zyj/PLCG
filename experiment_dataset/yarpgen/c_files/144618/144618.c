/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-var_12 + 1649465036);
    var_15 = (12 <= var_13);
    var_16 = (max(var_16, ((min(var_9, ((((max(var_0, -1461372516)) >> (((min(var_9, var_0)) - 140))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = 565;
                    var_18 = (arr_7 [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
