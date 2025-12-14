/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((64 ? ((min(21892, 43643))) : 7))) ? (min(43627, ((var_13 ? 43644 : 1548162792)))) : (min(((var_12 ? var_8 : -577122205)), ((min(var_0, var_7)))))));
    var_17 = 240;
    var_18 -= var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_2] [i_0] = (1548162792 >> 1);
                    var_19 ^= 4;
                }
            }
        }
    }
    #pragma endscop
}
