/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((-(arr_6 [i_0] [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = (((!563407982) ^ ((2298422699 ^ (arr_9 [i_2 - 1])))));
                                arr_12 [i_0] [i_0] [i_3] [i_4] = ((((!(1996544582 ^ -24427))) ? ((1 ? (0 ^ 2472) : (24439 ^ 2298422690))) : -21));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_15 [i_5] = (((max(1, 1996544582)) ^ (((1 ? 1 : 1)))));
        var_21 = (min(var_21, (arr_14 [i_5])));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    var_22 = (-24427 ^ -8963249259873700015);
                    arr_23 [i_6] [i_6] [i_6] [i_7] = (((2 ? (((20 ? 49 : -8978153580848118353))) : (((arr_21 [i_6] [i_7] [i_8] [i_8]) ^ 227)))));
                }
            }
        }
        arr_24 [i_6] = (((arr_16 [i_6]) ? 19 : ((1 ? (arr_16 [i_6]) : (arr_16 [i_6])))));
    }
    var_23 ^= (max((min(-3602683160348312318, 161)), (7201916232623101369 ^ 94)));
    #pragma endscop
}
