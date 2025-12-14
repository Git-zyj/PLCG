/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((min((max(var_6, var_7)), var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_11 -= (min((arr_4 [i_0]), ((((!12249162376298145063) < ((1 ? 32767 : 1)))))));
                var_12 = (((((8779 ? (arr_1 [i_1 - 1]) : (arr_0 [i_0])))) ? ((0 * (arr_2 [i_0]))) : (max((arr_4 [i_1 + 1]), 6197581697411406562))));
            }
        }
    }
    var_13 = var_1;
    var_14 *= var_6;
    #pragma endscop
}
