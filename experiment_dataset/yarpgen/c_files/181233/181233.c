/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = ((((max((arr_2 [i_0]), (arr_2 [i_0])))) ? ((((arr_2 [i_1]) + (arr_2 [i_0])))) : var_14));
                arr_6 [i_0] [i_1] = var_14;
                arr_7 [i_0] [i_0] = (min((arr_0 [i_0] [i_0]), (((arr_3 [i_1] [i_1] [i_0]) ? (arr_4 [i_0] [i_0] [i_1]) : (arr_0 [i_1] [i_1])))));
                var_16 *= ((1099789474 ? 2172826971 : 1));
            }
        }
    }
    var_17 *= var_8;
    #pragma endscop
}
