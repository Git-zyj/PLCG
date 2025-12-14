/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((4054421201 && ((((arr_0 [i_0]) ? ((1 ? var_2 : 52315)) : (arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_19 &= ((var_7 & (min((~52316), ((52288 << (((arr_3 [i_0] [i_1]) - 1113389779))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 23;i_3 += 1)
                {
                    {
                        var_20 = ((~(var_9 | 3)));
                        var_21 *= (((!var_16) || (!var_1)));
                    }
                }
            }
            arr_9 [i_0] = ((-(arr_7 [i_0] [i_0] [i_1] [i_1])));
            var_22 *= (min(var_3, (((!(!13221))))));
            arr_10 [i_1] = ((((min(((~(arr_4 [i_0] [i_0] [i_1]))), ((52328 ? (arr_3 [i_1] [i_0]) : (arr_1 [i_1])))))) ? (((~var_3) >> ((((max(52311, var_8))) - 52307)))) : (~var_11)));
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_13 [i_4] = (((((min(var_1, var_8))) * var_7)));
        arr_14 [i_4] = ((!(((((max((arr_6 [23] [19]), (arr_5 [i_4] [i_4] [i_4] [i_4])))) ? 52315 : (!var_10))))));
        var_23 &= ((((((((arr_0 [i_4]) <= (arr_3 [i_4] [i_4]))) ? ((((arr_6 [i_4] [i_4]) * var_15))) : (arr_7 [i_4] [i_4] [i_4] [i_4])))) ? ((((arr_6 [i_4] [i_4]) % (((arr_2 [i_4] [i_4]) * 5076))))) : (((arr_5 [15] [i_4] [i_4] [20]) * (((~(arr_8 [1] [i_4] [2] [i_4]))))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        arr_17 [i_5] = (((13221 && 52342) ? (arr_1 [i_5 + 1]) : ((0 ? var_0 : var_10))));
        var_24 &= (((arr_3 [8] [i_5]) - 15368));
        var_25 = (~13224);
    }
    #pragma endscop
}
