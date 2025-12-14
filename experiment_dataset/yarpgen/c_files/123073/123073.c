/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 *= ((((arr_3 [i_2]) >> (-3 + 19))));
                    var_19 = (min(var_19, -var_5));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_10 [i_3] = var_15;
        var_20 *= 51029;
        var_21 = (!3);
        arr_11 [i_3] [i_3] = ((!(arr_3 [i_3])));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            {
                arr_18 [i_4] = ((1 ? ((-(((arr_12 [11]) - 13)))) : ((-(min(66, (arr_2 [1] [8])))))));
                var_22 = (((min((arr_7 [i_5 + 2]), (arr_5 [i_5 + 1]))) << ((((~(arr_5 [i_5 + 3]))) - 307040383))));
                var_23 = (min(var_23, (((min(((-13 ? 19 : 1368395319), ((var_15 ? var_12 : 196608)))))))));
            }
        }
    }
    #pragma endscop
}
