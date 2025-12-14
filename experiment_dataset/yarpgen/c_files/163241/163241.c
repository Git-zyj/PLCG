/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_8));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((((~((min((arr_2 [i_1]), 46300)))))) ? ((max((arr_2 [i_0 - 1]), (arr_3 [i_1])))) : ((var_5 ? ((min((arr_3 [i_1]), 19213))) : (var_2 > 217)))));
                arr_5 [21] = ((((min((217 <= 54069), (min(16, 65535))))) ? (arr_0 [21] [21]) : ((((arr_2 [14]) ? (46300 || 251) : (arr_1 [i_0 - 3]))))));
                arr_6 [i_0 + 2] = ((-((41 ? (arr_1 [i_0 - 1]) : var_12))));
                var_17 = (arr_2 [i_1]);
            }
        }
    }
    #pragma endscop
}
