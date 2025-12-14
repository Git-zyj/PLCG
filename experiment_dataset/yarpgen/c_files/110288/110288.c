/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = (((arr_8 [i_1] [i_2] [i_3]) || var_13));
                        var_19 = (((var_1 ? 0 : -751592168)));
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        var_20 = (1 ? (arr_5 [i_0]) : var_13);
                        arr_16 [i_4] = 54727;
                        var_21 = (!10817);
                        arr_17 [i_0] [i_1] [i_4] [i_2] [i_4] [i_4] = var_5;
                    }
                    for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_22 = (((arr_10 [i_5] [i_2] [i_0]) ? var_12 : ((54737 ? 0 : var_8))));
                        var_23 = (min(var_23, var_0));
                        var_24 += (((((var_8 ? (arr_9 [i_0] [i_1] [i_2] [i_2]) : (arr_2 [i_5])))) * (arr_18 [i_0] [i_1] [i_2] [i_5] [i_5 + 2] [i_1])));
                    }
                    arr_21 [i_1] = (((arr_11 [i_2] [i_2]) || var_4));
                }
                var_25 = var_0;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        {
                            arr_26 [i_0] [i_1] [i_6] [i_7] [i_7 - 1] = (((((arr_0 [i_1]) ? var_8 : 1)) << (((((min(var_18, (arr_0 [i_0])))) || (((var_0 ? 54727 : var_8))))))));
                            var_26 = (((((((((arr_18 [i_7] [i_6] [i_6] [i_1] [i_0] [i_0]) && 0))) >= (54742 != 20182)))) < 10817));
                            var_27 = (max(var_27, (((((~(((arr_3 [i_1]) ? var_11 : (arr_22 [i_0]))))) / 4294967295)))));
                            arr_27 [i_1] = var_12;
                        }
                    }
                }
            }
        }
    }
    var_28 = (min(var_28, var_12));
    #pragma endscop
}
