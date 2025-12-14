/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_6));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_17 = -46;
            var_18 = (((-1419659482 + 2147483647) >> (((var_0 > (arr_2 [i_0] [i_0] [i_0]))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_19 ^= 1;
                            arr_13 [i_1] [i_2] [i_2] = ((~(arr_6 [i_2] [i_1] [i_1])));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_16 [i_5] = ((0 ? (min((arr_10 [i_0] [i_0] [i_5] [i_5]), (arr_10 [i_0] [i_0] [i_0] [i_5]))) : ((~(arr_10 [i_0] [i_0] [i_0] [i_5])))));
            var_20 *= (min(((-24 * (arr_2 [i_5] [i_0] [i_0]))), (arr_2 [i_0] [i_5] [i_0])));
            var_21 = (max(var_21, (~101)));
            var_22 &= (((((((arr_10 [i_0] [i_0] [i_0] [i_0]) > -4))) % -1)));
            arr_17 [i_0] [i_0] = (((max((arr_10 [i_5] [1] [1] [i_5]), ((1 ? (arr_15 [i_0] [i_0] [i_5]) : 1)))) >> (((!(arr_10 [i_0] [i_0] [i_5] [i_5]))))));
        }
        var_23 ^= (6 ^ 62511);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_24 = (((arr_18 [i_6] [i_6]) ? (arr_18 [i_6] [i_6]) : (arr_18 [i_6] [i_6])));
        var_25 |= (!1);
    }
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        arr_25 [i_7] = ((((min(-1, 1))) ^ 1924306369));
        var_26 = (min(var_26, (((((0 | (var_8 | var_10))) + var_9)))));
    }
    #pragma endscop
}
