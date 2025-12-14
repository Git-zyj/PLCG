/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_7, ((max(243665079, (-243665055 && -243665055))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = ((var_0 | (max(-96, (arr_7 [2] [i_1] [2])))));
                    arr_10 [i_2] [7] [i_2] [i_0] = ((~((18446744073709551615 % (var_8 < 66404233)))));
                }
            }
        }
        arr_11 [i_0] = ((~(7 * 2)));
        arr_12 [i_0] [6] = 5;
    }
    #pragma endscop
}
