/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(-21, ((~((var_15 ? 14592 : var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = 21407;
                    var_21 = ((-(((arr_2 [i_1 + 2]) ? 8596266462078981670 : var_15))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_22 = var_7;

                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            var_23 = ((((min((!var_0), (((arr_3 [i_2] [i_2] [i_0]) ? -14 : -1))))) ? ((((((-2 ? 9 : var_13))) && (arr_3 [i_0] [i_0] [i_0])))) : ((var_11 - (((arr_11 [i_1] [i_4]) ? -30 : 4238))))));
                            var_24 = ((-(arr_16 [i_0] [5] [i_2] [i_3] [i_4])));
                            var_25 = ((15518 > (arr_8 [i_0] [i_0])));
                            arr_17 [i_2] [i_1] [i_2] [i_3] [i_0] [i_0] = (min(21, (arr_15 [i_3] [i_0] [i_0])));
                            var_26 = 2;
                        }
                        arr_18 [i_0] [0] [0] [i_0] [i_2] [i_3] = (~var_15);
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_1] [i_2] [i_5] = ((var_10 ? ((var_2 ? ((((arr_0 [i_2]) && 1))) : (~-1))) : -478842996));

                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            arr_26 [i_0] [i_1] [1] [2] [i_1] = (((~(arr_22 [i_1 - 1] [i_1 - 2] [i_6 + 1] [7] [i_1 - 2] [1]))));
                            var_27 = -8377440856259648950;
                            arr_27 [i_6] [i_5] [i_1] [i_0] = (min((arr_15 [i_6 + 1] [i_2] [i_2]), (((4470 << (((arr_12 [i_0] [i_1] [i_2]) - 8714653845310846912)))))));
                            var_28 = var_9;
                        }
                        var_29 = (max((min(-21, (arr_9 [i_5]))), ((((arr_11 [i_1 - 2] [i_1 + 1]) ? (arr_11 [i_1 - 1] [i_1 - 1]) : (arr_11 [i_1 - 1] [i_1 - 2]))))));
                    }
                    var_30 = (max(21, ((var_15 - (min(32767, 12))))));
                }
            }
        }
    }
    var_31 = ((((max(var_9, -var_13))) ? var_1 : ((69 ? -85 : 8431456542654403566))));
    #pragma endscop
}
