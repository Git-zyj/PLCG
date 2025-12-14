/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(3238111017, 14));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = ((var_9 ? (min((arr_5 [i_0] [i_1 - 1]), var_4)) : ((((((var_2 ? var_5 : var_4))) ? (((-18354 ? 252 : 255))) : -9223372036854775806)))));

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_13 = ((((((var_0 ? 7723428548931955839 : var_9)))) && ((max(112, (max(var_8, (arr_2 [i_0] [i_0]))))))));
                        var_14 = (((((((arr_0 [i_0]) < var_5)))) > ((var_1 ? (arr_1 [i_1 - 1]) : var_3))));
                        var_15 = (min(var_15, (((min(((1589515485 ? var_1 : 22482), var_2)))))));
                        arr_9 [i_2] = 236363393;
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        arr_13 [i_0] [i_2] [i_2] [i_4] = (arr_12 [i_4] [i_2] [i_2] [i_0]);
                        arr_14 [i_0] [i_2] [i_1] [12] [i_2] [i_4 + 1] = (((min((arr_4 [i_2 + 1]), var_9)) != ((max(3843993075, 127)))));
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_17 [i_5] = (var_2 + var_0);
        var_16 = (min(var_16, var_4));
    }
    #pragma endscop
}
