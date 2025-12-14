/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 += ((!(arr_5 [i_0] [i_0])));
                    var_13 *= ((((((var_1 ? (arr_2 [i_0]) : (arr_8 [i_2] [14] [i_0]))) * (!var_9))) & (arr_7 [i_0] [i_0] [i_0] [i_0])));
                    var_14 ^= ((min((arr_1 [i_0]), (arr_7 [i_0] [12] [i_0] [i_0]))));
                }
            }
        }
        var_15 = (arr_3 [i_0]);
    }
    var_16 = (max(var_16, var_9));
    #pragma endscop
}
