/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = ((var_10 ? var_2 : (((((var_9 ? var_7 : var_6)) <= (((var_11 ? var_9 : var_11))))))));
    var_14 = (min(var_0, var_9));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_15 += ((((min(-9217064585884717680, 48995))) ? var_9 : var_1));
                        var_16 = (max(((48978 ? 13359311603886049612 : 48982)), 14));
                    }

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_17 = (min(var_3, (min(2651793487, 4239427772845795376))));
                        var_18 = var_11;
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_19 = (max(var_5, (arr_0 [i_5])));
                                arr_16 [i_0] [i_0] [i_1] = (max((var_3 / var_3), ((max((min(var_4, var_0)), ((((arr_1 [i_2] [i_2]) > var_5))))))));
                            }
                        }
                    }
                    var_20 = var_7;
                }
            }
        }
        var_21 = (18683 >= 1643173807);
        var_22 = (min(var_22, ((max(((16521 ? 522206251 : 18684)), ((2438591486727125425 ? 48995 : 29244)))))));
        var_23 = (arr_0 [i_0]);
    }
    #pragma endscop
}
