/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~65522) ^ var_6));
    var_21 = (((!var_14) ^ var_7));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_22 -= (min(204, (((26 >= 32270) ? 15 : 0))));
                var_23 = (((max((~3), (((arr_0 [i_0] [i_0]) ? var_4 : 970866651)))) >> (65532 - 65514)));
            }
        }
    }
    var_24 = (!var_1);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_25 = var_6;
                var_26 = 294907312;
            }
        }
    }
    #pragma endscop
}
