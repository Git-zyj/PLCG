/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = (((~var_3) ? ((((!((((-7542125967894645047 + 9223372036854775807) >> (var_3 - 27573)))))))) : (max((min(var_15, (-9223372036854775807 - 1))), 5454120640726450335))));
                    arr_10 [i_0] [i_2] = ((~(var_10 < 1)));
                }
            }
        }
    }
    var_17 = var_13;
    var_18 = ((!(((1 ? 30 : 1)))));
    var_19 = (var_7 > (20525 | var_11));
    #pragma endscop
}
