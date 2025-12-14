/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = ((((min(9609358310765179761, 9223372036854775807))) ? (((max(230, 43)))) : ((25 ? 254 : 670479293))));
        var_16 -= ((min(512, 119)));
        var_17 += 512;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            var_18 = 65535;

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_19 *= (((-(max(2740375445, 1116892707587883008)))));
                var_20 = ((!(-9223372036854775807 - 1)));
            }
            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                arr_13 [i_1] [i_2] = (min(1, 130872100));
                arr_14 [i_4] [i_1] [i_1] [i_1] = 158;

                /* vectorizable */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    arr_17 [i_1] [i_5] = (!1476433223);
                    var_21 = (!144115188075724800);
                    var_22 = (min(var_22, (!225)));
                    arr_18 [i_1] [i_1] [13] [i_1] = 8357001865854154870;
                    arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] = ((254 ? 1 : 18302628885633826799));
                }
            }
        }
        arr_20 [i_1] [i_1] = 16777216;
        var_23 = 3363249678;
        var_24 = ((63 ? (((866643603 ? 1152921504606846960 : 26))) : 56));
    }
    var_25 *= var_3;
    var_26 = (max(var_26, 3434373632229919846));
    #pragma endscop
}
