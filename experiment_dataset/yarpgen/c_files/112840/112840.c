/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            var_15 = (min(117, -30905));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    {
                        var_16 |= (((((((6603 + 1503096897) <= var_14)))) == (((var_3 - var_0) - 127))));
                        var_17 = (((--105) * 0));
                        arr_8 [i_0] = (min(((var_12 ? -30905 : ((-1 ? 1 : 103)))), (((4294967295 && (((17179869183 >> (arr_4 [i_0])))))))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            var_18 |= 1;
                            var_19 = ((((-30905 ? var_8 : (arr_5 [10] [10] [10]))) & (((var_13 ? (arr_7 [i_2]) : 205)))));
                            var_20 = var_11;
                        }
                        var_21 = max(0, 48);
                    }
                }
            }
            var_22 = (max(var_22, ((((((9760773809986449404 * (arr_1 [i_1 + 2]))) & (var_3 < 751974197963891372))) < var_0))));
        }
        for (int i_5 = 2; i_5 < 24;i_5 += 1)
        {
            var_23 = (min(var_23, (!30905)));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_16 [i_6] [i_5] = ((var_4 ? 1920 : 18446744073709551615));
                var_24 = (min(var_24, ((((((arr_6 [1] [i_5] [i_0] [5]) ? (arr_7 [i_6]) : 0)) >= (((var_6 ? (arr_14 [i_6]) : 0))))))));
                var_25 = (4108464103039298114 ^ 0);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_26 *= ((6 ? 1978308310 : 0));
                            var_27 = (min(var_27, ((((arr_15 [i_8 + 4] [i_5 + 1] [i_5 - 1] [i_0 - 2]) == 1)))));
                            var_28 = ((!((!(arr_3 [i_6] [i_6])))));
                            arr_22 [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_6] [i_6] [i_7] [i_0 - 1] = (((((240 ? -1 : -1041842462838152123))) ? -39 : ((-4943163862705043277 ? -15850 : var_2))));
                        }
                    }
                }
            }
        }
        var_29 = (min(var_29, (((-((max((arr_1 [i_0 + 1]), (arr_14 [i_0 + 1])))))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_30 = ((!(arr_2 [i_9] [i_9])));
        var_31 = (((((arr_2 [i_9] [i_9]) < (arr_4 [i_9]))) ? var_9 : (!-124)));
    }
    var_32 = max(32767, -1);
    var_33 = (max(0, 41717));
    #pragma endscop
}
