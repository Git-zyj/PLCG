/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= ((((min((min(65472, var_7)), var_8))) ? 673035205 : ((39502 ? -var_5 : 0))));
    var_14 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 + 3] [i_2] |= (max(((min((arr_3 [i_1] [3] [i_1 + 2]), 79))), 12));
                    var_15 = (max(var_15, ((max(((180 ? 39504 : 1)), ((var_5 ? (arr_0 [i_1]) : var_9)))))));
                }
            }
        }
    }
    #pragma endscop
}
