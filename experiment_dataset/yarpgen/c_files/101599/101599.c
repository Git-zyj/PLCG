/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_11 = 0;
        arr_3 [21] = 0;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_7 [18] [i_1] [13] = -52;
            arr_8 [i_0] [2] = 0;
            var_12 = ((~(~1006632960)));
            var_13 = -36;
            var_14 = 6373;
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [20] [i_3] [0] &= (((~3352276114510689722) / 860265401));
                        var_15 = 13395435561003319271;
                        var_16 = (((-31102 / 32200) << (-1 + 21)));
                    }
                }
            }
            arr_16 [i_0] [i_2] = (-8192 | -90);

            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                var_17 = (min(var_17, (((-1729209216847113561 | (44340 | 0))))));
                arr_19 [i_0] [3] = ((1 - (15550 ^ 0)));
                var_18 += (!4166655350);
            }
            arr_20 [i_2] [i_2] = ((~(~0)));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_19 = ((((4229487702 << (255 - 238))) & 43));
            arr_24 [i_0] [i_6] = (+-3);
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            arr_28 [16] = -8260047991826158982;
            var_20 = 2143262405;
            arr_29 [i_7] = ((-4882028990686994503 > (!22)));
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {

                        for (int i_11 = 4; i_11 < 22;i_11 += 1)
                        {
                            var_21 = (min(var_21, 15));
                            arr_40 [i_9] [i_9] [i_9] [i_10] [i_11] [9] = 0;
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            var_22 = 8260047991826158982;
                            var_23 = 5051308512706232344;
                            var_24 *= (((!-1) == (3692241672 + -510491436459079110)));
                        }
                        for (int i_13 = 1; i_13 < 23;i_13 += 1)
                        {
                            arr_48 [5] [i_10] [23] [i_9] [i_13 - 1] [i_13] [1] = (-2147483647 - 1);
                            var_25 = (!41816);
                        }
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            var_26 = -8485;
                            var_27 = 1;
                            var_28 ^= ((~(~8067)));
                            arr_52 [i_0] [i_0] [i_0 - 2] [i_9] [i_0] [i_0 - 1] = ((!(!1)));
                        }
                        arr_53 [i_0 + 1] [i_9] [i_0 - 2] = 1;
                    }
                }
            }
        }
    }
    var_29 -= (min((min((max(18446744073709551615, 255)), (146 ^ 25))), (!4294967295)));
    #pragma endscop
}
