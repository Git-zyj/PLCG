/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 = var_4;
                                var_14 += ((-(((!(((var_9 ? 233 : (arr_11 [i_0] [1])))))))));
                            }
                        }
                    }
                }
                arr_12 [i_1] [i_1] [i_1] = 205;

                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {
                    var_15 = (max(var_15, ((((((min(var_8, var_3)))) - ((2915912773 - ((((arr_15 [2]) ? 229 : 26))))))))));
                    var_16 = var_8;
                }
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_17 = (max((((arr_16 [10] [i_1] [i_6] [10]) > (((arr_2 [i_0 - 1] [i_1] [i_6]) ? (arr_5 [i_0] [i_1]) : 19559)))), (((min(var_6, var_11)) < 4287845921))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_18 = var_11;
                                var_19 = (((arr_1 [i_6] [i_6]) + (arr_1 [i_6] [i_6])));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        arr_25 [11] [11] [i_0] [i_1] [i_0] = var_2;
                        var_20 = (((arr_14 [i_0] [i_0] [i_6] [i_9]) >= (13480 && var_9)));
                        var_21 = ((((((arr_18 [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? var_9 : (arr_18 [i_0 - 1] [i_0 + 1] [i_0 + 1])))) - (((arr_2 [i_0 + 1] [i_0 + 1] [i_0 - 1]) + var_10))));
                    }
                    for (int i_10 = 2; i_10 < 22;i_10 += 1)
                    {
                        var_22 += (((max((min((arr_3 [i_10 - 1] [i_1] [i_1]), (arr_9 [i_6] [i_6] [i_6] [i_6]))), ((((arr_1 [i_0] [i_1]) | var_3))))) <= (var_11 + 112673205)));
                        var_23 = (arr_0 [i_0]);
                        arr_28 [i_10] [i_6] [i_6] [i_1] [i_10] = min((arr_16 [i_0 + 1] [i_0 - 1] [i_6] [i_6]), var_5);
                    }
                }
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    var_24 = ((~(((~var_4) % (min(255, var_10))))));
                    var_25 += ((((min(((~(arr_2 [i_0] [i_1] [i_11]))), ((24857 ? (arr_30 [i_0] [i_1] [i_0 - 1] [i_1]) : 244))))) == (((((arr_7 [i_0] [i_0] [14]) << (36028797018963967 - 36028797018963963))) + (arr_29 [13])))));
                }
            }
        }
    }
    #pragma endscop
}
