/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = 31;
                    var_16 = (arr_2 [i_0] [i_0] [i_0]);
                    var_17 = ((~(~539911830)));
                }
            }
        }
    }
    var_18 = (((((539911824 >> (var_4 - 9383134856197358181)))) ? ((max(8, 248))) : 16060));
    #pragma endscop
}
