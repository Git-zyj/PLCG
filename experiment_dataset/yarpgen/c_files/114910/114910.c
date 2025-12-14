/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_10 = ((((!0) || ((max(0, (arr_1 [i_0])))))));
                var_11 = (((((6327302083145458476 ? var_4 : (((!(arr_5 [i_0] [i_1] [i_1]))))))) ? (((~-94) ? (arr_3 [i_1 + 1] [i_1 + 1]) : (arr_3 [i_1] [i_0]))) : (!var_7)));
            }
        }
    }
    var_12 = (min((((!((max(var_6, var_0)))))), (~var_0)));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_13 = ((+((((arr_11 [i_2]) / var_4)))));
                    arr_15 [i_3] = ((min((arr_13 [i_2] [i_2] [i_3] [i_4]), (!var_5))));

                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        var_14 = ((!(((arr_9 [i_5 - 1]) && (arr_12 [i_2] [i_3] [i_4] [i_3])))));

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_15 = ((-((-(arr_17 [i_2] [i_5 - 2] [i_4] [i_4])))));
                            arr_20 [i_5] [i_6] [i_5] [i_2] [i_3] [i_3] [i_2] = var_6;
                        }
                        var_16 = 1207597813;
                    }
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        arr_24 [i_7] = (min((arr_23 [i_7 + 3] [i_7 + 3] [i_7 + 3] [i_7 + 2] [i_7]), (((71 ? -var_7 : (207 / var_5))))));
                        var_17 = (max(65518, (arr_21 [i_7 + 3] [i_7 + 1])));
                    }
                    arr_25 [i_2] = (((-7139366258302610187 / 7427) ? -1 : (((2813010186 ? var_0 : (arr_14 [i_4] [i_4]))))));
                }
            }
        }
    }
    #pragma endscop
}
