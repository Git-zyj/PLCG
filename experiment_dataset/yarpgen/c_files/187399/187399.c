/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (min(var_5, ((87 ? -88 : 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = (((arr_7 [i_0] [i_0 + 1] [i_0 + 1]) == ((max((arr_7 [i_0] [i_0 + 1] [i_2]), 65523)))));
                                var_16 = (max(var_16, (((min((-114 + var_7), var_11))))));
                                var_17 = (max(((max((arr_2 [i_0 + 1] [i_0] [i_0 + 1]), (arr_0 [i_0 + 1] [i_0 + 1])))), ((37729 ? 1 : 27807))));
                                var_18 = (arr_9 [i_2] [i_2] [i_2] [i_2]);
                                var_19 = (max(((var_3 ? 24861 : ((0 ? 64 : -14)))), ((((((var_12 ? var_0 : -114))) && 27806)))));
                            }
                        }
                    }
                }
                var_20 = ((-20801 ? ((((((arr_1 [i_0 + 1]) ? var_4 : (arr_10 [i_0 + 1] [i_1] [i_1])))))) : (((arr_4 [i_0] [i_1]) * 127))));
            }
        }
    }
    var_21 = ((+(((var_6 || var_7) % ((min(255, -14)))))));
    var_22 = -88;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            {
                arr_17 [i_5] = ((-77 ? ((((var_3 == 1) >= ((576460752303423487 ? var_8 : var_1))))) : ((((24858 ? 27804 : 3203609612))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_22 [i_5 + 2] [i_5] [i_5] [i_5] = var_13;
                            var_23 = (((((arr_21 [4] [i_5 + 1] [i_5 + 2] [i_5 + 1]) / 123)) * ((min((arr_16 [i_5] [i_5] [i_5 + 3]), var_5)))));
                            arr_23 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5] = (max((((!(~-8)))), ((((arr_20 [4]) << (var_3 - 7566))))));
                            var_24 -= -14;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
