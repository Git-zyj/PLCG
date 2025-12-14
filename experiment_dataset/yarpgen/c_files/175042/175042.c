/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_10 = (min(var_10, (arr_0 [i_0])));
        arr_4 [i_0] [i_0 + 4] = (arr_0 [3]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_1] = ((~(!19)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    {
                        var_11 = ((!(arr_6 [i_0] [i_0] [i_0 + 2])));
                        var_12 = 1;

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_17 [i_1] = (arr_6 [i_4] [i_1] [i_0]);
                            var_13 = (var_7 % 1);
                        }
                        arr_18 [i_1] [i_2] [i_0] [i_1] = (+-1);
                        var_14 = ((1 ? 1 : 1));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_15 = ((0 || ((((~var_9) ? -119 : (arr_20 [i_5]))))));
        arr_21 [i_5] [i_5] = (((~(min((arr_19 [i_5] [i_5]), (arr_20 [i_5]))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_16 = (min(var_16, (((1 ? (arr_23 [i_6] [i_6]) : ((((arr_5 [16] [i_6] [i_6]) | (arr_11 [i_6] [i_6] [i_6])))))))));
        var_17 = (((arr_2 [i_6] [i_6]) ? 18446744073709551615 : var_1));
        var_18 = 3629622364;
    }
    var_19 = 18446744073709551615;
    #pragma endscop
}
