/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-115661744912882766 ? ((((0 ? 1033066144 : 4294967281)) - var_10)) : (max((min(1033066141, var_1)), -79))));
    var_15 = (0 ? 3640309553 : ((((!var_4) | var_11))));
    var_16 -= ((!((!(-5398972280042570611 + 1)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (arr_1 [i_1])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_14 [i_0 - 1] [i_2] [i_3] = (max(((var_13 ? 3261901168 : var_1)), ((1033066141 >> ((((max(2048, var_1))) - 6279))))));
                        arr_15 [i_2] [i_3] = (max((!3157540900), (((!-7622869510490394490) ? var_5 : (arr_11 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0 - 1])))));
                        arr_16 [i_0] [i_0] [i_2] [i_0] = (~2048);
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        var_18 = (max(var_18, (((!(arr_4 [i_1] [i_1 + 1]))))));
                        arr_19 [i_0] [i_0] [13] [i_2] = (((arr_10 [i_0]) > ((var_9 ? 0 : var_3))));
                        var_19 += 15357242532056687520;
                        arr_20 [i_0] [i_1] [i_2] [i_2] [i_1] [i_4 + 4] = 1;
                        var_20 = (min(var_20, (((!(~var_0))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_27 [i_0] [19] [i_2] [i_1] [i_0] = (1033066144 | -21);
                                var_21 *= ((!(((arr_24 [i_6 + 1] [i_1 - 1] [i_0 - 1]) < (arr_24 [i_6 - 1] [i_1 - 4] [i_0 - 2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
