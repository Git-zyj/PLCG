/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_8 ? 141863388262170624 : ((max((~-1881949823), 0))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (-(--1));
                var_13 = (--35);
                var_14 = 1719327266732349524;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_7 [10] = (arr_5 [i_2]);
        var_15 = ((arr_5 [i_2]) ? ((((arr_4 [i_2]) ? (arr_5 [12]) : 47459))) : ((34 ? var_4 : -34)));
        var_16 = (22 ^ -10);
    }
    var_17 = (~var_7);
    #pragma endscop
}
