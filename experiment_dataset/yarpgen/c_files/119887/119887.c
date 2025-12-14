/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = (max((((((!(arr_10 [i_0] [i_1 - 2] [i_2 + 2] [i_2] [i_3 + 1] [i_4])))) >> ((((1 ? (arr_7 [i_0] [i_0]) : var_10)) - 14162296643043563020)))), 13435));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max((arr_2 [i_0]), (arr_2 [i_0])))) ? 12298172660725518377 : (arr_3 [i_0] [i_0] [i_4])));
                                arr_13 [i_0] [i_2] [i_2 + 2] [i_0] = ((((min(184, (arr_3 [i_1 - 2] [i_2 + 1] [i_3 + 1])))) ? (min((arr_0 [i_0]), var_13)) : ((((!(((var_12 ? 18446744073709551615 : (arr_9 [i_0] [i_1 - 2] [i_2 + 2] [i_3 - 1] [i_4]))))))))));
                                var_15 = 96;
                                arr_14 [i_0] [i_2] [i_0] = ((-var_9 ? 109 : 18187219691876552474));
                            }
                        }
                    }
                    var_16 -= (max(((~((var_3 ? (arr_2 [6]) : var_4)))), var_6));
                    var_17 = (max(var_17, ((max(((var_1 ? 4232797272395929805 : (((arr_2 [10]) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 787677854)))), (arr_7 [i_1 + 1] [i_2 + 3]))))));
                    var_18 = ((arr_5 [i_0] [i_1 - 3] [i_2] [i_1]) ? 5633 : (arr_9 [i_0] [i_1 - 4] [i_1 - 1] [i_0] [i_0]));
                }
            }
        }
    }
    var_19 = var_13;
    var_20 = ((var_4 ? var_4 : var_10));
    var_21 &= var_4;
    #pragma endscop
}
