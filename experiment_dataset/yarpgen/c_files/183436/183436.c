/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((1425438776 >= ((((!(((1717010878 ? 65534 : (-9223372036854775807 - 1))))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (min(var_14, ((((arr_2 [i_0]) ? 1110052768 : (((-1110052792 + 11276) ? ((201 ? (-32767 - 1) : (arr_0 [i_0]))) : 201)))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_15 &= (267911168 ? 77 : 131071);
                    var_16 += (((((arr_8 [i_0] [i_0] [i_2] [i_3]) + 2147483647)) >> 0));
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_17 &= (!21679);
                    var_18 -= 0;
                }
                var_19 *= (224 / 62036);
            }
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                var_20 = (min(var_20, (4294967295 | 1663310243)));
                var_21 = (max(var_21, (62827 <= 4138320672)));

                for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    var_22 *= 1;
                    var_23 = (min(var_23, ((((arr_15 [i_6] [i_5] [i_5] [i_5 - 2]) + 2985965611)))));
                }
                for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_24 = (min(var_24, ((229 ? 670247125 : 24))));
                        var_25 = (max(var_25, ((((((1 ? 2719674680 : 255))) <= (-9223372036854775807 - 1))))));
                    }
                    var_26 |= ((-68 ? 0 : 3266700017));
                    var_27 = (min(var_27, (((!16870) ? 1 : ((177 ? 0 : 1))))));
                }
            }
            var_28 -= (64 || 59);
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_29 = (min(var_29, ((((((117 * (arr_1 [i_9])))) ? 0 : 2623988263)))));
            var_30 = (max(var_30, (((1 ? (arr_0 [i_0]) : 1)))));
            var_31 = (min(var_31, (((4294967295 ? 65535 : (arr_9 [15] [i_0]))))));
        }
    }
    #pragma endscop
}
