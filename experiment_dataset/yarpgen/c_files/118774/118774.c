/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 &= 421868769;

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_16 = ((421868765 ? (arr_1 [i_0]) : -13));

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_17 = (max(var_17, (arr_6 [i_2] [i_0])));
                arr_8 [i_0] [i_0] [i_0] = 4224336887;
            }
            var_18 = (max(var_18, ((((arr_4 [i_0]) ? (arr_1 [i_1]) : (arr_4 [i_1]))))));
            var_19 = (min(var_19, (1 || 12636591810325542506)));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_20 = (max(var_20, 77));
            var_21 = 40140;
        }
        arr_13 [i_0] = ((((((arr_10 [i_0] [i_0]) ? (arr_9 [i_0]) : 12636591810325542487))) ? (arr_1 [i_0]) : (arr_6 [i_0] [i_0])));
        var_22 = (arr_4 [i_0]);
    }
    var_23 = (max(var_23, var_14));
    var_24 = var_11;
    #pragma endscop
}
