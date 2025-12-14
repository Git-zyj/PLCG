/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((max(var_6, ((1034127001 >> (896 - 886)))))) ? (max(911, var_1)) : (((var_6 / (arr_1 [i_1] [i_0 - 2]))))));
                arr_6 [2] = (max((arr_1 [i_0] [i_0]), var_11));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_14 [14] [i_1] [14] [i_3] [1] = (~var_5);

                            for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                            {
                                var_12 = (min(var_12, (((~(max(var_5, ((-889 ? (arr_8 [i_4 + 1] [i_3] [i_2]) : var_8)))))))));
                                arr_18 [i_0] [i_0 - 1] [i_3] [i_0] [i_0] = 112;
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                            {
                                var_13 = (max(var_13, (((110 ? (((arr_7 [i_0 - 3] [i_0] [i_0 - 3] [i_0]) ? 1770500748 : 127)) : (arr_11 [i_5] [i_5 - 1] [i_5] [i_5 + 1] [1]))))));
                                var_14 = (!1507);
                                var_15 = (-1 ^ var_2);
                                var_16 = ((arr_3 [i_3] [i_3]) >= var_10);
                            }
                            var_17 = -1660190373593880997;
                        }
                    }
                }
            }
        }
    }
    var_18 = var_4;
    var_19 += var_8;

    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (~1)));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    var_21 = (max(var_21, (((((!((min(13, 112))))))))));

                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        arr_30 [i_6] [i_6] [i_6] [i_8] [i_8] = ((var_3 ? var_2 : ((((((arr_29 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) ? -1 : 150))) ? 25 : (min(54, -1))))));
                        var_22 = (((min((~-9392), 2147483520))) ^ 5764522871252247167);
                    }
                    arr_31 [i_6] [i_7] [i_6] = ((~((min((arr_27 [i_6] [i_6] [i_6]), (arr_15 [i_6] [i_7] [i_7] [i_8] [i_8]))))));
                    arr_32 [i_6] [i_6] [i_8] = (min(28545, -9119768595185068617));
                }
            }
        }
        var_23 = (((arr_11 [i_6] [i_6] [i_6] [i_6] [i_6]) ? (((arr_3 [i_6] [i_6]) ? (arr_3 [i_6] [i_6]) : 2670561947)) : 0));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
    {
        var_24 = (arr_20 [i_10] [i_10] [i_10] [i_10] [i_10]);
        var_25 = 134;
        var_26 = ((~(((arr_33 [i_10]) ? var_7 : 8))));
    }
    var_27 = (max((min((~var_3), (((111 ? 134 : var_11))))), var_5));
    #pragma endscop
}
