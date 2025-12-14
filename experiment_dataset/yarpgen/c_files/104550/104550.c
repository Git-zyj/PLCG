/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (((7046 == 7024) ? var_4 : var_11));
    var_20 += var_17;
    var_21 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 4] [i_0 + 4] [i_2] [i_0] = (~14968753095505401694);
                    var_22 = (((~546309941) ? (((arr_1 [i_0 + 4]) ? (arr_1 [i_0 + 4]) : (arr_1 [i_0 + 3]))) : ((((arr_1 [i_0 + 3]) == (arr_1 [i_0 + 3]))))));
                }
            }
        }
    }
    #pragma endscop
}
