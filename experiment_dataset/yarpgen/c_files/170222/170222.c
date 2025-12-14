/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 24;
        var_20 ^= arr_1 [i_0];

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_21 = (((max(var_6, (arr_2 [i_0] [i_0])))) ? 65 : 17726864613170090802);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_11 [12] [i_0] [i_2] [i_3] [i_2] [i_1] = ((((((arr_1 [i_0]) / 14573085589929855016))) ? var_1 : var_13));
                        var_22 -= (var_11 ? (((-103 ? (!17726864613170090825) : var_18))) : (min(((max(112, (arr_1 [i_0])))), 14573085589929855016)));
                        var_23 = (max(var_23, (((min(4294967272, -113))))));
                        arr_12 [i_2] [i_0] = 14;
                        var_24 = (17726864613170090804 / 1);
                    }
                }
            }
            arr_13 [i_0] [i_0] [i_0] = (arr_9 [i_0] [i_1] [i_0] [i_0]);
        }

        /* vectorizable */
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 17;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 18;i_6 += 1)
                {
                    {
                        var_25 = var_18;
                        arr_23 [i_0] [i_4] = ((var_5 ? var_3 : 51192));
                        arr_24 [i_0] [i_4 - 1] [i_0] = (((arr_3 [i_4 - 1]) ? 4294967287 : -11466));
                        arr_25 [i_0] [i_5 + 1] [i_0] [i_0] = -11467;
                    }
                }
            }
            arr_26 [i_0] = ((var_15 ? 4294967282 : -55));
        }
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        var_26 &= (min((~7963389962447161296), (((max((arr_27 [i_7]), var_2))))));
        arr_29 [i_7] = (max((((((var_5 ? var_2 : 719879460539460811)) < -51))), var_11));
        arr_30 [i_7] = 1;
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        var_27 = (min(var_27, ((((arr_3 [i_8]) ? (((((arr_15 [i_8]) >= 65535)))) : ((11666853884962650601 & (((var_19 ? var_1 : var_17))))))))));
        arr_34 [i_8] |= ((138 ? ((((max(131068, -876070088718031258))) ? ((var_10 ? 18446744073709551615 : (arr_22 [i_8] [i_8] [i_8] [i_8]))) : (121 / 24))) : var_9));
    }
    var_28 = ((95 ? -41375 : var_15));
    var_29 = ((max(112, ((4294967272 ? var_8 : var_1)))));
    var_30 = ((((var_4 + 2147483647) >> ((((var_12 ? var_2 : var_17)) - 1442)))));
    #pragma endscop
}
