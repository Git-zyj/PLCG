/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 = -var_8;
    var_19 = 311142612;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (~-311142610);
                    var_21 += ((arr_4 [23]) ? (arr_5 [i_0] [i_1]) : -var_1);
                }
            }
        }

        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            var_22 |= (((arr_1 [i_3 + 1]) ? (arr_5 [i_0] [i_3 - 1]) : var_4));
            var_23 = var_10;
            var_24 *= (-(arr_6 [i_0] [i_3] [22]));
            var_25 *= (~var_7);
        }
        var_26 = ((-(arr_0 [i_0])));
        var_27 = (((arr_2 [i_0] [i_0]) ? (arr_10 [i_0]) : (arr_2 [i_0] [i_0])));
    }
    #pragma endscop
}
