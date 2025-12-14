/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;
    var_18 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            var_19 -= var_5;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_2 + 1] [i_3] = (~var_0);
                        arr_14 [i_0] [13] [i_2] [10] = ((((var_2 == (arr_11 [i_0] [i_1]))) ? ((var_8 - (arr_1 [i_3]))) : 0));
                        var_20 += var_14;
                        var_21 *= (((arr_1 [i_3]) || (arr_4 [i_3 - 1])));
                    }
                }
            }
            var_22 = (((!144115188075790336) ? (78 * var_15) : (arr_3 [i_0])));
        }
        arr_15 [i_0] = -58549;
        arr_16 [i_0] [i_0] |= (arr_9 [i_0] [i_0] [i_0] [i_0]);
    }
    var_23 = var_13;
    var_24 |= (((((var_4 ? (max(var_2, var_5)) : -127))) ? ((((var_1 / 966416139) && (var_11 | var_1)))) : (var_4 / var_3)));
    #pragma endscop
}
