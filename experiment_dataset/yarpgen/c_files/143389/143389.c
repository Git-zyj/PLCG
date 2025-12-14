/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (arr_0 [i_1]);

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, (((((((((178953165 ? -5203263548077124109 : -2144124321))) ? var_9 : (arr_6 [6] [6] [i_0 + 3] [i_0] [i_4])))) ? (((-1564462913 ? (!var_7) : ((max(1, (arr_6 [i_0] [i_1] [1] [i_3] [i_4]))))))) : (((arr_2 [i_0 - 1]) * var_2)))))));
                                var_13 = 178953165;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_14 = ((max((min(var_5, var_5)), 5203263548077124120)));
                                var_15 = (((arr_1 [i_0] [4]) ? (min((arr_7 [i_0 + 1] [9] [i_0] [9] [i_0] [i_0 + 2]), (min((arr_16 [i_5] [i_5]), var_3)))) : ((((((!(arr_13 [i_0])))) - (((!(arr_12 [i_0] [i_5] [1])))))))));
                                var_16 = ((((~(1 * var_2))) != ((-5203263548077124109 ? -4565597990080534455 : (((max(1, 56))))))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_17 = min((3934394669 & 4565597990080534443), (((arr_17 [i_0 + 3] [i_0] [i_0 + 2] [i_0 - 1]) ? (arr_17 [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 1]) : 1)));
                        var_18 = ((min((arr_16 [i_0 + 1] [i_0 - 1]), var_3)));
                        var_19 = (arr_17 [i_0] [i_1] [i_2] [i_2]);
                        var_20 = (max((max((arr_12 [i_0] [i_0] [4]), (max(4565597990080534455, 13644)))), ((min((((arr_16 [9] [14]) ? var_1 : (arr_3 [i_0] [i_0] [i_2]))), ((886088856 ? (arr_15 [i_0 - 1] [i_1] [i_2] [14] [1]) : var_6)))))));
                    }
                }
                var_21 = ((((max(var_7, 133)))));
            }
        }
    }
    var_22 *= var_10;
    var_23 = (min(var_23, (var_3 / var_0)));
    var_24 -= var_3;
    #pragma endscop
}
