/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 -= (max((max((-18 / -1256449233), var_2)), (arr_3 [i_0])));

                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    var_12 *= (max((((92 | var_6) ? ((max(var_3, var_1))) : (max(var_4, var_5)))), ((((!var_5) | (arr_2 [i_2 + 1] [18]))))));
                    var_13 = (47 | -10434);
                }
                var_14 = (((((~(0 | var_8)))) ? ((255 ? 64512 : 17472)) : ((((arr_1 [i_0]) | (arr_1 [i_0]))))));
                arr_6 [i_0] [i_1] [i_1] = max((((!((max(148051624, (arr_0 [i_0]))))))), (max((~var_2), ((max(var_7, (arr_3 [i_0])))))));
                arr_7 [i_0] [i_1] [i_1] = (max((var_9 | 18446744073709551610), var_5));
            }
        }
    }
    var_15 = var_7;
    var_16 = var_9;

    /* vectorizable */
    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {
        var_17 *= (arr_2 [i_3] [3]);
        arr_12 [i_3] [i_3] = (var_0 / var_4);
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        arr_17 [4] [i_4] = (((arr_2 [i_4] [i_4 - 1]) ? var_0 : (arr_2 [6] [i_4 + 1])));
        var_18 = (77 | 8191);
        var_19 = 247;
    }
    #pragma endscop
}
