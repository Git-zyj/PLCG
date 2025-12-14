/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((!867878544) ? (((-867878542 ? 44 : 65535))) : ((-20 ? 9223372036854775807 : 867878544))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_17 = ((521224587988994415 ? -867878544 : -20));
                        arr_11 [i_0] [i_0] [i_0] [i_1] = ((521224587988994414 ? 1073676288 : -2823150172033333780));
                    }
                }
            }
        }
        var_18 = ((65 ? 8061 : 867878550));
        var_19 = 54360;
        var_20 = 12737907326872960407;
    }
    var_21 = var_10;

    for (int i_4 = 3; i_4 < 9;i_4 += 1)
    {
        arr_16 [i_4] [i_4 - 2] = (((((12288 ? 3034940392153863703 : 63))) ? (((((1 ? -93 : 28000))) ? 32 : ((-21170 ? 1 : 7681954754510125987)))) : -26));
        var_22 = 1;
    }
    var_23 = 1;
    var_24 = (((((12717078434352436296 ? ((65 ? -17 : 247375426007627)) : (((618650500 ? 1 : 1)))))) ? var_1 : ((71987225293750272 ? (!-30) : ((12 ? 1 : -53))))));
    #pragma endscop
}
