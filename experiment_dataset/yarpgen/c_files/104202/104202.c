/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2 - 2] [i_3] = (~((min(((!(arr_8 [i_1] [i_3]))), (var_8 <= var_16)))));
                            var_17 = 0;
                            var_18 = (max((arr_5 [i_0] [i_1] [i_3]), (((arr_4 [i_0 + 1]) & -1))));

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_19 ^= (((~(arr_8 [i_2] [i_1]))));
                                arr_14 [i_4] [i_1] [i_4] |= (((!var_9) - (((((var_2 && (arr_3 [i_0] [i_4] [i_0]))) && ((max((arr_12 [i_4] [i_0] [i_2] [i_1] [i_0] [i_0]), var_3))))))));
                            }
                        }
                    }
                }
                var_20 = ((-1 < -6549) < ((~((var_6 ? 8191 : 3948)))));

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        arr_20 [i_1] [7] [i_1] [i_1] = (-1 - var_16);
                        var_21 = (max(var_21, ((min((arr_15 [i_0] [i_0] [i_6]), (arr_8 [i_0] [i_6]))))));
                        arr_21 [i_0] [3] [3] [i_0] [i_0] [i_1] = ((!(arr_8 [i_1] [i_1])));
                    }
                    var_22 = (max((max((arr_17 [i_1] [i_1] [i_5] [i_5]), (((arr_1 [i_1]) ? (arr_16 [i_1]) : var_11)))), (((!(arr_3 [i_0] [i_1] [i_0 - 1]))))));
                    var_23 *= 0;
                    arr_22 [i_0] [i_1] [i_1] = (-(((!(arr_19 [i_0 + 1] [i_0] [i_0 + 1] [i_0])))));
                    var_24 = (max(var_8, var_12));
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_25 = ((!((min(0, 6573)))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_26 = (min((min((((arr_27 [0] [0] [i_7] [i_8 + 1]) ? (arr_2 [i_1] [i_1] [i_9]) : 11630)), (!var_1))), ((max(var_11, var_0)))));
                                var_27 -= var_8;
                                arr_29 [i_0 - 1] [i_1] [i_1] [i_1] = (max((arr_2 [i_1] [i_8 - 1] [i_8 + 1]), (arr_9 [i_0 - 2] [i_1] [i_0 + 1] [i_0])));
                                var_28 = (max((arr_19 [i_1] [i_1] [i_8 - 1] [i_8]), (arr_19 [i_0] [i_0] [i_8 + 1] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (min(25776, var_13));
    #pragma endscop
}
