/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = ((875138865 << ((var_12 ? (var_9 >= 2313103033) : var_10))));
                var_18 = ((((!(arr_1 [i_0 - 3]))) ? (((max((arr_0 [i_0 - 3] [i_0 + 1]), (arr_0 [i_0 - 2] [i_0 - 3]))))) : 875138863));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, (((var_7 * (((((var_14 ? 3231 : var_10))) ? var_6 : 195)))))));
                            arr_11 [i_1] [i_1] [i_1] = -var_13;
                        }
                    }
                }
            }
        }
    }
    var_20 = min((((~(~var_11)))), -1862854232017759624);
    var_21 = (10 != -var_0);
    var_22 -= (var_12 ? ((((min(var_11, 875138865))) ? (max(875138865, var_10)) : var_9)) : var_9);
    #pragma endscop
}
