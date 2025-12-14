/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0 - 3] [i_1] [i_0] = (((((0 ? 112 : 7)) ? 1 : -31915)));
                arr_5 [i_1] = (((~var_10) >= (((5681612722993852509 >= (((364029656 ? 38 : -8))))))));
                var_11 = (((((!((min((arr_1 [i_0] [i_0]), (arr_2 [i_1] [i_0] [i_0]))))))) >= ((((min(45, -32752))) | ((var_3 ? var_7 : var_5))))));
            }
        }
    }
    var_12 ^= var_0;

    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_13 = (min(var_13, -264241152));
        arr_10 [i_2] [8] = var_3;
    }
    #pragma endscop
}
