/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (max(var_11, 1697347606));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = 95;
                    var_12 -= (arr_4 [i_0]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_15 [i_0] [i_0] [i_0] [i_0] = (min((max((max(216, (arr_13 [i_3 + 1] [i_3 + 1]))), (arr_2 [i_0] [i_3 - 1]))), (min((arr_11 [i_3 - 1] [i_3 - 2] [i_3 - 1]), var_10))));
                    arr_16 [i_4] = var_7;
                    var_13 ^= ((((((((arr_5 [i_0] [i_3 + 1] [i_4]) ? 251 : (arr_11 [i_0] [i_0] [1])))) ? ((~(arr_14 [9] [i_3] [2]))) : 18)) - ((((min(var_5, var_0)))))));
                    var_14 ^= 3389433380;
                    arr_17 [12] [i_0] = (max((var_7 * var_8), (arr_14 [1] [i_3 + 2] [i_4])));
                }
            }
        }
        var_15 &= (min(((min(71, 18))), ((94 / ((var_1 ? 7570117856382809669 : var_3))))));
        arr_18 [i_0] [i_0] = var_7;
    }
    var_16 = var_1;
    var_17 |= (min((~var_3), var_1));
    var_18 = (((var_7 % var_7) ? var_0 : 11794));
    #pragma endscop
}
