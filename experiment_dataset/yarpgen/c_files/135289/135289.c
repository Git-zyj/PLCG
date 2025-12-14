/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((~((((!(arr_4 [i_0]))))))))));
                    var_18 = (max((max((arr_5 [i_1] [3] [i_1]), var_0)), (!var_15)));
                }
            }
        }
    }
    var_19 = (max(var_19, ((max(((-15608 ? 17130757665014628559 : -1699071530)), var_2)))));

    /* vectorizable */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        arr_12 [i_3] = (68 >= var_0);
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        var_20 = (max(var_20, (arr_14 [i_3] [14] [i_5 - 1])));
                        arr_20 [i_3 - 1] = (((arr_18 [i_6] [i_5] [i_5] [i_4 - 2] [i_3 - 1]) ? (var_15 & var_11) : 30));
                        var_21 = (max(var_21, (arr_15 [i_4] [i_5])));
                        var_22 = (max(var_22, 127));

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_23 *= (!(~var_8));
                            arr_25 [i_7] [i_7] [i_5] [i_6] [i_7] = (((arr_23 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_4 + 1] [i_5 - 2] [i_5 - 2]) ? var_2 : (arr_19 [i_3] [i_3] [15] [3] [i_3 + 1] [i_3])));
                            var_24 = 46;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
