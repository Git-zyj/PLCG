/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_0 + 2] [i_2] = 795356587;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] [i_2] [i_3] = (((min((arr_15 [i_2 - 1] [i_2 - 1] [i_2 - 1] [11] [i_0]), (~var_14))) ^ ((((-107 + 2147483647) << (((arr_12 [i_2 - 1]) - 2214877525768068872)))))));
                                arr_18 [i_0 + 1] [i_3] [i_0 + 1] [i_0 + 1] [i_4] [i_4] = (12756 <= 170);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_16 = -1;
                        var_17 += (max(66, 189));
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_18 = (((arr_2 [i_2]) - 1));
                        var_19 -= (arr_20 [i_0 + 2] [5]);

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            var_20 = -1;
                            var_21 = 2023218076;
                        }
                        arr_27 [i_0 + 1] [i_0] = (~1);
                        arr_28 [i_6] [i_6] [8] [i_6] [9] = ((((max(var_12, (arr_13 [i_6] [i_2 + 1] [i_2 + 1])))) ? ((((arr_9 [i_2 - 1] [i_2 + 1] [i_2] [i_2]) <= (arr_9 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2])))) : (!65351)));
                    }
                    for (int i_8 = 3; i_8 < 9;i_8 += 1)
                    {
                        var_22 = (max(((((arr_20 [i_2 + 1] [i_0 + 2]) >= (1 + var_7)))), (max((~var_13), ((var_5 | (arr_23 [i_2] [i_1] [i_2 + 1] [i_8])))))));
                        var_23 = (!((max(var_1, (((~(arr_23 [7] [7] [i_2] [i_2 + 1]))))))));
                        var_24 = (arr_8 [i_0]);
                    }
                }
            }
        }
    }
    var_25 = (min(var_25, (((((((((-450852339 + 2147483647) << (235 - 235)))) ? 255 : -1))) && var_6))));
    var_26 = var_4;
    var_27 = (((max(((43468 ? var_10 : 1)), -156)) == 1226772580));
    #pragma endscop
}
