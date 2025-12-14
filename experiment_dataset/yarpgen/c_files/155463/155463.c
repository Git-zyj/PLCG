/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((var_6 ? (!var_2) : ((((var_8 ? var_9 : var_9)) >> (var_10 / var_1))))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [3]) ? ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : var_7)) : ((((arr_0 [i_0]) ? var_11 : var_2))))) : ((((arr_0 [i_0]) | (arr_1 [i_0]))))));
        var_13 -= (var_2 || var_11);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_14 += (arr_4 [i_1]);

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_15 = (min(var_15, var_8));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_16 = var_5;
                            arr_16 [1] [11] [11] [i_1] [i_5] = (48224 ^ 65533);
                        }
                    }
                }
                arr_17 [i_1] [i_1] = (((arr_14 [i_1] [i_2] [i_1]) ? (arr_14 [i_1] [i_2] [i_1]) : var_3));
            }
            arr_18 [i_1] = (((((-(4 | 4)))) ? (arr_1 [i_1]) : 48225));
        }
        var_17 = (((arr_8 [i_1] [i_1]) ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : ((((((var_1 == (arr_11 [i_1] [i_1] [i_1] [i_1] [18])))) <= (arr_3 [i_1]))))));
        arr_19 [i_1] [i_1] = ((+(((arr_9 [18] [i_1] [i_1] [i_1]) ? (arr_9 [i_1] [i_1] [i_1] [i_1]) : (arr_0 [i_1])))));
    }
    var_18 = var_1;
    #pragma endscop
}
