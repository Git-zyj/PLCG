/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_10 ? var_2 : var_7))) ? (((~(~var_10)))) : (var_2 / var_11)));
    var_15 *= var_12;

    for (int i_0 = 4; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_16 *= 253;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        arr_9 [i_1] = (((var_11 ? -1697282144 : var_10)));
                        arr_10 [i_1] [i_2] [i_1] [i_1 + 2] [i_0] [i_1] = 228;
                        var_17 = (min(var_17, (((~(max(1, (~var_0))))))));
                    }
                    arr_11 [i_0 - 2] [15] [i_2] [i_1] = (!4117093339);
                }
            }
        }
    }
    for (int i_4 = 4; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_18 = ((!(arr_5 [i_4] [i_4] [i_4 - 4] [i_4])));
        arr_14 [i_4] [i_4] |= (52861 ^ 53);
        arr_15 [i_4] = (((((!(((~(arr_12 [i_4] [i_4])))))))) | (min(3468722224, 26881)));
    }
    #pragma endscop
}
