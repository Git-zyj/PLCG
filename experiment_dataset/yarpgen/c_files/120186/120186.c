/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((max(3219115080808860223, (((-((498898180 >> (78135096 - 78135095)))))))))));
    var_21 = (((((var_19 << ((((var_7 ? var_17 : var_18)) - 21739))))) ? 18446744073709551615 : (((((min(18446744073709551600, var_18)) >= var_14))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_22 = ((+(((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] = (((1016028136 - 3791834259201960357) - 7));
            arr_6 [i_1] [i_1] = (((~2813101422836837307) ? ((-2813101422836837315 ? 64 : (arr_1 [i_0] [i_0]))) : ((1 ? (arr_1 [7] [i_1]) : (arr_3 [i_0] [i_1])))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_23 = 2813101422836837307;
                        var_24 = (((arr_8 [i_1 - 2] [i_2]) - (arr_9 [i_2] [5] [i_3])));
                    }
                }
            }
            var_25 -= ((~(!43024)));
        }
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            var_26 = ((11276285307789494155 | (max((((arr_13 [8] [i_4] [i_4]) & (arr_10 [i_0] [i_0] [i_0] [i_0]))), (arr_15 [i_4])))));
            var_27 = ((((((min((arr_14 [i_0] [i_0] [11]), 2089236561)) - 1))) ? ((((((arr_14 [i_0] [12] [i_4]) >= var_9)) ? (arr_9 [i_0] [i_4 + 2] [10]) : (max(var_5, (arr_10 [2] [i_0] [i_0] [i_0])))))) : (((!-2089236561) ? (min(2089236560, (arr_0 [i_4 - 1] [14]))) : (arr_10 [i_0] [i_0] [i_0] [i_0])))));
            var_28 = arr_4 [i_4] [1] [1];
            arr_16 [i_0] [i_4 + 1] [i_0] = (max(((((arr_9 [i_4] [i_4 - 1] [i_4]) | (arr_9 [i_0] [i_4 - 1] [i_0])))), (max(-1441080211619599302, (arr_9 [i_4] [i_4 + 1] [i_4])))));
        }
        var_29 = (arr_15 [i_0]);
        arr_17 [0] = (!1068836319348988571);
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            {
                var_30 *= 2089236560;
                var_31 = 0;
            }
        }
    }
    #pragma endscop
}
