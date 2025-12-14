/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 3749906057;
    var_19 = (min(135, 17));
    var_20 *= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (arr_3 [i_2] [6]);
                    var_22 = 1;
                    arr_8 [i_0] [i_1] [i_2] = (((arr_1 [i_2] [i_0]) + (arr_4 [4] [i_2])));
                    arr_9 [2] [i_2] [i_2] = ((~(arr_3 [i_0] [11])));
                }
            }
        }
    }
    #pragma endscop
}
