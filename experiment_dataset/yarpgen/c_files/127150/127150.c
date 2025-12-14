/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_11;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_21 -= 66977792;
        var_22 = ((var_11 ? (((((594031469848021307 ? var_8 : var_5)) >> ((((188 ? var_10 : var_8)) - 7079))))) : (min((arr_3 [i_0 - 1]), (arr_3 [i_0 - 2])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = (((arr_5 [i_0 - 2]) | var_15));
            var_23 = ((18043 ? ((18070 ? 8866461766385664 : var_3)) : (var_8 && -594031469848021313)));
            var_24 = (((((var_17 ? (arr_3 [i_0]) : var_11))) ? (arr_1 [i_0 - 2]) : (arr_6 [i_0 + 1] [i_0 + 1])));
        }
        arr_8 [i_0 - 1] = var_5;
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_25 = ((((max((min((arr_9 [i_2]), var_0)), (arr_10 [i_2 + 3])))) ? var_6 : var_1));
        var_26 -= (max(((min((!var_16), (min(var_4, -90))))), var_5));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        arr_16 [2] = (arr_15 [i_3]);
        var_27 = ((18 ? 65348 : -551232866));

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_28 = var_3;
            var_29 = ((+((((arr_9 [20]) >= (arr_12 [i_4]))))));
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    {
                        var_30 = ((var_2 || (((var_1 ? (arr_21 [8]) : var_17)))));
                        var_31 = ((var_4 ? (arr_14 [i_5]) : (arr_14 [i_5])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
