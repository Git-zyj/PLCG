/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_20 = 0;
        arr_3 [i_0] [i_0] = min((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_7 [i_1] [i_1 - 1] = ((((min(28, (min(0, 0))))) ? (arr_5 [i_1]) : (min(((((arr_4 [i_1]) ? (arr_5 [i_1]) : var_15))), 18446744073709551615))));
        arr_8 [i_1] = min((((arr_4 [i_1 - 2]) ? (arr_5 [i_1 - 2]) : ((min(137, 12080))))), 49394);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (arr_10 [i_2]);
        arr_12 [i_2] [i_2] = ((((min(29592, (-2147483647 - 1)))) ? (min(227, 15458748813592975705)) : ((((2147483632 ? 1 : (arr_4 [i_2])))))));
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        var_21 = (min(var_21, (max(((((max((arr_13 [1] [1]), var_13))) ? (arr_4 [i_3 - 1]) : ((max(-134477558, (arr_14 [i_3] [i_3])))))), 25000))));
        arr_16 [i_3] [i_3] = var_12;
        arr_17 [i_3] [i_3] = (max(var_7, ((~(min(2176494762, -2571486117362769194))))));
        arr_18 [i_3] = (max((((~49373) ? -12074 : 44849)), var_8));
        arr_19 [i_3] [i_3 + 1] = ((max((arr_6 [i_3 + 1]), (arr_9 [i_3 + 1] [i_3 + 1]))));
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                {
                    arr_29 [i_4 + 1] [i_4 + 3] [i_4] [i_4] = (~49374);
                    var_22 = (max(var_22, (((+(min((arr_21 [i_4 - 1]), (arr_22 [i_4] [i_4]))))))));
                }
            }
        }
    }
    var_23 &= var_15;
    #pragma endscop
}
