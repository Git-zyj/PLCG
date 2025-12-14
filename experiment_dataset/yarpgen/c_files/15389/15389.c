/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 = (min(var_16, (~var_10)));
    var_17 *= (((((54 & ((253 ? -7 : 3784668908))))) % (min(var_13, var_1))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = 16;

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_2] [i_0] = (max((arr_7 [i_0] [i_1] [i_2]), (min((arr_3 [i_0 + 1] [i_2 + 1] [i_3 - 4]), var_5))));
                        arr_16 [i_2] [i_2 - 1] [i_2] = 18446744073709551615;
                        arr_17 [i_2] [i_2] [i_0 - 1] [i_3] = (arr_0 [i_3 - 3]);
                        var_19 = (min(((min(91, var_1))), 3111068449));
                    }
                    var_20 += (min((-7 | 2704799435801635710), (arr_0 [i_2 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
