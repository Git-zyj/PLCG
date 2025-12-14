/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] [3] = (arr_1 [1]);
                arr_5 [i_0] [i_1] = (min((15123 / 1071387836514756462), (arr_3 [i_1] [i_0])));
                var_19 += (arr_3 [6] [i_1]);
                arr_6 [i_0] [6] |= ((min(var_5, (arr_2 [i_1] [i_0]))));
            }
        }
    }
    #pragma endscop
}
