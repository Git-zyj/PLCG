/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1 - 1] [7] [i_0] &= var_5;
                    arr_9 [1] [i_1 - 1] [i_0] &= -7365466318367426794;
                    var_10 = -27856;
                    arr_10 [i_0] [i_1 + 2] [i_2] = (min(121, (arr_5 [i_0])));
                }
            }
        }
    }
    var_11 = var_7;
    var_12 = ((!(((((((-15 + 2147483647) << (((-354262358298812897 + 354262358298812916) - 19))))) ? (((min(109, var_8)))) : var_9)))));
    var_13 = min(((max(var_2, 123))), 9128210493317629366);
    var_14 = ((~var_1) ? (!1) : (-9223372036854775807 - 1));
    #pragma endscop
}
