/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_3 ? ((var_8 ? var_8 : var_4)) : var_11))) ? var_0 : ((var_11 ? var_3 : 157))));
    var_19 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = ((-((-16837067067167841732 ? var_3 : var_5))));
                                var_21 ^= ((var_15 ? ((((var_7 ? var_1 : -750718799)) & var_1)) : var_13));
                            }
                        }
                    }
                    var_22 = (!(((var_7 ? var_3 : var_12))));
                    var_23 = 1;
                    arr_11 [i_0] [i_1] [i_2] = 16837067067167841728;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_24 = ((13 ? -750718810 : 4137604742675140934));
        arr_16 [i_5] = (min((~-157839124), 750718786));
        var_25 = var_17;

        /* vectorizable */
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            arr_21 [i_5] [13] = var_2;
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_26 = (78 ? var_7 : var_0);
                            var_27 = (min(var_27, var_6));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            arr_33 [i_5] [i_5] [i_10 - 1] = ((var_4 ? 19 : 232));
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 13;i_13 += 1)
                    {
                        {
                            var_28 = (((((66 ? var_6 : 9))) ? -157839116 : 11));
                            var_29 = var_14;
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
    {
        var_30 = var_16;
        var_31 = (((((!14) ? var_0 : (max(var_12, var_13)))) + ((((var_4 ? var_4 : -27089))))));
        var_32 = (((((108 ? 1 : (min(var_15, var_3))))) ? var_11 : var_12));
    }
    for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
    {
        var_33 = var_12;
        var_34 = max(var_5, 157839098);
    }
    var_35 = ((-(((((-10 ? -126 : 0))) ? var_16 : (((35380 ? 27204 : var_0)))))));
    #pragma endscop
}
