/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (min((arr_1 [i_0 - 1] [3]), (min(-360832438, 18446744073709551615))));
                var_16 = ((arr_4 [i_1]) ? (((arr_3 [i_1] [i_1] [i_1]) ? (((arr_5 [i_1] [i_1] [3]) ? -20 : 65524)) : 2)) : (arr_2 [i_1] [i_1]));
            }
        }
    }
    #pragma endscop
}
