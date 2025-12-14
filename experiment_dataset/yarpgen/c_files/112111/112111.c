/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (--4832436893777569462);
                var_13 += ((4832436893777569462 ? 30381 : ((244 ? (arr_2 [i_0] [i_1]) : -1))));
                var_14 += 1;

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_15 = (min(((min((arr_6 [i_3 + 2] [i_3] [i_3 + 1] [i_4 + 1]), (arr_6 [i_0] [i_3 - 1] [i_3 - 2] [i_4 + 2])))), (min(-32538, (arr_11 [i_1] [i_3 + 3] [i_3 + 3] [i_4 - 1] [i_4])))));
                                var_16 -= (((arr_3 [i_3] [i_3] [i_3]) != (((!(arr_9 [i_0] [12] [i_0] [10]))))));
                                var_17 = (min(var_17, ((((~((14 ? -1 : (arr_11 [9] [i_1] [i_2] [i_1] [i_4 - 1])))))))));
                            }
                        }
                    }
                    var_18 = (max(var_18, (((!(((-((min(var_6, var_6)))))))))));
                }
                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    arr_15 [i_0] [7] [i_0] [i_0] = (min(18446744073709551615, var_8));
                    var_19 &= ((!(((var_2 ? 244 : (!-14165))))));
                    arr_16 [3] [i_1] [i_1] [4] = var_5;
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_20 -= var_8;
                    var_21 = (((((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_2 [8] [i_0]) : (((arr_5 [i_0] [i_1] [i_6]) ^ (arr_4 [i_0] [i_0] [i_0]))))) | ((~(~-19445)))));
                    var_22 = (arr_13 [i_6] [i_1] [i_1] [i_0]);
                }
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    var_23 ^= ((((min((arr_12 [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 4] [i_7 + 4]), (arr_19 [i_7 + 2] [i_7 - 2])))) ? var_5 : (!14165)));
                    var_24 = (arr_20 [i_1]);

                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_25 = ((((min(var_2, ((((arr_25 [i_0] [i_1] [i_0] [i_8]) && -14)))))) ? ((((-32517 && var_0) || (!-74)))) : (((!((min(var_6, (arr_1 [i_1] [i_0])))))))));
                        var_26 -= var_11;
                        var_27 = (min((((!((min(252, 18446744073709551615)))))), (arr_11 [5] [0] [5] [9] [i_0])));
                    }
                    arr_26 [i_0] [3] [i_0] [i_0] = ((((min((arr_21 [i_0] [i_0]), (arr_25 [i_1] [i_7 + 1] [i_7 - 2] [i_7 + 4])))) ? (arr_17 [i_7 - 1] [i_7 + 4] [i_7] [i_7 - 1]) : ((615186562519767401 ? (251 <= 1) : (~14680064)))));
                }
            }
        }
    }
    var_28 *= min(var_5, var_3);
    #pragma endscop
}
