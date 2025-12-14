/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_14 = ((((!((max(-597194434, (arr_0 [7] [i_0])))))) ? (max(var_3, (((3912844241 ? 597194439 : var_4))))) : (((max((arr_0 [i_0 + 2] [i_0 + 2]), (arr_1 [i_0])))))));
        var_15 *= ((((!(~80))) ? (((arr_0 [9] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : 2097151)) : ((-53 * ((var_2 ? 127 : var_13))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_16 = (((arr_3 [i_1]) << (-597194434 + 597194452)));
        arr_4 [i_1] [i_1] |= (!30);
    }
    for (int i_2 = 4; i_2 < 11;i_2 += 1)
    {
        var_17 = (max(var_17, var_9));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                {
                    var_18 = (!-104);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_19 = (((arr_19 [i_6] [i_6] [i_6] [i_6] [i_6 - 1]) ? (((arr_10 [i_2] [i_2] [i_2] [i_2 + 2]) ? var_3 : ((max(52, 4292870139))))) : (((-4953749895846011853 ? (arr_19 [i_2] [i_6] [i_6] [i_6 + 2] [i_6]) : (!var_7))))));
                                arr_21 [i_2] [i_5] [i_3] [i_3] [i_2] [i_2] = var_6;
                            }
                        }
                    }
                    arr_22 [i_2] = ((3831774022 ? (((!(arr_13 [i_2] [i_2 - 2] [i_2] [i_2])))) : ((((((max(var_6, 31)))) > 3425131924560410494)))));

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_20 += ((!(((((((arr_10 [i_2] [10] [i_2] [i_2 + 2]) ? 1 : 4292870144))) ? (arr_18 [i_2] [i_2 - 1] [i_3] [i_4 + 1] [i_7]) : (~100))))));
                        arr_27 [i_2] [i_3] [i_2] = ((((((arr_12 [i_4 + 1] [i_2]) ? (arr_11 [i_4] [1] [i_4 + 1] [i_3]) : 2921291188))) == ((-(arr_8 [i_2 + 1])))));
                    }
                }
            }
        }
        var_21 = (min(var_21, ((((!(194 == var_13)))))));
    }
    var_22 *= var_8;
    #pragma endscop
}
