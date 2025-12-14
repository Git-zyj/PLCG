/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (((((~(arr_0 [i_0])))) ? 0 : 6298679036213025970));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (((~-25812) / ((var_11 ? var_12 : 1083934979))));
                    var_15 = (max(var_15, (((!(((var_0 ? (arr_3 [i_1] [13]) : 11))))))));
                }
            }
        }
        var_16 = 1;
    }
    var_17 = var_10;
    #pragma endscop
}
