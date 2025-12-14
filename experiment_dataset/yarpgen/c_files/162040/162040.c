/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_16 = (((!var_14) >> 8));
        var_17 ^= ((min(((arr_0 [i_0] [3]), (arr_0 [i_0 + 1] [i_0])))));
        arr_2 [i_0] = ((~((min(-26, (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_18 = (max(var_18, (((max(((((arr_3 [i_1]) ? 0 : (arr_3 [i_1])))), ((1 ? (arr_1 [11]) : var_6)))) != ((min(-26, (var_1 % 1))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_16 [i_3] = ((1 ? (((max((!1), (0 && var_2))))) : (((!var_9) ? 20201 : (arr_15 [i_2] [i_3] [i_3])))));
                            arr_17 [i_3] [1] [i_3] [i_4] [i_5] [i_5] = arr_10 [i_1] [i_1] [i_3] [i_3];
                            var_19 = (min(var_19, (((((max(8, var_10))) ? ((((min(89, 65))))) : (((var_7 - 89) ? var_12 : (arr_1 [i_1]))))))));
                        }
                        arr_18 [i_3] = (((min(-72, ((min((arr_10 [i_1] [i_2] [i_2] [i_3]), var_5))))) > (arr_3 [i_3])));
                    }
                    arr_19 [i_1] [i_2] [i_3] = ((((((1 != ((max((arr_7 [i_3] [i_2] [i_1]), var_3))))))) != ((max(var_0, 1564861994)))));
                }
            }
        }
        var_20 *= (((((arr_10 [i_1] [i_1] [i_1] [i_1]) & var_14)) > 57));
    }

    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_21 = (min(13651966421340300672, (arr_23 [i_6])));
        var_22 = (arr_20 [i_6]);
    }
    var_23 = var_6;
    #pragma endscop
}
