/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (min(2724373487403994235, 1));
    var_19 = ((~((~(~var_11)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, (!8387584)));
                        arr_11 [i_0] [i_1] [i_2] [i_2] [i_0] [10] = (arr_7 [i_3 + 1] [i_0 + 1] [i_1 - 2] [i_2 - 1]);
                    }
                }
            }
        }
        var_21 = (min(var_21, (15722370586305557381 || 47630)));
        arr_12 [i_0] [i_0 + 1] = (arr_1 [i_0 - 1]);
    }
    for (int i_4 = 2; i_4 < 17;i_4 += 1)
    {
        var_22 ^= ((~(min((arr_10 [i_4] [i_4] [i_4] [i_4] [i_4 + 3] [i_4]), (arr_6 [9])))));
        arr_17 [i_4] = max((arr_16 [i_4]), ((max((arr_6 [i_4 + 1]), var_0))));
    }
    var_23 = var_8;
    #pragma endscop
}
