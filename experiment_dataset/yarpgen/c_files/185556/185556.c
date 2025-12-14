/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((max((5057386807977258723 - var_7), var_7)) + var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, -331763420));
                    arr_9 [i_0] [i_1] [i_1] [i_2] |= (~1);
                    arr_10 [i_0] = (arr_0 [i_2]);
                    arr_11 [i_0] [i_0] [i_0] = (331763429 - 277057343);
                }
            }
        }
    }
    var_21 = ((-(max(-4465, var_6))));
    #pragma endscop
}
