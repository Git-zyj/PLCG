/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (max(var_15, -724151922));
        arr_2 [i_0] = ((min(-724151917, (arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((((!(arr_1 [i_0]))) ? (arr_1 [i_0]) : var_10));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_16 = (arr_4 [i_1]);
            arr_6 [i_0] [i_0] [i_1] &= (arr_4 [i_1]);
            var_17 = ((65 * (((0 % 724151922) ? (((1799252643 ? var_3 : 3832254391))) : -1747528414))));
            var_18 = (((((arr_4 [i_0]) > var_11)) ? 856458249 : (arr_4 [i_0])));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_9 [i_0] [i_0] [i_0] = ((-((-724151897 ? (arr_1 [i_0]) : (arr_7 [i_0])))));
            var_19 = (-1 ? (!724151917) : ((999282972 ? 65531 : ((11 >> (15978081657766544802 - 15978081657766544789))))));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            var_20 = var_1;
            var_21 = (max(var_21, (((var_12 ? (arr_10 [i_3 + 3] [i_0] [i_0]) : (arr_10 [i_3 - 2] [i_3 + 1] [i_0]))))));
            var_22 = (((arr_10 [i_3 - 1] [i_3 - 2] [i_3 + 1]) != (arr_10 [i_3 - 1] [i_3 - 2] [i_3 + 1])));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_17 [i_5] [i_4 - 1] [i_3 + 2] [i_0] = (arr_5 [i_3 + 1]);
                        var_23 *= (((arr_5 [i_3 - 2]) & (arr_5 [i_3 - 2])));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        arr_28 [i_9] [i_6] [i_6] [i_6] = var_5;
                        var_24 = 724151922;
                    }
                    arr_29 [i_8] [i_6] [i_6] [i_6] = ((max((arr_26 [i_8] [i_8] [i_8] [i_8 + 4] [i_8 - 1] [i_8 + 1]), var_8)) ^ ((((arr_25 [i_8 + 3]) ? (arr_25 [i_8 - 1]) : -724151944))));
                    arr_30 [i_6] = var_4;
                    arr_31 [i_7] [i_7] [i_7] [i_7] = ((((max(((-1909778918 ? 999282972 : -1909778925)), (var_6 < -1357687293)))) <= (arr_26 [i_6] [i_6] [i_8] [i_8] [i_6] [i_8 + 4])));
                    var_25 *= ((-(min((arr_25 [i_6]), (arr_25 [i_6])))));
                }
            }
        }
        var_26 |= var_8;
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        arr_34 [i_10] = ((((var_9 ? ((0 ? 724151933 : var_4)) : (-724151931 && 3295684323))) * 1));
        var_27 = ((((((((arr_32 [i_10]) ? 999282971 : -1))) ? 999282971 : (arr_33 [i_10]))) * ((((!(arr_32 [i_10])))))));
        arr_35 [i_10] = (arr_32 [i_10]);
    }
    var_28 |= var_11;
    var_29 = var_0;
    #pragma endscop
}
