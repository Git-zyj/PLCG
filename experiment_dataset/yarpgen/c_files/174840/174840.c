/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_0 [i_0 + 1] [i_0 + 1]) && var_4)) && 4607895307404186115));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_15 |= ((arr_5 [i_0 + 1] [i_0 - 1] [i_3]) && var_12);

                        for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
                        {
                            arr_11 [i_0] [i_0] [i_0] = (((!var_11) && var_12));
                            var_16 -= (((arr_3 [i_0 + 1]) && (arr_3 [i_0 - 1])));
                            var_17 -= (((arr_7 [i_0]) && -30));
                        }
                        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_18 = (var_5 && -4607895307404186116);
                            var_19 = ((-(arr_5 [i_0] [i_0 + 1] [i_0])));
                            arr_14 [i_0] [i_1] [i_0] [i_0] [i_5 - 1] [i_5 + 1] = var_11;
                        }
                    }
                }
            }
            arr_15 [i_0] = (((arr_6 [i_0 + 1]) <= var_11));
        }
    }
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        var_20 = ((~(((((min(var_5, 188))) && (arr_16 [i_6 + 1] [i_6 + 1]))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 23;i_8 += 1)
            {
                {
                    arr_26 [i_6] [i_8] [i_6] = ((((((((min((arr_24 [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_6 + 1]), (arr_22 [i_6 + 2] [i_7] [i_6 + 2] [i_6 + 2])))) && (((~(arr_24 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_8 - 1])))))))) != (min(((var_10 / (arr_20 [i_7] [i_6]))), ((max(7, 30581)))))));
                    arr_27 [i_6] [i_6] [i_8] = (((arr_24 [i_7] [i_6] [i_7] [i_6]) < (((arr_23 [i_6 - 1] [i_6 - 1] [i_6 - 1]) ^ (arr_19 [i_6 + 1])))));
                    var_21 = ((~(arr_25 [i_6 - 1] [i_6 + 2] [i_6])));
                    var_22 *= (min((((((~(arr_23 [i_6] [i_6] [i_6])))) | (var_1 ^ var_0))), (arr_17 [i_6 - 1])));
                    arr_28 [i_8] [i_8] [i_8] = -2901111866763456497;
                }
            }
        }
    }
    var_23 = ((-(max((max(8529514373825318971, var_10)), ((max(var_4, var_13)))))));
    var_24 = (min(var_24, var_9));
    var_25 = var_14;
    #pragma endscop
}
