/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = ((((!(arr_0 [i_0 - 2]))) ? (((((((~(arr_0 [i_0])))) || (arr_0 [i_0 - 1]))))) : ((((max((arr_1 [7]), 52524))) ? (!5024460023038807012) : (((arr_1 [i_0]) ^ var_18))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_20 *= (max((((arr_4 [i_0 + 2]) ? ((max((arr_6 [i_0] [i_0] [i_0]), (arr_3 [6] [i_2] [6])))) : (((arr_0 [i_0 - 2]) ? 1 : -6818)))), ((((-(arr_7 [5] [i_2] [i_1] [i_0])))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_21 = var_15;
                            var_22 = arr_3 [i_0 + 1] [i_1] [i_2 + 1];
                        }
                        arr_13 [2] [i_1] [i_2] [i_3] = (arr_12 [i_0 - 2] [i_1] [i_2] [i_2] [6] [5]);
                        var_23 ^= arr_6 [i_3] [1] [i_3];
                        var_24 = arr_9 [i_0] [i_1] [9] [9];
                    }
                }
            }
        }
    }
    var_25 = ((60040 ? var_2 : ((14240 / ((var_9 ? -2 : var_2))))));
    var_26 = (max(var_26, var_7));
    #pragma endscop
}
