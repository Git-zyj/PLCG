/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = 1;
    var_15 = var_2;

    for (int i_0 = 2; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((-(!1770295794206224184)));
        arr_5 [i_0 - 2] = ((~(!var_11)));
        arr_6 [i_0] = (((~var_5) ? (~var_9) : (~var_10)));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_16 = (min(var_16, (((!(!var_6))))));
            arr_11 [i_0] [i_0] [i_1] = ((16676448279503327428 ? 16676448279503327430 : -1269957636));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_14 [i_2] [i_2] [11] = ((~(~var_3)));
            var_17 = (!var_0);

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_18 *= -1770295794206224180;
                arr_18 [i_3] [i_3] = ((((min(1269957613, var_7))) & (~var_6)));
                var_19 = (max(var_19, ((((var_2 & var_7) ? (max(1770295794206224179, 60712)) : (((~(~var_12)))))))));
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                arr_21 [14] [i_0] [i_0] = (max((!109), (max(var_12, var_12))));
                arr_22 [i_4] = var_5;
                arr_23 [i_0] [i_0] [i_4] = (((((!var_8) > var_9)) ? var_9 : var_8));
                var_20 = min(-var_7, (18066724816879325114 - var_9));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_21 = (~8701845947323565731);
                            arr_29 [i_0] [i_2] [i_2] [i_0] [i_2] [i_6] [i_2] = (((max(var_1, var_6))) && -142593337129109138);
                            var_22 = min(var_3, (((~(var_6 != var_2)))));
                        }
                    }
                }
            }
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                arr_34 [0] [i_2] = -var_10;
                arr_35 [i_0 + 2] [i_2] [i_7] = var_3;
            }
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 15;i_10 += 1)
                {
                    {
                        var_23 *= (max(0, 16676448279503327436));
                        var_24 ^= (min(((215 ? var_0 : var_11)), var_2));
                    }
                }
            }
            arr_43 [i_0] &= min(((((9705806821223724136 ? var_11 : var_2)) / 3856032845568839501)), (((14657301859265403334 ? (!var_12) : ((max(var_9, var_5)))))));
        }
        var_25 = var_12;
    }
    for (int i_11 = 2; i_11 < 12;i_11 += 1) /* same iter space */
    {
        var_26 = var_9;
        var_27 = (min(var_27, ((max(3789442214444148257, (--1780))))));
    }
    /* vectorizable */
    for (int i_12 = 2; i_12 < 12;i_12 += 1) /* same iter space */
    {
        arr_51 [i_12] [i_12] = -1770295794206224171;
        var_28 ^= var_9;

        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            var_29 *= (var_8 != var_8);
            arr_56 [14] [i_13] [i_13] |= (((!var_10) || var_0));
        }
    }
    #pragma endscop
}
