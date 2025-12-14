/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_3 ? ((min((!var_7), (min(var_3, 1))))) : ((min(var_5, var_1))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (((((1 > -1) <= (((arr_0 [i_0]) ? var_7 : var_10)))) ? (arr_3 [i_0]) : (min(((max(1, var_7))), (min((arr_2 [i_0] [i_0]), (arr_0 [i_0])))))));
        var_13 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_11 [16] [i_1] = 1;
                    var_14 -= (((var_1 % (arr_9 [i_0] [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] [3] = (((min(691046066, 1)) >= (((1 ? 13341 : 1)))));
                                arr_18 [i_0] [18] [i_0] [18] [i_1] [18] [i_0] = ((((arr_10 [i_1] [i_1] [i_2] [i_3]) << (((((arr_9 [i_0] [i_0] [i_1] [i_0]) ? var_2 : (arr_6 [i_1] [i_1]))) + 74)))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_15 -= var_9;
        var_16 = (max((arr_12 [i_5] [1] [i_5] [i_5] [i_5]), (max((((4503599627370495 ? 21 : 1374641389))), var_0))));
    }
    var_17 = var_10;
    var_18 = var_9;
    #pragma endscop
}
