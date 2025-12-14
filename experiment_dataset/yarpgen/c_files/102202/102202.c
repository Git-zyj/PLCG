/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (max(0, (var_8 - var_18)));
        var_19 = ((((max((arr_0 [i_0 - 2]), (var_16 == 162)))) ? (((max(((min(var_8, var_6))), (max(105, 105)))))) : (arr_0 [10])));
        arr_3 [13] &= var_12;
        arr_4 [15] [3] = ((var_4 ? (max(-1713910407097343404, 104)) : ((((var_4 ? var_0 : var_3)) % (((var_0 ? var_17 : 191)))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_20 = var_15;
                                var_21 = (min(var_21, ((((((arr_1 [4]) >= (min(var_12, (arr_14 [i_1] [i_2] [i_3] [i_4] [5] [i_3] [5]))))) ? 151 : ((var_10 ? var_8 : (!630986770))))))));
                                arr_16 [i_4] [3] [i_4] [i_4] [i_4] = ((~(((var_5 ? 3796552938 : (arr_13 [i_2] [i_5]))))));
                            }
                        }
                    }
                    arr_17 [i_1] [i_2] [i_1] |= 2715;
                }
            }
        }
    }
    var_22 = (!2899651351);
    var_23 |= 105;
    var_24 = (((var_18 != var_15) ? (((var_3 ? var_10 : var_14))) : var_4));
    #pragma endscop
}
