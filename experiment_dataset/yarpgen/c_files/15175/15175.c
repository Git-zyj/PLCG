/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_6));
    var_12 -= var_3;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] &= (arr_1 [i_0 - 1]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = 24446;
                    arr_11 [i_0] [i_1] [i_2] [i_1] = (arr_7 [6] [6]);
                }
            }
        }
        var_14 = (max(var_14, (((!((((arr_9 [i_0] [i_0] [i_0]) / var_10))))))));
    }
    #pragma endscop
}
