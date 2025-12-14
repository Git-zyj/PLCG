/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((((var_5 ? ((max(var_0, 11107)) : (max(10171129991072196988, 8275614082637354634)))))))));
    var_12 = (min(((var_6 ? var_6 : (var_8 / 3279357457))), ((((!56029) > (27445 - var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = (((arr_4 [i_0 - 1]) ? (!var_3) : (((((-287832054 / 241) + 2147483647)) >> (((arr_6 [8] [i_1] [i_2] [i_2]) - 2271514968))))));
                                var_14 = (max(var_14, ((((var_8 > -1055313268) || (((var_4 ? var_6 : (arr_4 [i_0])))))))));
                            }
                        }
                    }
                    var_15 = ((2147483644 >> 0) ? -1055313268 : 147187823);
                    var_16 = (min(var_16, 1));
                }
            }
        }
    }
    #pragma endscop
}
