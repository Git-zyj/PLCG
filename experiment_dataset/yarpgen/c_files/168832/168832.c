/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 3; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((-29105 ? 31 : (~-29105))));
        var_15 = 14702106348735315612;
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_1] [i_1 - 1] [18] = (31 ^ 2269814212194729984);
                        var_16 = var_12;
                    }
                }
            }
        }
        arr_16 [i_1 + 3] [i_1 - 3] = (29091 && ((max((arr_6 [i_1 + 1]), var_10))));
        var_17 ^= (arr_2 [i_1 - 2] [10]);
        var_18 = (~(~578));
    }
    #pragma endscop
}
