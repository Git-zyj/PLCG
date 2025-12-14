/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_11 = ((!(((0 ? 117 : -1401570168)))));

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        var_12 = (max(var_12, (arr_1 [i_3])));
                        arr_9 [i_1] [i_3] = ((arr_7 [i_1] [i_1] [i_3 + 1] [i_3 + 1]) + (((arr_2 [i_1] [i_1] [i_1]) << (((((arr_0 [i_0] [i_2]) + 35)) - 9)))));
                        arr_10 [5] [i_1] = (~15776640108882848017);
                        var_13 = (min(var_13, (((((((((((arr_7 [i_0] [2] [2] [i_3]) > 26210)))) > (max(5606815937410235103, -2889561600256016173))))) == -1401570174)))));
                    }
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_14 = (max(var_14, var_4));
                                var_15 = (max(var_15, ((((max((arr_4 [i_1] [i_5]), (arr_0 [i_0] [i_6])))) ? ((117 ? (arr_0 [i_0] [i_4]) : 4195917135109886211)) : ((((104 != (arr_4 [i_6] [i_5])))))))));
                                arr_18 [i_0] [i_1] [i_1] [i_5] [i_6] [i_1] [i_4] = (arr_16 [i_0] [i_1] [i_4] [i_5] [i_4]);
                            }
                        }
                    }
                    var_16 -= var_7;
                    arr_19 [i_1] [i_0] [i_0] [i_1] = ((120 ? (((!(arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) : (arr_15 [i_1] [i_1] [i_1] [i_4] [i_1])));
                }
                for (int i_7 = 2; i_7 < 8;i_7 += 1)
                {
                    arr_23 [i_0] [i_0] [i_0] [i_1] = var_6;
                    var_17 = var_1;

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_27 [i_1] [i_0] [i_1] [i_1] = (max(var_7, (arr_24 [i_8] [i_7 - 1] [i_1] [i_0])));
                        arr_28 [i_0] [i_1] [i_0] [i_8] = arr_26 [i_7 + 3] [i_7 - 2] [i_7 + 1];
                        arr_29 [i_0] [i_0] [i_1] [i_1] [i_7 - 1] [i_8] = var_3;
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_34 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((-52 ? 52 : -46));
                        var_18 += ((!(((-69 ? var_2 : (arr_11 [i_7 - 1] [i_7 + 3] [i_7]))))));
                        var_19 += ((var_1 ? ((-(var_0 + 19362))) : (arr_6 [i_0] [i_0] [i_0] [i_0])));
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 7;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_20 -= ((!((min((arr_14 [i_10 + 3] [i_10 + 3] [i_10 + 3] [i_11]), var_10)))));
                            arr_41 [i_0] [i_1] [i_0] [i_1] = ((-(-1401570181 > 238)));
                        }
                    }
                }
            }
        }
    }
    var_21 = ((((~(~13181853406664154351))) ^ ((((~31) | var_10)))));
    #pragma endscop
}
