/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = 1;
        var_20 = (max(var_18, (max(29504, (arr_0 [i_0])))));
    }
    var_21 = (max((668430488 < 2147483632), 20));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_15 [i_2] [12] [i_2] |= (((((max((((315440396 && (arr_5 [0])))), (max(var_8, -117)))))) >= (min((((40 ? var_7 : 1))), (max(8045372512069247382, (arr_1 [i_1] [i_3])))))));
                    arr_16 [i_2] [i_2] |= ((min(var_2, (14 % var_17))));
                }
            }
        }
    }
    #pragma endscop
}
