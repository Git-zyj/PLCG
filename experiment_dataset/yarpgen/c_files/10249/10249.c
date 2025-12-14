/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    var_19 = (~1603725414608581221);
    var_20 = (~905784064555776582);
    var_21 = ((~(max(117, (max(139, 1603725414608581221))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((0 ? var_12 : 1));
        var_22 = (~139);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 + 1] [i_1] = (~1);

        for (int i_2 = 3; i_2 < 11;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_23 = 49367;
                arr_12 [i_3] [3] [i_3] = (((~var_5) << ((((11 ? 10338 : 1)) - 10338))));
                var_24 = (((~-42) ? (~var_16) : var_14));
                var_25 -= 1;
            }
            var_26 = (((((1603725414608581217 ? var_3 : 2760150472432732029))) ? ((-8807718204278332521 ? 60 : -1)) : 28709));
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        var_27 += (var_8 <= -8807718204278332521);
                        var_28 = (1 ? var_14 : var_11);
                        arr_19 [i_5] [i_4] [i_2] [i_1] = ((4075105238 ? -7882848992078404795 : -4221039230193918825));
                    }
                }
            }
        }
        for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_29 = (((~508179547) >> ((((-7699929333253316049 ? 7491427816313773282 : 2821406586271374345)) - 7491427816313773270))));
            arr_22 [i_1] [i_6] = ((4294967295 ? -3 : 12));
            var_30 = (max(var_30, ((((5521570845756081180 | 55198) ? 7282 : (((6741418074912858362 ? 1 : 26062))))))));
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_31 = ((~(~54321)));
                            var_32 += (~0);
                            arr_32 [i_1] [i_6] [i_7] [i_8] [i_9] = 13999;
                            var_33 = (0 ^ 65535);
                        }
                        arr_33 [i_6] [i_6] [i_7] [i_8] [i_7] [i_7] = 16314;
                    }
                }
            }
        }
        for (int i_10 = 3; i_10 < 11;i_10 += 1) /* same iter space */
        {
            arr_36 [11] = ((1 ? 36223 : 0));
            var_34 |= (((-4 ? 1265449314 : 55169)));
            var_35 = ((14087085427198969393 ? 14087085427198969393 : 241));
        }
        arr_37 [i_1] = (((12 ? 1 : -96)));
    }
    #pragma endscop
}
