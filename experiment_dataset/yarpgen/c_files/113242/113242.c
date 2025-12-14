/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((!var_6) ? ((((!(~-293349359))))) : (((~293349362) ? 574301868 : 3515156710012541625))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_11;
        var_17 += 1711156116;
        arr_3 [i_0] = var_5;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_7 [4] = ((var_7 ? (-127 - 1) : var_2));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    var_18 = (~(~1711156101));
                    arr_14 [i_2] [i_2] [i_1] [i_2] = ((((30448895259359390 ? 18252057677011518651 : var_13))) ? (!var_1) : var_4);
                }
            }
        }
    }
    var_19 = (min(((~((var_10 ? var_14 : var_13)))), (~-293349338)));
    #pragma endscop
}
