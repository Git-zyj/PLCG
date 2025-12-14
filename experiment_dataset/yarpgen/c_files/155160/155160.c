/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= var_9;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 *= (((arr_1 [i_0] [i_1]) - var_14));
                    arr_7 [i_0] [i_0] [i_0] [i_0 - 1] = ((((max((arr_4 [i_0 - 3] [i_0 - 2]), (arr_4 [i_0 - 1] [i_0 + 1])))) != ((63797 ? (~var_12) : ((200 ? (arr_6 [i_0] [i_1] [i_2 + 1] [i_2 + 1]) : var_13))))));

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_22 = ((-var_1 ? (!-461654176) : 1722));
                        var_23 = (arr_1 [i_0 + 1] [i_3 + 1]);
                        var_24 = 47;
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        var_25 = (((!(arr_5 [i_2 - 1] [i_4 - 1] [i_2] [i_4 + 1]))) ? (arr_5 [i_2 - 1] [i_1] [i_4] [i_4 + 2]) : ((max((arr_5 [i_2 - 1] [i_1] [i_2 - 1] [i_4 + 1]), (arr_5 [i_2 + 1] [i_1] [i_1] [i_4 - 1])))));

                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            arr_18 [i_5] [i_4] [14] [i_2] [i_1] [8] [i_0] = var_15;
                            var_26 = (max(((max((arr_17 [i_1] [12] [i_1] [12] [i_1]), (arr_17 [i_4] [i_4] [i_5] [i_5] [i_5])))), (((arr_17 [11] [i_1] [i_4] [10] [i_5]) ? (arr_15 [i_0] [i_0] [i_0] [i_4] [i_4 + 2] [i_5 + 1]) : var_0))));
                            var_27 = ((-((max((arr_4 [i_0 - 2] [i_2 + 1]), (arr_4 [i_0 - 2] [i_2 + 1]))))));
                            arr_19 [7] = (((((((arr_4 [5] [5]) ? (arr_6 [i_0 + 2] [3] [i_4] [i_5]) : -461654176)))) ? (((arr_9 [i_2 + 1] [i_4] [11] [i_4]) ? (arr_16 [i_4] [1] [i_4] [i_4 + 1] [i_4 + 1] [i_5 - 2]) : (arr_16 [i_4 + 1] [i_4] [i_4] [i_4] [i_4 + 1] [i_5 - 1]))) : ((max((arr_3 [i_1] [i_2] [i_5 - 2]), (max(1722, var_8)))))));
                        }
                        var_28 = 1722;
                    }
                }
            }
        }
    }
    #pragma endscop
}
