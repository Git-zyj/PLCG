/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 -= ((-(62395 || 1)));
                    var_16 = ((28142 ? 1 : 37395));
                    arr_7 [i_1] [i_2] = (max((max(28137, 2431930831471502538)), -16014813242238049086));
                    var_17 = (~((~(arr_5 [i_1] [i_1] [i_1 + 1] [i_1 - 2]))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_10 [i_3] = ((25471 ^ (((!(arr_8 [i_3]))))));
        var_18 = (((((1 < 195) & (~2431930831471502528))) * 125));
        var_19 = ((((-(var_9 * var_1))) >> (((min(-6261, 16128)) * (65530 < 59)))));
    }
    var_20 = (max((((-((max(var_14, var_8)))))), (((((max((-127 - 1), 222)))) / (max(var_13, var_14))))));
    #pragma endscop
}
