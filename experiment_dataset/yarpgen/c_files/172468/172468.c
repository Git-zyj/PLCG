/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(((-(~2072718607))))));
    var_20 = ((!((max(((max(69, 187))), -10965402585116690383)))));
    var_21 = (!40270);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_22 = ((max(69, -var_7)));

                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_3 - 2] = ((-(arr_0 [i_0])));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_23 = (~(max(var_17, -25260)));
                            arr_16 [i_0] [i_1] [i_3 + 1] [i_3 + 2] [i_2 + 3] [22] [i_1] = ((~((~(~784686608)))));
                            arr_17 [i_0] [11] [15] [i_3] = ((~(((!(~11823324773389509130))))));
                            var_24 = ((-(!-81)));
                        }
                        var_25 += (min(((~(~41))), (((!(!18703))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_23 [i_6] [19] [i_2] [i_1] [i_0] [14] = ((~(((!(!84))))));
                                arr_24 [i_6] [i_1] = ((((!((min(43330408, -81)))))));
                                var_26 = (min(var_26, ((min((max(((~(arr_20 [8] [i_5 - 2] [i_2 + 3] [4] [4] [4]))), (!69))), ((~(min((arr_22 [i_0] [i_1 - 2] [18] [i_5 + 1] [i_1 - 2]), var_0)))))))));
                            }
                        }
                    }
                    var_27 = ((!((min(7481341488592861216, ((min(3329309254, 2672934120))))))));
                }
            }
        }
    }
    #pragma endscop
}
