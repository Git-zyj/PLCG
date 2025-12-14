/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_3] = (arr_8 [i_3] [1] [1] [1] [1]);

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            arr_17 [i_4] [i_3] = (~1);
                            arr_18 [i_0] [15] [i_4] [i_3] [i_4] = 1;
                        }
                        arr_19 [9] = (arr_16 [i_1] [i_1] [i_2] [i_1] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_13 = (~7345221470146863749);

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_27 [i_0] [i_2] [i_0] [i_5] [i_2] = 356654417895685074;
                            arr_28 [i_0] [14] [i_0] [14] [i_0] [i_0] [9] = (arr_4 [i_6] [i_1]);
                        }
                    }
                    var_14 = (-((-(arr_13 [i_0] [i_0] [i_0] [i_0]))));
                }
            }
        }
        var_15 &= ((((((-(arr_8 [8] [i_0] [i_0] [i_0] [i_0])))) ? ((1 ? 6169584517445266282 : -7345221470146863749)) : (-947433099157279615 - 1735420792246174133))));

        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        {
                            arr_40 [i_0] [i_7] [i_8] [i_9] [i_10] [i_7] = (arr_15 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                            var_16 -= (arr_29 [i_0] [i_0] [i_9]);
                        }
                    }
                }
            }
            arr_41 [i_0] [i_7] = (arr_26 [i_7] [i_7] [12] [i_7]);
            arr_42 [i_0] [i_0] [i_0] = (arr_35 [i_0] [i_0] [i_0] [i_7] [i_7] [i_7]);
        }
        for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
        {
            var_17 += ((+(((arr_16 [i_0] [i_0] [6] [i_11] [i_11]) ? (arr_16 [i_11] [i_11] [0] [6] [1]) : -768309215233128319))));
            arr_46 [i_11] [i_11] = ((!(arr_36 [i_0] [1] [i_11] [i_11] [i_11])));
            arr_47 [i_0] [i_11] [i_11] = arr_5 [i_11] [12] [i_0] [1];
        }
        for (int i_12 = 1; i_12 < 17;i_12 += 1)
        {
            arr_52 [i_12] = min((((arr_4 [i_12 + 1] [i_12 + 1]) ? 1 : ((1 ? -3855423919638624258 : 6247097903671213584)))), (1 != var_5));
            arr_53 [i_12] = (!var_5);
        }
        arr_54 [i_0] = (max((!1), var_11));
    }
    var_18 = max(561094401027518339, 6734689102911435301);
    #pragma endscop
}
