/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!(((((var_1 ? var_8 : var_2)) - (18446744073709551615 - var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((max((((154 ? 101 : (arr_4 [i_1] [i_1])))), (((((arr_5 [i_0] [i_0] [i_0]) + 2147483647)) >> (var_1 - 2559615342264691995))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_0] = -18446744073709551615;
                    var_12 = (max(var_12, (((~((149 ? 82 : 173)))))));
                    arr_11 [2] [i_0] = (((!130) && ((((arr_0 [i_0]) + (arr_3 [i_0] [i_0]))))));
                    var_13 = var_5;
                }
            }
        }
    }
    var_14 *= (~102);
    var_15 = (max(var_15, var_4));
    #pragma endscop
}
