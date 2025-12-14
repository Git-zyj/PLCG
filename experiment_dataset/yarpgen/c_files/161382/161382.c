/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(min(var_16, var_14))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_1] = (((arr_7 [i_3] [i_1]) ? (!var_11) : (arr_10 [i_0])));
                        var_20 = (((((var_11 ? var_0 : (arr_5 [i_0] [i_0] [i_0] [i_0])))) ? var_4 : (arr_0 [i_3] [i_3 - 1])));
                    }
                }
            }
        }
        var_21 = (~var_14);
    }
    var_22 -= var_18;
    var_23 = var_9;
    #pragma endscop
}
