/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((((~(min(var_5, (arr_1 [i_0]))))) + ((((arr_1 [i_1 - 2]) ^ (arr_4 [i_0] [i_1 + 2] [i_2]))))));
                    arr_8 [i_0] [i_0] [i_0] = (((((arr_4 [i_1 + 2] [i_1 - 2] [i_1 + 1]) - (arr_2 [i_1 - 1] [i_1 + 2]))) % (((var_4 ? -8165 : (arr_2 [i_1 - 2] [i_1 - 1]))))));
                    var_16 -= (((max(var_15, ((max(3319116017, (arr_1 [i_0])))))) <= (arr_2 [i_1 - 1] [i_1])));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        var_17 = ((!((max((max((arr_5 [i_3] [i_3 - 1] [i_3 - 1]), 3319116023)), ((min(var_14, (arr_10 [i_3])))))))));
        arr_12 [i_3] [i_3 - 1] = (min(((max(1, 3319116033))), (arr_4 [i_3] [i_3 - 1] [i_3])));
        arr_13 [9] [9] = var_5;
        var_18 -= arr_10 [i_3];
        var_19 = 16;
    }
    var_20 = (((7995354767245939390 * ((var_11 ? -37 : var_5)))) + var_8);
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                var_21 -= -5309094544146636850;
                var_22 ^= var_9;
                arr_18 [1] [0] = (((((0 % -5309094544146636842) >> (((arr_10 [i_4]) - 7850)))) - (((max(((((arr_6 [i_4] [i_4] [i_4]) && var_3))), (arr_17 [i_4 - 1])))))));
                arr_19 [i_4 - 2] [i_4] [i_5] = (((-89 ? 23937 : (arr_4 [i_4] [i_4] [1]))));
            }
        }
    }
    #pragma endscop
}
