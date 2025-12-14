/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (arr_4 [i_0] [i_1 - 2]);
                var_13 = 16935;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_14 &= ((min((max(var_9, -2826259210698041134), var_8))));
                var_15 = (-9093956103908786817 + (((9093956103908786819 + -9093956103908786817) ? (((-(arr_7 [i_2] [i_3])))) : -9093956103908786817)));
                arr_12 [i_2] [i_2] [i_2] = (~((min((arr_10 [i_2] [i_2] [i_3]), 21913))));
                arr_13 [i_3] = ((((min(var_9, 19))) ? (((var_6 << (((max(var_1, var_5)) - 11665))))) : (~9093956103908786803)));
            }
        }
    }
    #pragma endscop
}
