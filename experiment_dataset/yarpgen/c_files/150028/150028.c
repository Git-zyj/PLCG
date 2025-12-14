/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 = (min(var_9, (!0)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 = 12460161932685576740;
                    var_22 = (~(((21 || 0) ? var_15 : (((-2 + 9223372036854775807) >> (((arr_5 [i_1] [15]) - 8706311994431022394)))))));
                    var_23 = (arr_3 [i_0] [i_0] [i_1]);
                }
            }
        }
    }
    var_24 = var_7;
    var_25 = (var_7 & 0);
    #pragma endscop
}
