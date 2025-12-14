/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 18446744073709551615;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 18;i_4 += 1)
                            {
                                var_18 = (max((((!((((arr_3 [i_0] [i_4]) ? var_13 : var_2)))))), -31));
                                var_19 = (max(((31 == (-268435456 <= 18446744073709551615))), (!var_0)));
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_20 = (max((((((max(63, 233))) ? -5385 : var_4))), (max(((((arr_8 [14] [5] [i_1] [i_1] [1] [18]) ? 337921038 : var_14))), ((268435455 ? (arr_1 [i_3]) : 8483609926167152994))))));
                                arr_14 [i_0 + 3] [i_3] [1] [i_3] [i_3] [i_2] [8] = 8725724278030336;
                                var_21 = (max(var_21, (((-((min(0, (!var_2)))))))));
                            }
                            for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                            {
                                arr_18 [i_2] [i_1] [3] [i_3] [i_6] [i_6] = ((~(min(29115, ((1 ? -29660 : -23800))))));
                                var_22 *= (min((arr_12 [i_6] [i_6 - 1] [i_6] [15] [i_6 + 2]), (min(3957046251, var_1))));
                                var_23 = (min(var_23, ((max((max(((max(2147483647, 2500072420))), var_1)), ((min(-831, (((arr_9 [i_0 - 2] [16] [i_0 + 3] [i_3]) ? var_10 : -1520527908))))))))));
                            }
                            for (int i_7 = 1; i_7 < 18;i_7 += 1) /* same iter space */
                            {
                                var_24 = 97;
                                var_25 |= (((((4503599627370495 - 337921024) - (max(-26023, var_1)))) * ((min((178 * 3957046257), -23)))));
                            }
                            var_26 = (min(((min((268435456 | var_15), ((min(var_5, var_4)))))), (((((268435438 ? 176 : -31))) ? (min(12055552130675139054, var_12)) : (arr_3 [i_0] [i_1])))));
                        }
                    }
                }
                var_27 = ((((-1363244139 >= ((1437477623 ? 29660 : var_6)))) ? (min(((min(var_14, 31462))), (4294967040 & 8725724278030336))) : ((((((1 ? var_1 : 0)) > (!var_14)))))));
                arr_21 [i_0] [i_0] [i_0] = -831;
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_28 = 1;
        arr_24 [i_8] [1] = (arr_23 [i_8]);
        arr_25 [i_8] = (((arr_23 [i_8]) | (arr_22 [i_8] [24])));
        var_29 = (!255);
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            {
                var_30 = (44 % 31706);
                var_31 -= (max(79, -32757));

                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    var_32 = (max(var_32, 3957046258));
                    var_33 = ((-(((((arr_12 [i_11 + 1] [i_11 + 1] [i_11] [i_11] [i_11]) || var_4)) ? (var_8 && var_16) : (max(3957046261, 34))))));
                    arr_35 [i_11 - 1] [11] [i_9] [i_9] = (((((-((max(var_15, var_6)))))) ? ((((var_8 + 3008725684) - 0))) : (min((94 | var_7), 255))));
                }
            }
        }
    }
    var_34 += -28390;
    #pragma endscop
}
