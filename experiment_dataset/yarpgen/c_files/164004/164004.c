/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_4));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((((max(2097151, 1380849472)) != (!-1))))));
                arr_5 [i_0] [i_0] = (min(16, (arr_0 [i_0] [i_0])));
            }
        }
    }
    var_16 = -1892752768;

    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_17 += (arr_6 [i_2 + 2]);
        var_18 = (max(var_18, 8852310160284087112));
    }
    #pragma endscop
}
