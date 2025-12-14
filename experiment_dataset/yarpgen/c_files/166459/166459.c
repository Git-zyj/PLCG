/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_14 && var_8) ? (var_5 | var_10) : var_11))) && (((min(var_14, var_6)))));
    var_18 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] |= ((-(max(-563820586, 193))));
                            var_19 = (max(var_19, (((((((!(arr_6 [i_3] [i_2] [i_1] [i_0]))))) << (((!-29544) * ((~(arr_5 [i_0] [i_1]))))))))));
                        }
                    }
                }
                arr_12 [i_0] = (max((min((255 || var_4), (((arr_7 [i_0] [i_1] [i_1] [i_1]) >> (var_3 - 6211464317791113153))))), 2147483647));
            }
        }
    }
    #pragma endscop
}
