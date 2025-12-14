/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_17 = (((!var_16) ? ((min((arr_0 [i_0] [i_0 + 1]), (var_11 || 3204009352734949154)))) : ((min((arr_0 [i_0 + 1] [18]), (arr_2 [i_0 - 1] [i_0]))))));
        var_18 |= (arr_1 [i_0 - 1]);
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_19 = (max((min(var_16, var_10)), (((!((max((arr_0 [6] [i_1]), var_2))))))));
        var_20 = (min(var_20, (arr_2 [i_1] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] = (!-23);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_21 += (((~(arr_8 [i_3] [i_1] [i_1 + 2] [i_3]))));
                                var_22 = (arr_8 [i_1] [i_1] [i_3] [i_1]);
                                var_23 -= ((!(((((min((arr_8 [i_3] [i_4] [14] [i_3]), (arr_6 [i_1] [i_3])))) ? ((min((arr_3 [i_1]), (arr_3 [i_4])))) : ((min((arr_9 [i_1 - 1] [i_1 - 1] [i_3] [i_5]), var_13))))))));
                                var_24 = (min(var_24, (0 || 6)));
                            }
                        }
                    }
                    arr_15 [i_1] = (!var_16);
                    var_25 = (((((((max(var_3, 1))) ? 56853 : var_8))) - var_4));
                }
            }
        }
    }
    var_26 = var_10;
    var_27 = var_7;
    #pragma endscop
}
