/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((((var_4 ? 56 : 10)) >> (240 != var_2)))) ? (((((var_6 - 103) >= ((7680 ? 1123173823 : var_12)))))) : ((10 | ((var_15 ? 5439 : 18446744073709551615))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_17 = (max(var_17, 227));

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_1] [i_1] = var_5;
            var_18 = (min(var_18, (arr_5 [i_0] [i_0] [i_0])));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_18 [i_5] [i_5] = ((((4294967277 ? (arr_5 [i_5 - 3] [i_5 + 2] [i_5 + 1]) : (arr_5 [i_5 - 1] [i_5 + 2] [i_5 - 2]))) | (((min((arr_10 [i_5 + 2] [i_5 + 2]), (arr_10 [i_5 + 2] [i_5 + 2])))))));
                            var_19 = ((min(var_4, 215)) - (((max((arr_13 [i_0] [i_0] [19]), (min(18571, 200)))))));
                        }
                    }
                }
            }
            arr_19 [i_2] [i_0] = ((arr_1 [i_0]) - (6487871834790306178 == 1));
            var_20 = (arr_12 [19]);
        }
        arr_20 [i_0] [i_0] = ((!(~28)));
    }
    var_21 = ((((((var_12 - 18446744073709551593) ? var_0 : (30 / var_8)))) > 3775989104));
    #pragma endscop
}
