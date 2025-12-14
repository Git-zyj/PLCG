/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(((min(var_15, 1152921487426977792))), (max(var_15, (max(0, var_7)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = 15651486595194879936;
        arr_3 [i_0] [i_0 - 2] = var_9;
        arr_4 [i_0] = var_1;
        arr_5 [i_0 + 1] [7] = var_1;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_20 = (min(2795257478514671703, var_18));
        arr_9 [i_1] [i_1] = (min(1, 64101));
        var_21 = (max(var_21, var_13));
        var_22 = (max(((min(-72, -76))), 1659509473));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_23 = max(27136, -110);

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_4] [i_4] = (max((max(51735, 2147483644)), 1));
                            var_24 = (min(var_24, var_4));
                            var_25 = (max(5250314546411093594, ((min(683531688, 1)))));
                        }
                    }
                }
                arr_21 [i_1] [i_2] [i_3] = max(((max(((min(var_4, 1435))), (min(var_12, var_1))))), 15651486595194879913);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_26 = (min(-926054802, var_5));
                            var_27 ^= -3675609985141482385;
                        }
                    }
                }
                var_28 = (max(((min(1, var_9))), (min(var_12, 41))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_29 = (min(var_29, var_9));
                var_30 = 1145230858;
                var_31 = var_17;
            }

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_32 = (max(2635457822, (max(var_2, 1453424877856379987))));

                /* vectorizable */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    var_33 = var_8;
                    var_34 = 1;
                }
            }
        }
    }
    var_35 = (max(var_35, var_3));

    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_36 = var_3;
        var_37 = min(var_6, (max(var_18, var_6)));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                {
                    var_38 = var_1;
                    arr_40 [1] [i_13] [i_12] [i_11] = (max(var_13, (min((min(var_0, 1)), 3745))));
                    var_39 &= (max(-2147483644, 104));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        var_40 = 145;
        var_41 = 1;
        var_42 -= var_15;
        var_43 = (min(var_43, 4294967295));
    }
    var_44 = max((min((max(55231, 6557196117480693268)), var_15)), var_6);
    #pragma endscop
}
