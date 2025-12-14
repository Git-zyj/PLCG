/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_14 = (min(var_14, (((((~(arr_4 [i_2] [i_0] [i_2])))) ? ((((!var_2) ? ((((arr_4 [i_0] [i_0] [i_2]) && (arr_5 [i_2])))) : (((!(arr_3 [i_0] [i_0]))))))) : var_8))));
                    arr_6 [i_0] [i_1] [i_2] = (((var_2 + 9223372036854775807) >> (((min(((var_8 << (var_6 - 228))), (arr_5 [i_0]))) - 14402))));
                    var_15 = (((arr_3 [i_1] [i_1]) <= var_11));
                }
                var_16 = (min((arr_0 [i_0] [i_1]), (((((arr_3 [i_0] [i_0]) * var_4)) + 1478352560))));
                var_17 ^= (min((arr_2 [i_0] [i_1] [i_0]), ((min((arr_2 [i_0] [i_1] [i_0]), 1773846227522841341)))));
                var_18 = (max(var_18, ((((arr_2 [i_0] [i_1] [i_0]) & 1478352543)))));
            }
        }
    }
    var_19 = var_3;
    var_20 = var_7;

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_21 = (((arr_7 [i_3]) ? (arr_7 [i_3]) : (arr_0 [i_3] [i_3])));
        arr_9 [i_3] = (((((var_13 > (arr_8 [i_3])))) + (!var_4)));
        var_22 |= ((((((1179 ? 16127 : var_0))) ? ((-1 ? var_10 : (arr_2 [i_3] [i_3] [6]))) : (((((arr_5 [i_3]) || (arr_8 [0]))))))));
    }
    #pragma endscop
}
