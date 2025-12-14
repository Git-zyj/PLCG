/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = ((((((!var_2) ? (9703 | var_6) : (~var_5)))) ? var_1 : 32));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = var_9;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 + 1] [i_1] [i_1] [i_1] [i_3] [11] [i_4] = ((var_5 ? ((((!((max(var_7, var_7))))))) : (((arr_6 [i_1] [i_3] [i_4]) ? (arr_2 [i_0 - 1]) : (max((arr_0 [i_4]), var_8))))));
                                arr_15 [i_4] [i_4] [i_3] [i_1] [i_1] [7] [7] = (max(((max(1, 1))), (((((arr_1 [i_0] [i_2]) != var_9)) ? (var_7 != -7035) : (19 >> 1)))));
                            }
                        }
                    }
                }
                var_13 |= -7047;
            }
        }
    }
    var_14 += ((((!(1 * var_8))) ? ((min(var_0, var_5))) : var_8));
    #pragma endscop
}
