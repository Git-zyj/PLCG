/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_18 = min((((((var_10 ? 239 : var_1)) <= 29))), var_3);
        var_19 |= ((((+(min((arr_3 [i_0 + 1]), var_14)))) + (arr_0 [i_0 - 1])));
        var_20 = arr_0 [i_0 + 1];
        var_21 = (max(var_21, ((min(var_14, (arr_0 [i_0 + 1]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_1] = (min(var_15, -29));
                    arr_10 [i_0] [i_1] [i_1] = (min((min((((arr_8 [i_0] [i_1] [i_1]) & (arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))), -29)), (min(-29, (arr_8 [i_0 + 1] [i_2 - 2] [i_1])))));
                    arr_11 [i_1] [i_1] = -843417817;
                    arr_12 [i_1] = var_0;
                    arr_13 [i_0 + 1] [i_1] [i_2 - 2] = (((~var_13) ? (-var_13 % 51) : -26));
                }
            }
        }
    }
    var_22 = min(var_4, (54 && 60));
    #pragma endscop
}
