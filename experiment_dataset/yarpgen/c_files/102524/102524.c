/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_1 | 40150) ? 107 : 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 += ((234 ? ((min((arr_5 [i_0] [i_1] [i_1]), (21 == 34)))) : (-19807 == -1)));
                arr_6 [14] = ((arr_0 [i_0]) == ((((arr_0 [i_1]) && var_7))));
                var_12 = (arr_3 [i_0]);
            }
        }
    }
    #pragma endscop
}
