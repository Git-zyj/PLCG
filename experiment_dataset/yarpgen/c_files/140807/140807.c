/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            var_12 = (arr_6 [i_0]);
            var_13 += var_6;
            arr_8 [i_0] [i_0] [i_0] = ((!((max(-867712219, 62)))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_14 = (min(var_14, (-62 + 4247154301773260683)));
            arr_12 [22] [i_2] [i_2] |= var_10;
            arr_13 [i_0] = (8887893238972982343 + var_7);
        }
        var_15 = (min(-18446744073709551615, (min((var_10 & 18446744073709551598), 4294967272))));
    }

    /* vectorizable */
    for (int i_3 = 4; i_3 < 22;i_3 += 1)
    {
        var_16 = 1712704692520462005;

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 23;i_6 += 1)
                {
                    {
                        var_17 = var_4;

                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            var_18 *= ((var_5 ? 255 : (arr_14 [i_6 - 3] [i_7])));
                            var_19 = -22;
                        }
                    }
                }
            }
            var_20 = (0 ? 18446744073709551601 : 11307558441746038712);

            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_21 = (min(var_21, 11307558441746038712));
                var_22 = var_10;
            }
            var_23 = -4247154301773260662;
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_24 &= (~var_7);

            for (int i_10 = 2; i_10 < 22;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    var_25 = (min(var_25, (arr_29 [i_3 - 2] [i_3 - 2] [i_10 - 2])));
                    arr_36 [i_3] = (arr_23 [i_10 - 2]);
                    var_26 = (max(var_26, ((((arr_30 [i_3 - 1]) - 4247154301773260684)))));
                }
                var_27 = (((~var_0) & (arr_32 [i_3] [i_3] [i_9] [i_10 - 1])));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        {
                            var_28 *= -128;
                            var_29 += ((!(arr_38 [i_3] [i_9] [i_10] [i_3 - 1])));
                            var_30 = ((var_8 ? (42 || var_5) : (~var_8)));
                        }
                    }
                }
                var_31 = -var_1;
            }
        }
    }
    #pragma endscop
}
