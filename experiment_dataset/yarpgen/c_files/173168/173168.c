/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((+(((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_6))));
        arr_2 [i_0] = 7781;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 ^= var_0;
                    var_14 |= ((~(7781 || var_10)));
                    var_15 = (max(var_15, ((((arr_1 [i_0] [i_2]) || (arr_6 [i_0] [i_1]))))));
                    arr_9 [i_2] [i_1] [2] [1] &= (~0);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        var_16 -= 31686;
        arr_13 [i_3] = -104;
    }
    var_17 = (var_8 < var_10);
    #pragma endscop
}
