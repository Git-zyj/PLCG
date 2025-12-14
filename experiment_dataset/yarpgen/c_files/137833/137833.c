/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0] [24]);
        arr_4 [i_0] = ((var_10 + (((arr_1 [i_0] [i_0]) & (arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 &= (max((max(((((arr_0 [i_0] [i_1 - 1]) || (arr_7 [i_0] [i_0] [i_2] [i_1])))), ((~(arr_0 [6] [6]))))), 24794));
                    arr_10 [i_0] [i_1] [i_2] = var_13;
                }
            }
        }
        var_16 ^= 24792;
    }
    var_17 = var_3;
    var_18 = (var_10 || var_3);
    #pragma endscop
}
