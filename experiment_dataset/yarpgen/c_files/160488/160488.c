/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_20 = max((((23160 < (46 % 5424)))), 1665193450);
        arr_3 [i_0] = (min(268435456, ((min((min(55, 1)), (!2466256641))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (!1195658176);
        arr_8 [i_1] [i_1] &= ((13 ? 288230374004228096 : (0 >= -430764576)));
        var_21 = 247;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    {
                        var_22 = -1805;
                        var_23 = 87;
                        arr_16 [i_4] = (!1562318985);
                    }
                }
            }
        }
    }
    var_24 = 9223372036854775807;
    var_25 = (max(var_25, -var_10));
    #pragma endscop
}
