/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_10;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (!var_1);
        var_21 = (max(14450, ((5966680690425723379 ? (min(46713, var_11)) : (~var_0)))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((max((var_18 ^ var_1), 55)));
        arr_7 [i_1] = ((-var_11 >> (!var_13)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_1] [19] [i_4] = var_10;
                        arr_17 [i_1] = ((max((arr_5 [i_1] [i_4 - 2]), var_16)) & (((arr_15 [i_1 + 3] [i_2] [i_2]) ? var_11 : (arr_15 [i_1 + 3] [i_1 + 2] [i_1]))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
