/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~(((!(!16976059722395882343))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = var_0;
                var_11 -= (((((~(arr_2 [i_0] [1] [i_1])))) ? (((((arr_3 [i_0] [21] [i_0]) && 164)))) : var_8));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_12 = ((~((min((arr_10 [i_0] [i_0] [i_0] [i_2]), (arr_1 [i_2] [i_3 - 1]))))));
                            arr_11 [i_2] = (min(239, (((arr_9 [i_2] [i_3 + 1] [i_3 - 1] [i_2]) / 64))));
                            arr_12 [i_0] [i_0] [i_0] [i_2] = ((!(~18446744073709551615)));
                        }
                    }
                }
                var_13 = (32767 != -28639);
            }
        }
    }
    var_14 = (((((~(var_1 & -75)))) ? ((~((1073741824 ? 5189 : -23)))) : var_0));
    #pragma endscop
}
