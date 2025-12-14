/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -1;
    var_15 = (~var_5);
    var_16 = (min(((min((~var_6), (min(var_6, var_2))))), var_11));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_17 = (min((arr_4 [i_0 + 1] [i_2 + 1]), -1107622600));
                    arr_8 [i_1] [i_0] = (i_0 % 2 == zero) ? (((!(((((min((arr_4 [i_0] [i_2]), 114))) >> (((((arr_1 [i_0]) << (((((arr_3 [i_0] [i_0]) + 1261059626)) - 19)))) - 12282)))))))) : (((!(((((min((arr_4 [i_0] [i_2]), 114))) >> (((((((arr_1 [i_0]) << (((((((((arr_3 [i_0] [i_0]) - 1261059626)) - 19)) + 124538927)) - 6)))) - 12282)) - 805294082))))))));
                }
                var_18 ^= (min((min((((1107622603 << (1107622603 - 1107622603)))), (min(-1107622604, 9223372036854775804)))), ((min((((-1107622572 + 2147483647) >> (1107622593 - 1107622581))), (var_6 || 1107622596))))));
            }
        }
    }
    #pragma endscop
}
