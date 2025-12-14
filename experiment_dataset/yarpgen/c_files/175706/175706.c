/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = min((arr_0 [i_0]), ((var_14 ? var_10 : (-9223372036854775807 - 1))));
        arr_3 [6] |= (4765656319688380392 ? (max(var_6, 7795054689699900823)) : (((max(9223372036854775793, var_11)) << (((((((-9223372036854775807 - 1) - -9223372036854775774)) + 90)) - 56)))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_1] = max((((arr_9 [i_0] [i_1] [i_1]) ? (arr_10 [i_0] [i_1] [i_1 - 3]) : (max((arr_10 [i_1] [i_1] [i_0]), -6058747301075389346)))), (max((arr_5 [i_1] [i_1]), 8098273198590929759)));
                        arr_13 [i_0] [i_0] [i_1] [i_3] [i_3] [i_1] = max(((((max((arr_11 [i_0] [i_1] [i_1] [i_3]), (arr_0 [i_3])))) ? (-9223372036854775807 - 1) : (arr_5 [i_1] [i_3]))), (min(-7795054689699900811, (arr_1 [i_3] [i_1 - 3]))));
                    }
                }
            }
        }
    }
    var_16 = 7795054689699900823;
    var_17 = -7795054689699900835;
    #pragma endscop
}
