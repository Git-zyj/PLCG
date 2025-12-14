/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = 98;
                    var_19 = (max(var_19, (-9223372036854775807 - 1)));
                }
            }
        }
    }
    var_20 = 1;
    var_21 = (min((min(0, -9223372036854775791)), ((min(132, (min(1, 0)))))));

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_11 [i_3] = (max(101, 49833));
        var_22 = (min(-1, 0));
        arr_12 [i_3] [i_3] = (min(((max((max(4194303, 9223372036854775791)), 4290772972))), (min(((max(-45, 1))), (min(16727602551286909432, 1))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_15 [i_4] = (min((max((min(49824, 281474909601792)), (max(-1105998809430173801, 18446462598799949815)))), ((max((min(255, 4290772993)), 61677)))));
        arr_16 [i_4] [i_4] = (min(160, 9223372036854775794));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_23 ^= 1685906813742571735;
                    var_24 *= (-9223372036854775807 - 1);
                }
            }
        }
        arr_23 [1] &= 19;
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_25 = (min((min(15711, 9)), 21));
        var_26 = (max(var_26, (max((max((min(-9223372036854775791, 45935)), 114)), ((max(((max(237, 126))), 4194303)))))));
    }
    #pragma endscop
}
