/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min(-34, (2702283202 + 1592684105))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((((min(1592684094, 2702283202))) ? 1 : (((!(((arr_2 [i_1]) == var_2)))))));
                var_18 = (max((((((((!(arr_0 [i_0]))))) + (((arr_1 [i_0] [i_0]) ? 1302400938 : 0))))), (!1)));
            }
        }
    }
    #pragma endscop
}
