/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] = (((((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_0] [i_1] [i_0] [i_2 - 1]) : (arr_5 [i_0] [i_0] [i_1] [i_2 + 2]))) / ((var_13 ? (arr_5 [i_2] [i_2 + 2] [i_2 + 1] [i_0]) : (arr_5 [i_2] [6] [i_2 + 1] [8])))));
                    var_14 -= (min((~var_4), ((((~0) ^ (!var_9))))));
                    arr_7 [i_1] = (arr_4 [i_0] [i_1] [i_2 + 1]);

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        var_15 = ((min((arr_0 [i_1]), var_1)));
                        var_16 *= (arr_11 [i_0] [i_0] [1]);
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_17 = (max(var_17, ((((((1 ? var_2 : (var_2 && 4064)))) ? (!var_2) : (((arr_11 [i_0] [i_0] [i_0]) / ((var_6 | (arr_9 [2] [i_1] [2] [i_4]))))))))));
                        var_18 = (((288230376151703552 && 50276) ? (((~(arr_8 [i_1] [i_1] [i_1 + 1] [i_2 + 2] [i_2])))) : var_12));
                    }
                    arr_14 [i_1] [5] [i_1] = ((arr_13 [i_0] [i_0] [10] [i_0] [6]) && var_13);
                }
            }
        }
    }
    var_19 = -288230376151703553;
    #pragma endscop
}
