/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = ((~(!57303)));
                arr_8 [0] [i_1] [i_1] &= var_10;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = var_5;
        arr_13 [i_2] = ((4023 >> ((((var_8 ? var_5 : var_8)) - 6727260202105410838))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 21;i_5 += 1)
            {
                {
                    var_12 = ((((var_9 ? var_3 : 57303))));

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_13 -= (((~5708485365420569981) ? (((!(((-4665169357040950248 ? var_2 : var_2)))))) : var_2));
                        var_14 = (max(var_14, (min(1150669704793161728, -1140674438740259394))));
                        var_15 &= ((((min(var_5, var_0))) ? (((~(!-2208435385998556527)))) : (min(var_5, -var_0))));
                    }
                    arr_24 [i_3] [i_4] [i_4] [4] = var_8;
                }
            }
        }
        var_16 += (min((!var_11), ((!((min(var_0, -28432)))))));

        /* vectorizable */
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            var_17 = (max(var_17, var_2));
            var_18 = (~var_11);
            var_19 = (min(var_19, (((1150669704793161728 ? 61535 : -40)))));
        }
        for (int i_8 = 4; i_8 < 23;i_8 += 1)
        {
            var_20 = min((min(((41499 ? -7923774972347803392 : var_11)), (min(-44, -1150669704793161728)))), var_9);

            for (int i_9 = 3; i_9 < 22;i_9 += 1)
            {
                arr_32 [i_9] = (min((min(var_11, var_8)), var_4));
                var_21 *= ((-(min(var_9, (min(965356006072430363, var_11))))));
            }
        }
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            arr_37 [i_3] [i_3] [i_3] = min((~var_5), var_0);
            var_22 ^= (--57290);
            var_23 = (min(var_23, 9223372036854775807));
            arr_38 [13] [i_10 - 1] [i_10] = (var_9 < 16);
            var_24 = (min(-var_2, (!var_11)));
        }
    }
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        var_25 = ((!(((31 + (~39))))));
        var_26 = 6471601974764367806;
    }

    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        var_27 = -6471601974764367807;
        arr_43 [i_12] = var_4;
        var_28 = (max(var_28, (((((((((var_8 >> (59505 - 59493)))) ? (((var_6 ? var_8 : var_8))) : var_5))) ? (((((!(-9223372036854775807 - 1)))) >> (((((-9223372036854775807 - 1) - -9223372036854775807)) + 19)))) : var_0)))));
        var_29 = (max(var_29, ((((min((min(var_8, var_7), -25))))))));
    }
    #pragma endscop
}
