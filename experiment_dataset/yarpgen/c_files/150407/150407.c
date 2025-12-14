/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(-var_14, ((((!var_9) - 61120)))));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_9 [i_3] [i_1] [i_2] = 2147483637;
                        arr_10 [i_0] [i_0] [i_2] [i_3] = 57620;
                        arr_11 [i_0] [i_0 - 4] [i_1] [i_2] [15] = (min((57618 + 87), (((var_16 != ((var_17 ? 1424140151 : (arr_2 [i_0]))))))));
                    }
                }
            }
        }
        var_20 = var_11;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_21 *= (((7 != 2436800828) != 57618));
        var_22 = (((arr_6 [i_4] [i_4] [i_4] [20]) != (arr_6 [i_4] [0] [6] [i_4])));
        var_23 = (min(var_23, ((((arr_1 [i_4]) ? (arr_5 [i_4] [i_4] [i_4] [i_4]) : var_2)))));
        var_24 = (max(var_24, ((-32 - (((arr_13 [i_4]) - var_7))))));
        arr_14 [6] [i_4] = (0 != var_16);
    }
    var_25 = (max(var_25, ((min(((((min(1589967750, 1))) - var_14)), 2038784171)))));
    #pragma endscop
}
