/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(var_4, (~3857627945112866997));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = -9223372036854775807;
        var_19 = (-(~var_0));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2 + 1] = min((~-5785557914526800378), var_2);

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_20 = 114589987593869490;
                        arr_13 [i_3] [i_3] = (--70351564308480);
                        var_21 = (!-114589987593869489);
                        var_22 = min(-var_12, (~-3857627945112867024));
                        var_23 = (max(var_23, (((!((max(114589987593869488, -7205375233921196243))))))));
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        var_24 = -var_12;
                        var_25 = -2353695862306772389;
                        var_26 = (min((arr_14 [i_2] [i_4 + 2] [i_4] [i_4 - 1] [i_4 - 1]), (arr_9 [i_1 - 1] [i_4] [i_4] [i_4 - 1])));
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 23;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = (--114589987593869482);
        var_27 = min((~4181739848859923359), ((~(arr_4 [i_5] [i_5 - 1] [i_5 + 1]))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_28 = (arr_4 [i_7] [i_7] [i_7]);
                    var_29 = ((!(-9223372036854775807 - 1)));
                }
            }
        }
        var_30 = 9223372036854775807;
    }
    for (int i_8 = 1; i_8 < 9;i_8 += 1)
    {
        var_31 = ((~(arr_24 [i_8] [i_8 + 2] [i_8])));
        var_32 = var_6;
        arr_28 [i_8] = (-(max((arr_7 [i_8 + 3]), var_12)));
        arr_29 [i_8] [i_8] = (max(-114589987593869489, (arr_1 [i_8 + 1])));
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 21;i_9 += 1)
    {
        var_33 -= (!var_14);
        var_34 += 114589987593869491;
        var_35 ^= (~var_9);
    }
    #pragma endscop
}
