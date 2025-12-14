/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((min(898191306, -898191321)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        var_15 += ((((((var_2 || 1699082549) ? (min(1699082549, 898191336)) : 32027))) && var_5));
                        var_16 = (min(var_16, (arr_10 [i_3 + 1] [i_3] [i_3] [i_3 + 1])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_16 [i_0] [2] [i_0] = (var_14 | var_5);
                        var_17 = (((!var_4) >= 2595884767));
                    }
                    arr_17 [i_0] [i_0] [4] [i_2] = (max(((((min(3396775998, var_11))) ? ((3396775975 ? (arr_0 [i_2] [i_1]) : 3396775991)) : (((898191321 ? (arr_7 [0]) : var_4))))), ((((!28726) / 1)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_18 ^= ((((var_13 & (arr_6 [i_0] [1] [1]))) <= (((-(max((arr_2 [i_0]), var_13)))))));
                                var_19 = (((-((min(1, var_1))))));
                            }
                        }
                    }
                    var_20 = ((((min((arr_14 [i_2] [i_1] [i_0] [i_0] [i_0]), (arr_18 [i_0] [4] [i_2] [i_1])))) ^ ((-2842407386915028904 ? 2068630714 : -1667556638932650267))));
                }
            }
        }
        var_21 ^= ((!(((898191322 ? 123 : -2595884747)))));
    }
    var_22 += var_6;
    #pragma endscop
}
