/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 - 3] = (arr_2 [i_0 - 2]);
        arr_4 [i_0 - 4] = (~14207848553882920464);
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_14 ^= (max((arr_1 [i_1 - 3]), 34));
        var_15 = (min(var_15, ((min((max((arr_1 [i_1 - 3]), (arr_5 [i_1 - 2]))), ((max((arr_5 [i_1 - 3]), (arr_6 [i_1 - 3] [i_1 + 1])))))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_16 = (arr_5 [i_2]);
            var_17 |= 87;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_18 = var_5;
            var_19 |= (((((3604942402 ? 72 : var_7))) ? (min((arr_6 [i_1 - 1] [i_1 - 3]), (arr_6 [i_1 - 2] [i_1 - 3]))) : var_3));
            var_20 = ((((min(-87, (!14207848553882920464)))) ? ((((arr_12 [i_1 - 1] [i_1 - 2]) ? 11015 : (arr_7 [i_1 - 4] [i_3])))) : 17789849521537805097));
        }
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 22;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_21 += (((15601 ? (arr_23 [i_4 - 3]) : 2137567294)));
                                arr_28 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = (((var_8 ? var_3 : var_0)));
                                var_22 = var_0;
                                var_23 |= (((arr_16 [i_4 - 1]) ? (arr_12 [i_4 + 1] [i_6]) : (2081514155810091421 >= -16111)));
                            }
                        }
                    }
                    var_24 = (arr_8 [i_4 + 1]);
                    arr_29 [i_4 - 3] [i_5 + 1] [i_6] = (((((arr_7 [i_5 - 1] [i_4 - 4]) + 9223372036854775807)) << (((arr_18 [i_4 - 4] [i_4 - 1] [i_5 - 1]) - 1697811124))));
                }
            }
        }
        var_25 = arr_21 [i_4 - 4] [i_4 - 4] [i_4 - 1];
    }
    var_26 = (-14207848553882920464 > var_5);
    #pragma endscop
}
