/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 = ((-(((!var_3) ? var_3 : (max(var_8, var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = ((((142 ? 142 : 19)) <= (arr_2 [i_0] [i_1] [i_0])));
                var_17 = (min(((((arr_3 [i_1]) >= (arr_2 [i_0] [i_1] [i_1])))), 236));
            }
        }
    }
    #pragma endscop
}
