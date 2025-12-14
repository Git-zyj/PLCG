/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(237, var_0))) ? (((min(0, 0)))) : 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = ((~(max((arr_4 [i_0] [i_0] [0]), ((var_6 ^ (arr_4 [i_0] [i_0] [i_0])))))));
                var_17 &= 255;
                arr_6 [i_0] [i_1] = (((arr_1 [i_0]) ? (((((-1 ? var_10 : 31)) * 0))) : (((arr_0 [7]) / (~0)))));
            }
        }
    }
    #pragma endscop
}
