/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = ((((min((arr_2 [i_0] [i_1]), var_8))) ? (((min((arr_3 [i_1] [i_1]), var_9)))) : (((arr_2 [i_1] [i_0]) | (arr_2 [i_0] [i_1])))));
                arr_6 [i_1] = (min(23293, ((325668011 ? 2510436339 : (arr_5 [i_0] [i_1] [i_0])))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        var_12 = 68;
        arr_9 [i_2] = -124;
    }
    var_13 = (min(var_7, var_5));
    #pragma endscop
}
