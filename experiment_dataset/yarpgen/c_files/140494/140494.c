/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((var_6 ? -22 : 0))) ? var_0 : 12558486955435143719))) ? (min((248 - 3831), ((578978780 ? 1 : -578978774)))) : ((~((-1 ? 0 : var_3))))));
    var_16 -= -82;
    var_17 = ((~((-15 ? (~12558486955435143709) : (~28)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 |= (127 ^ -70368744177663);

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_1] [6] = (arr_3 [i_0] [i_1]);
            var_19 = ((-((~(arr_0 [i_0])))));
            var_20 = -578978780;
        }
        for (int i_2 = 1; i_2 < 7;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_0] [i_2] = (max((((((2 ? var_1 : 13808))) ? 0 : ((29 ? (arr_5 [i_0] [i_2]) : 17480)))), ((-(!29)))));
            var_21 = 6;
            arr_11 [i_0] [i_0] [i_0] |= var_4;
        }
        for (int i_3 = 1; i_3 < 7;i_3 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_22 = ((44 ? (((!(arr_14 [i_5] [i_4] [i_3 + 1])))) : 1));
                    var_23 |= (~2736813978);
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    arr_23 [i_4] = -578978781;
                    var_24 = -1;
                    var_25 = var_11;
                }
                var_26 = arr_17 [i_3 + 1] [8] [i_3 + 1] [5];
            }
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_30 [i_9] [i_0] [i_7] [i_3] [i_0] = var_4;
                            var_27 = 253;
                            arr_31 [9] [i_8] [i_7] [i_3 + 3] = -578978778;
                        }
                    }
                }
                var_28 -= ((!(((4468 / (38670 | 6573096273645769229))))));
                var_29 *= (((15531408177685242002 ? 45330 : 34571)));
            }
            arr_32 [i_0] [i_3] = 53144;
        }
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        arr_36 [i_10] = ((((min(2915335896024309614, (arr_33 [i_10])))) ? ((((((arr_33 [17]) ? var_10 : (arr_33 [i_10])))) ? (~247) : 70368744177667)) : 27662));
        var_30 = (((57514 ? 8706738788996734228 : 8621)));
        var_31 = 1543765184;
    }
    #pragma endscop
}
