/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = 16376;
        arr_5 [i_0] = var_0;
    }
    var_10 ^= (((~var_4) ? ((((var_3 >= (var_5 - var_7))))) : var_6));

    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_11 = (min(var_11, (~var_4)));
        var_12 = (max(var_12, ((((((arr_1 [i_1] [i_1]) << (var_8 - 1488388599))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_13 -= (arr_6 [8]);
        var_14 = var_1;
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 15;i_4 += 1)
            {
                {
                    var_15 = ((~(arr_1 [i_2] [i_4])));
                    var_16 = (((~18101) ^ var_6));
                    var_17 = (arr_15 [i_2] [i_2] [i_2] [i_4]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_18 = (arr_23 [i_7]);
                    arr_24 [i_6 - 1] [i_6 - 1] [i_6] = (arr_3 [4]);
                }
            }
        }
    }
    var_19 = (~(~var_4));
    #pragma endscop
}
