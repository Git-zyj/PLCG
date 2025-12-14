/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_17 = (max(var_17, ((min((arr_1 [i_0 - 1]), ((max((arr_1 [i_0 - 4]), (arr_1 [i_0 - 4])))))))));
        arr_2 [i_0 + 2] = (((((~(-108 + -113)))) ? ((min(1, 1867229050062813313))) : (((max(109, (!9223372035781033984)))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_3] [i_3 + 1] = (min(((~(~-13714))), var_5));
                    var_18 = 4439820353066477198;
                    var_19 -= (((!239559282) ? (arr_9 [i_3 - 1] [i_3 - 1] [i_3 + 1]) : ((min(-13, (arr_9 [i_3 - 1] [i_3 - 1] [i_3 + 1]))))));
                }
            }
        }
    }
    var_20 = (((((var_6 ? ((-108 ? var_8 : var_12)) : (((-121 ? 1 : var_5)))))) ? (max(var_1, (((794851943 ? var_2 : 22436))))) : var_0));
    #pragma endscop
}
