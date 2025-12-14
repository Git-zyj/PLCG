/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((max(1, var_0))) || (((8 ? var_4 : var_2))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(arr_0 [i_0 - 1])));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_10 [i_3] = var_1;
                        var_19 = (arr_6 [i_2] [i_2]);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            {
                var_20 += 1136488287;
                var_21 = (max(var_21, 18446744073709551615));
            }
        }
    }
    var_22 = ((-1136488288 ? (((max(126, var_3)) - ((min(1136488289, var_15))))) : var_12));
    var_23 = ((var_0 ? var_3 : var_7));
    #pragma endscop
}
