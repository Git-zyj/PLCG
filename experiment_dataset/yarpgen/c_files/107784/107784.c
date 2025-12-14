/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [9] [i_1] [i_0] [i_1] = ((+((((arr_4 [i_0 - 1]) >= (arr_4 [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 |= (((-20 == -2664532447237925388) ? (((arr_10 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0] [i_3] [i_4]) ? -30940 : (arr_10 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_3] [i_0 - 2] [i_0 - 2]))) : ((3822 ? 6 : 24166))));
                                var_22 = (min((((arr_3 [i_0] [i_0 + 1] [i_0]) ? (((arr_13 [i_0] [i_0] [i_2] [i_3] [i_0]) / (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_18 / var_19))), ((((var_18 ? 0 : (arr_10 [i_0] [i_1] [i_2] [i_2] [2] [i_4])))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] = (((arr_9 [i_2] [i_1] [i_1] [i_0] [i_0]) ? ((17 ? 4193611559636972143 : -6740348975788221220)) : (~3827)));
                }
            }
        }
    }
    var_23 = (max(var_23, ((((((((max(var_12, 6810162354894311218))) ? var_12 : (var_9 ^ var_11)))) && ((max(254, 4951269682317891620))))))));
    #pragma endscop
}
