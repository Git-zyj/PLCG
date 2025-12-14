/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_14 = ((!(arr_9 [i_0] [i_1] [i_2 - 2])));
                        var_15 = -110;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                {
                    var_16 &= (arr_7 [i_4 - 1]);
                    var_17 = (arr_3 [i_4] [i_4 - 2]);
                }
            }
        }
        var_18 = var_5;
        var_19 = (((~var_8) ? ((9783466135569970720 ? 2594778839249986224 : -2726897116553012922)) : var_7));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            {
                var_20 += max((((((max(2594778839249986224, 140737488354304))) ? (arr_6 [i_6]) : (122 >= var_3)))), (min(var_8, (arr_19 [i_7] [i_6]))));
                var_21 = (min(((var_11 ? var_6 : var_8)), 0));
                var_22 = 122;
            }
        }
    }
    #pragma endscop
}
