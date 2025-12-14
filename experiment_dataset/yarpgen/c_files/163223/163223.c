/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((max((var_13 ^ 0), (1639448255 | var_16))))));
    var_18 = (~4294967293);
    var_19 = ((((var_11 + 2147483647) >> -var_1)));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_20 = 254;
                        arr_12 [i_1] [i_3] = ((!((!(arr_6 [i_0] [i_0] [i_0])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_21 = (max(var_21, (arr_17 [i_0] [i_0])));
                    arr_18 [i_0] [i_5] [i_5] = (206 <= var_12);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_4] [10] [i_6] [i_7] [i_6] = (min((((arr_11 [i_4] [i_5] [i_5] [1]) ? (arr_13 [i_0] [i_4 - 1] [6]) : -126)), ((max((max((arr_19 [6] [i_4 - 1] [i_4]), 246)), var_4)))));
                                arr_25 [i_0] [i_0] [i_4] [i_5] [i_0] [i_6] [i_7] &= ((((min((arr_23 [14] [i_0] [i_4 - 1] [i_4 + 1] [i_5] [i_5] [i_6]), var_3))) ? (1 > -var_16) : 2126797837));
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((max((arr_20 [i_0] [i_4 - 1]), 16029)));
                                arr_27 [i_0] [1] = var_13;
                                var_22 = (min(var_22, 125));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
