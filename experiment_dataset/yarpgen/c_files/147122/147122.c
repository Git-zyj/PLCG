/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 1] [i_0] [i_0] [i_0] = 1;
                    var_18 = -1073;
                    var_19 |= ((~(arr_1 [i_0] [i_0])));
                }
            }
        }
    }
    var_20 = (min(1, var_3));
    var_21 |= ((((-9474 ? 1 : var_5))) + ((((min(533543242516842763, -589269909))) ? (16320 % -753997636) : (max(753997637, 462840798154811930)))));
    #pragma endscop
}
