/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-5139431430734802472 ? -62 : -1));
    var_19 |= ((-var_6 ? (!var_14) : (max(4374442199192644682, (((4374442199192644682 ? var_2 : 33550336)))))));
    var_20 = -2088521644;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((((arr_2 [i_0]) ? 66 : (arr_0 [i_0])))) ? ((249 ? -14 : 33994)) : (((!var_13) ? (arr_3 [i_0]) : (var_2 >= 7)))));
        var_21 = (max(var_21, ((((arr_0 [i_0]) != (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))))))));
        arr_5 [2] = ((((((arr_2 [18]) << ((((33550336 ? (arr_0 [i_0]) : var_10)) - 37))))) ? ((-(arr_2 [i_0]))) : ((-(arr_3 [2])))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_9 [i_1] [9] = (!73);
        arr_10 [i_1] = (!var_3);
        arr_11 [0] [7] = min((((arr_6 [i_1 + 3] [i_1]) ? (arr_6 [i_1 + 2] [i_1 + 3]) : var_10)), (arr_6 [i_1 - 1] [9]));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_22 = (3 < -5139431430734802467);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_26 [6] [i_5] [17] [i_6] [i_3 + 1] [i_2] [i_2] = (min((((-(arr_24 [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1] [11] [i_5])))), (arr_17 [i_3 + 1] [i_3] [i_5 + 1])));
                                arr_27 [i_6] [17] [i_4] [i_4] [i_4] = (arr_16 [4]);
                                var_23 = (min(var_23, (((((min(var_0, -4374442199192644698))) ? ((-((9 ? (arr_16 [i_6]) : var_4)))) : 528175215)))));
                            }
                        }
                    }
                    arr_28 [i_3] [i_3 + 1] [i_3] [0] = var_10;
                    arr_29 [20] [i_3] [i_4] [i_2] = (!(((arr_19 [i_4] [0] [i_3 + 2]) || var_9)));
                }
            }
        }
    }
    #pragma endscop
}
