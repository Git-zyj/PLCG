/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [1] [i_1] |= (((((arr_1 [2]) || (arr_1 [2]))) ? (max(var_0, 0)) : (((max((arr_1 [1]), (arr_1 [2])))))));
                    var_10 -= var_4;
                }
            }
        }
    }
    var_11 = var_9;
    var_12 -= (((max((~var_8), ((var_5 ? 4294967295 : var_9)))) % (!0)));
    #pragma endscop
}
