/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (!var_3);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = (arr_1 [i_0] [i_1]);

                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        arr_8 [i_1] = (((~var_3) ? (min((arr_0 [i_2] [i_3]), ((var_12 ? (arr_6 [i_0 - 1] [i_1] [i_2] [i_2] [i_0 - 1]) : 977984707)))) : ((var_9 / (arr_2 [4])))));
                        var_16 = (min(var_16, (1 <= 4611686018393833472)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_11 [4] [i_1] [i_1] = ((~(~498676723)));
                        arr_12 [i_1] [i_1] [i_1] [i_4] [i_1] = ((var_5 ? (((arr_9 [i_2] [i_4] [i_2] [i_4] [i_1]) ? 12548945910971629244 : var_0)) : (arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0])));
                        var_17 -= (((20 ? var_12 : 10091)));
                        var_18 = (max(var_18, (~1)));
                        arr_13 [i_0] [i_1] [7] [i_1] [i_1] [i_0] = (arr_2 [i_0]);
                    }
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_19 = (min(var_19, ((((arr_17 [i_5 - 1] [i_5] [i_5] [i_5 - 1]) != (arr_10 [i_0] [i_0] [i_2] [i_5] [i_5] [i_0 + 3]))))));
                            var_20 = (!245);
                            var_21 = (max(var_21, (arr_6 [i_0 - 2] [i_1] [i_1] [i_5] [i_1])));
                        }
                        arr_21 [i_0 - 4] [i_1] [i_2] [i_1] = -1455367797;
                    }
                }
            }
        }
    }
    var_22 = ((var_3 >> (var_10 - 46300)));
    #pragma endscop
}
