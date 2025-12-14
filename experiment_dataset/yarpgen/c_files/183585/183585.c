/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(((((2080083735 ? var_2 : 1))) ? (((max(-9750, -9779)))) : ((7324595723371993269 ? var_1 : -7324595723371993270))))));
    var_12 = var_5;
    var_13 = ((((max(var_1, var_3))) ? var_6 : (((var_2 <= var_7) * var_2))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 *= (min((min((arr_0 [i_0] [i_0]), 94)), (arr_1 [i_0])));
        var_15 &= min(var_8, (arr_0 [i_0] [i_0]));
        arr_2 [i_0] = (1 - ((~(arr_0 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] = (!-60);
                        var_16 *= ((~(((((1 ? var_8 : var_2))) ? (arr_0 [i_1] [i_1]) : (~1)))));
                    }
                }
            }
        }
    }
    var_17 = ((!((((var_10 || 94) ? 90 : (min(var_5, 892564982781364496)))))));
    #pragma endscop
}
