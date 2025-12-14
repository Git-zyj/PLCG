/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_13 += ((((1023 ? 0 : (-9223372036854775807 - 1))) > -14622));
            var_14 = ((!(!-1024)));
            var_15 &= ((+(max((((var_7 + 2147483647) << (81 - 81))), 0))));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            var_16 -= 1;
            var_17 = (((arr_2 [i_2 + 1] [i_2 + 1]) ? 8190 : 81));
            arr_7 [i_0] = ((var_5 + (var_11 * 20575)));
        }

        /* vectorizable */
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            var_18 *= (4492 + var_8);

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_19 = 0;
                var_20 = 81;
            }
            var_21 = (((((((arr_2 [i_0] [i_3 + 2]) > 1309938352)))) > 1918042374310076810));
        }
        var_22 = -4493;
        arr_12 [i_0] [i_0] = ((var_11 <= (max(1, var_6))));
    }
    var_23 = (!-2048013082);

    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_24 = 55381;
        var_25 = ((124 << (!var_5)));
        var_26 = (!29933);
        var_27 = (~4294967288);
        arr_17 [i_5] = ((4294967281 % (arr_1 [i_5])));
    }
    var_28 = 16528701699399474812;
    var_29 = 1754709119;
    #pragma endscop
}
