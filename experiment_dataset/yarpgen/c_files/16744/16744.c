/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(178, 25947));
    var_15 = var_7;
    var_16 = 127;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (min((min((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_1]))), var_12));
                var_18 = ((((-2869683154521686558 && (arr_1 [i_0]))) ? (((((!(arr_2 [i_0] [0] [3]))) && ((((arr_3 [i_0] [i_1] [i_0]) ? var_8 : 165)))))) : (((((arr_3 [i_0] [i_1] [i_1]) & (arr_3 [i_0] [4] [i_1])))))));
                var_19 = (min((~1928321768), (min((arr_1 [i_0]), (arr_1 [i_0])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_20 -= (((min(121, (min(8337839258312526093, -38)))) - -2103904698));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_21 = var_2;
                    var_22 = ((min((((arr_2 [i_2] [i_2] [i_2]) ? (arr_6 [i_2] [i_2] [i_2]) : (arr_8 [i_3]))), ((~(arr_10 [i_2] [i_3] [16]))))));
                    var_23 = ((~(arr_0 [i_4])));
                }
            }
        }
        var_24 += ((((min(29375, -2103904711))) ? -8856722322086102560 : 12));
        var_25 = ((-2103904698 ? ((min(64080, -68))) : 33));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {
        var_26 = ((var_2 % (arr_6 [i_5] [i_5] [i_5])));
        var_27 = var_11;
        arr_14 [i_5] = ((arr_7 [i_5 - 2] [i_5] [i_5 - 2]) || -8856722322086102573);
        var_28 &= ((~((var_2 ? 64072 : 64080))));
        var_29 += ((64080 ? (35 || 8856722322086102559) : (arr_1 [i_5])));
    }
    #pragma endscop
}
