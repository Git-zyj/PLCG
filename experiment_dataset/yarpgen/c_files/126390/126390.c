/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = (min(var_20, (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 += (arr_2 [i_0]);
                    var_22 = (max(var_22, (((!((min((!1), (((arr_7 [i_0] [i_0]) ? var_14 : 223))))))))));
                    var_23 = arr_7 [i_0] [i_2];
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_24 = (((33 ? 1 : 1471395075)));
        var_25 = (((arr_10 [i_3]) ? (arr_10 [i_3]) : 496));
    }
    var_26 = var_1;
    var_27 ^= ((var_0 ? var_2 : 16376));
    #pragma endscop
}
