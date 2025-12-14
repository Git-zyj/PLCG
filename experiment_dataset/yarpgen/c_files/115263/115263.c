/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (16963457040760575367 || 65533);

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_10 += ((max(0, 16963457040760575367)));
            var_11 = -3203041305;
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] = (((-8 / 9223372036854775803) >= ((16963457040760575347 + (0 + -32751)))));
            arr_10 [1] [1] [i_2] = -57;
            arr_11 [i_0] [i_2] [14] &= 97;
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_12 = (0 >= -1);
            var_13 = ((~((min(0, 12624)))));

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                arr_18 [i_0] [10] = (-27 - -70);
                var_14 += (min(1, 1));
            }
            arr_19 [i_3] = (min((1 >= 6713416034676131909), (103 | 16963457040760575347)));
        }
        var_15 *= (((max(10, 124)) ^ (max(4104011976, (-9223372036854775807 - 1)))));
        arr_20 [i_0] = max(1967658095, (max(28790, (min(1, 190955330)))));
    }
    var_16 = (min((((min(1, 1497087531)))), 16963457040760575350));
    #pragma endscop
}
