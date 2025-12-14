/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_18 = ((((var_14 ? (arr_1 [i_0] [i_0 - 1]) : (arr_3 [i_0]))) > 2267454848));
        arr_4 [i_0] = 2267454848;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_19 = var_9;
                        var_20 = ((arr_9 [i_1] [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1]) ? (arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2] [7]) : ((17179867136 ? 2267454848 : var_14)));
                        var_21 |= (((arr_10 [i_1 + 4] [i_1 + 4] [i_1] [i_1 + 3] [i_1] [i_1]) + (arr_1 [i_1 + 3] [i_0])));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_13 [i_1] [i_2] [i_3 + 1] [i_2] = var_5;
                            arr_14 [i_1] [i_1] [i_1 - 2] = 20714;
                            var_22 = (min(var_22, (~-2267454848)));
                            arr_15 [i_4] [i_4] [5] [i_2] [i_0] [i_0] = ((18446744056529684479 ? var_8 : 1));
                            arr_16 [i_4] [i_4] [i_1] [i_2] [i_1] [i_0 - 3] [i_0 - 3] = (((((var_12 ? var_14 : 3))) ? (arr_3 [i_0 - 1]) : (((-1301022605 + 2147483647) << (((arr_2 [i_0]) - 9613904115863007895))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
