/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_13 [i_1] [i_1] [i_2] = 1;
                        arr_14 [i_3] [i_1] [i_1] [i_1] [i_1] [i_0] = 1;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_25 [i_0] [i_0] [i_0] [12] [i_0] [i_0] &= ((((0 ? 1 : 0)) >> (36252 - 36246)));
                        arr_26 [i_0] [i_6] [i_4] [i_4] [i_0] = ((((var_17 ? 1 : var_11)) >> (((var_1 | 1) + 127))));
                    }
                }
            }
        }
    }
    var_20 = (1 >> 1);
    var_21 = (((((1 << (-1 + 1)))) ? ((min((var_13 < var_19), (0 && 14233973837852402175)))) : (!1)));
    #pragma endscop
}
