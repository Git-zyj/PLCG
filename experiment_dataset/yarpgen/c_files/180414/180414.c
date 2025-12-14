/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_10;
    var_19 = (((var_13 ? var_12 : var_0)));
    var_20 = (((((var_16 || var_16) ? (((max(0, var_0)))) : (var_9 * var_0))) | var_11));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, ((max(((((arr_3 [i_1 + 1] [i_1] [i_1]) / (arr_2 [i_2])))), (1 * 839635830169618109))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_2] [i_4 - 2] = (((arr_7 [i_0] [i_0 + 1] [i_0] [i_0]) - (max(1, 16537465791901717563))));
                                var_22 = max(((min((max(1, (arr_5 [i_3 + 2] [i_2] [i_0]))), (arr_3 [i_0] [i_1 - 2] [i_1 - 2])))), var_15);
                            }
                        }
                    }
                    var_23 = (max(var_23, (((((19586 ? (arr_2 [i_2]) : (((arr_6 [i_0] [i_0] [i_0]) ? (arr_8 [i_2] [i_0 - 1] [i_0 - 1] [i_0 + 2]) : 7585138896306909441))))) ? ((((arr_3 [i_1] [i_1] [i_0]) > 1))) : ((max(((min(175, -93))), (arr_6 [i_0] [i_0] [i_0]))))))));
                }
            }
        }
        var_24 = (min((((((arr_3 [i_0] [i_0 - 1] [i_0 - 2]) ? var_3 : var_1)) * (((arr_12 [i_0 - 2] [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0 - 1]) ? 14954219353961357603 : 13533854960887983626)))), (var_3 % 80)));
    }
    #pragma endscop
}
