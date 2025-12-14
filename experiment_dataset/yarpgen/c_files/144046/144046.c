/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!1) ? 7825112003924790007 : ((((min(0, var_7)))))));
    var_14 = (min((((var_3 ? 0 : ((1 ? 74 : 0))))), (-9223372036854775807 - 1)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((((0 ? var_7 : -95))) / (max(-3236199117218614923, var_0))));
        arr_3 [4] = ((!(!33501)));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = 4294967294;
        var_15 = (max(((16606150646932412449 << ((1 >> (var_0 - 102213305482419865))))), ((min(((0 ? 1 : 240)), -var_4)))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_16 = (min((min(((47 << (4304786373380414184 - 4304786373380414163))), ((1 ? var_6 : 0)))), (((!(((4851841326635702450 ? 0 : 0))))))));
                    arr_14 [14] [i_2] [i_4] = ((1 >> (209 - 189)));
                    arr_15 [i_2] [0] [i_4] [i_2] = (((-var_5 < 1) ? ((min(0, (var_0 && var_2)))) : var_4));
                }
            }
        }
        arr_16 [i_2] = (var_0 || -var_12);

        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            var_17 = 9700527624971720561;

            /* vectorizable */
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                var_18 = 3746807403182124516;

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    arr_25 [i_2] [i_2] [i_2] [i_2] = ((1 ? 0 : -1));
                    var_19 = (((47 ^ -51) ? (74 || var_9) : (0 < 1)));
                    arr_26 [i_2] [i_2] = 65532;
                }
            }
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_20 = (max(var_20, ((-((max(-24306, 1)))))));
            arr_29 [i_2] [i_2] [0] = ((((min(-17297, -123))) ? (min(var_4, var_3)) : (var_12 * -24306)));
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_33 [i_2] [1] = -19176;
            var_21 = ((15281 ? (1985546292 <= var_9) : (((~var_9) | ((max(-1985546313, 2057247754)))))));
            arr_34 [i_2] = -1985546293;
            var_22 -= var_4;
            arr_35 [10] [i_2] = ((-(((((min(-32517, var_2))) < 29272)))));
        }
        arr_36 [i_2] = var_11;
    }
    var_23 = (max(-123, (max(65532, var_10))));
    #pragma endscop
}
