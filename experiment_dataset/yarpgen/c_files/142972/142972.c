/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((-(min((min(2807074029, var_3)), (arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 2])))));
                var_11 &= (min((!512244262166041659), ((min(8, 262143)))));
            }
        }
    }
    var_12 = ((~(((max(-91, 1))))));
    var_13 = ((!((min(-1, var_10)))));
    #pragma endscop
}
