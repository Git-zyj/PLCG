/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(((-(var_3 == 6618477721978790106))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0 + 2] = (max(((((((arr_2 [i_1]) >> (var_4 + 205))) < (!var_10)))), (min((arr_2 [i_1]), 0))));
                arr_5 [i_0] [i_0] [i_0] = (((arr_2 [i_0]) ? (min((-32767 - 1), ((var_9 ? 242 : (arr_3 [i_0]))))) : var_9));
                var_13 = (min(var_4, ((max((arr_0 [i_0 + 3] [i_0 - 1]), (arr_0 [i_0 + 1] [i_0 + 3]))))));
            }
        }
    }
    var_14 = (max(var_14, var_4));
    #pragma endscop
}
