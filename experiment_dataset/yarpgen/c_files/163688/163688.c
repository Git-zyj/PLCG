/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 + 1] [3] = var_15;
                    arr_8 [i_2] [i_0] [i_0] = -48;
                    arr_9 [i_0] [i_0] [i_0] = var_2;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                {
                    arr_14 [i_4] [i_3] [i_3] [i_3] = var_1;
                    var_17 ^= var_1;
                    var_18 &= ((0 ? 65535 : 0));
                }
            }
        }
        arr_15 [i_0] = ((((!(((var_9 ? var_4 : var_6))))) ? (min(6066240741238297910, 1)) : var_13));
        var_19 = (min(var_19, (((116 ? (!var_3) : var_6)))));
        var_20 = (max(var_20, (((2445882661 ? var_5 : ((var_7 ? 116 : 1)))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_21 = ((var_14 ? var_5 : var_4));
        arr_18 [i_5] [i_5] = (max(var_9, 0));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_22 = ((max(92, var_14)));
        var_23 = var_2;
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        var_24 = (1 ? (((-93 ? -2 : 5300))) : var_1);
        arr_25 [i_7] = -454004109;
    }
    for (int i_8 = 3; i_8 < 22;i_8 += 1)
    {
        var_25 = (min(((((min(var_15, 255))) ? var_13 : ((max(var_7, 60235))))), ((var_0 ? 2121 : -var_13))));

        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_26 = (min(((var_14 ? var_12 : -6801902044440567779)), var_8));
            var_27 = (min(((~(~var_10))), (((((var_8 ? 4786371644086349436 : 1688298988))) ? var_15 : var_15))));
            arr_33 [i_8] = (max((((!var_11) ? var_7 : (min(128, var_2)))), ((max((25911 & 1), (!35))))));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        arr_42 [i_12] [i_8] [i_8] [i_8] = 121;
                        var_28 += var_11;
                    }
                }
            }
            var_29 |= (min((min(22238, 3037929680)), (max(2348239914, 1))));
            arr_43 [i_8] [i_8] = (((((23632 ? var_6 : var_12))) ? (~var_1) : ((var_15 ? (min(var_12, var_8)) : (min(var_12, 4294967295))))));
            arr_44 [i_8] [i_8] = (min((min(var_5, var_6)), var_12));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 0;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            var_30 = (min((~var_15), (min(((-88 ? 0 : 863540897)), 70))));
                            var_31 = ((0 ? 0 : 17035954738168346698));
                        }
                    }
                }
            }
        }
        for (int i_16 = 3; i_16 < 22;i_16 += 1)
        {
            var_32 = (min(var_32, ((((((8452787940490619647 ? var_9 : 1879048192))) ? var_7 : var_9)))));
            arr_56 [i_8] [4] = (~124);
        }
        var_33 += 0;
    }
    #pragma endscop
}
