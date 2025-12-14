/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((!((max(var_1, var_8))))))) + (min(var_6, var_3))));
    var_13 = ((~(max(1961390684, (var_11 || var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = var_1;
                var_15 = (max((~var_1), ((-73 ? var_3 : (min(var_8, -1961390674))))));
                var_16 = (((min((min(var_3, var_1)), var_3)) & (arr_4 [i_0] [i_1] [i_1])));
                var_17 &= max(var_2, (((max((arr_5 [i_0] [i_0]), var_2)) + (((11332050631636308954 ? (arr_0 [i_0] [i_1]) : var_0))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
                {
                    var_18 |= var_5;
                    var_19 = var_7;
                    arr_11 [i_1] [i_1] = (((arr_8 [5] [i_1] [i_2] [i_1]) || var_2));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                {
                    var_20 ^= -94;
                    arr_14 [i_0] [i_0] [i_1] = (((arr_3 [i_0]) ? var_5 : var_9));
                }
            }
        }
    }
    var_21 = var_4;
    #pragma endscop
}
