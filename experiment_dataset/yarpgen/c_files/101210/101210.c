/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 -= (((!(arr_0 [i_0]))));
        var_20 = (min(var_20, (max((arr_0 [i_0]), (arr_1 [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                var_21 = (min(var_21, 6264413490842050662));
                var_22 = (!-53);
            }
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                var_23 -= (~var_16);
                var_24 = (arr_5 [i_3 + 1]);
                arr_13 [i_1] [1] = 83;
                var_25 = (min(var_25, var_10));
                var_26 = -3297653909899044529;
            }
            var_27 = (arr_9 [i_1]);
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_28 = (max((((+(max((arr_9 [i_0]), 244))))), (~var_11)));
            var_29 &= (min((((max(var_2, var_3)))), 25520));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        var_30 ^= max(((max(244, 216))), var_12);
                        var_31 ^= 14475720573638769171;

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_32 = ((!(~var_12)));
                            var_33 = ((max(0, 32767)));
                        }
                        for (int i_8 = 2; i_8 < 7;i_8 += 1)
                        {
                            var_34 = (max(((max((arr_20 [i_5 - 2] [i_5 + 1] [i_5 - 1] [i_5 - 1]), 7304))), (arr_20 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 1])));
                            var_35 = (min(var_35, (~var_12)));
                            arr_26 [i_4] [i_4] = (((max((min(1, 27725), 1)))));
                            arr_27 [i_8 + 3] [i_4] [i_5] [i_4] [i_4] [9] = ((-(~3971023500070782445)));
                        }
                    }
                }
            }
            var_36 = (!1482934163);
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        arr_30 [i_9] = (((max(var_17, (arr_19 [8] [2] [2] [i_9])))));
        /* LoopNest 2 */
        for (int i_10 = 4; i_10 < 9;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {
                    var_37 = (min(var_37, (!25519)));
                    arr_36 [i_9] [1] [i_10 - 3] [i_10] &= (~((max(var_5, var_0))));
                }
            }
        }
        arr_37 [i_9] = (max(-8274530616032058295, ((min(13317, 14475720573638769187)))));
    }
    #pragma endscop
}
