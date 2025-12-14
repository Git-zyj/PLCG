/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(144115187002114048, 12074281978388643385))) ? var_1 : ((((8039871601726107613 || 1) < 1)))));
    var_21 = (((var_1 <= var_9) ? var_13 : ((var_6 ^ (!var_14)))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_22 = (((((-(arr_0 [i_0 - 2])))) >= (min((((1 ? 1 : 58111))), ((56 ? (arr_2 [i_0 - 2] [i_0]) : var_12))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
        {
            var_23 = var_19;
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_24 = ((!(((-(65280 & var_12))))));
                        var_25 = (min(var_25, (((((min(49058, 1))) ? (min((arr_0 [i_0 + 2]), var_15)) : (min(var_10, ((((arr_0 [i_2 - 3]) < 257698037760))))))))));
                        arr_10 [i_0] [i_3] [11] [i_3] [i_2] [i_1] = (((min((max((arr_0 [i_1]), 3350953956691357341)), (var_12 || 64064))) < var_8));
                    }
                }
            }
            var_26 = ((var_2 && (((((((arr_2 [i_0] [i_0]) ? 25694 : 1))) ? (127 || 1) : var_17)))));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
        {
            arr_14 [i_0 - 1] [i_0 + 2] [i_0] = ((!((max((!var_8), (min(18301, var_0)))))));
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 23;i_7 += 1)
                        {
                            var_27 = (min(var_27, (((-(arr_4 [i_0 - 1] [i_0 - 1]))))));
                            var_28 = (-268704405156423484 ? 64064 : 1);
                            var_29 &= ((!(((1776 ? var_17 : 2147483647)))));
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_30 = var_15;
                            var_31 = (max((((1 ? var_16 : 26784))), ((var_1 ? var_19 : 1264164698249234755))));
                        }
                        var_32 = max(((((((min((arr_1 [i_5]), var_14)))) < (arr_4 [i_4] [i_4])))), var_5);
                    }
                }
            }
            var_33 = max(((+(max((arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 2]), 1)))), ((max(257698037760, 1))));
            arr_23 [i_0] [i_0] [i_0 + 1] = (min((min((arr_20 [12] [i_4] [i_4] [20] [i_4] [i_0 - 2] [i_0]), (arr_20 [i_0] [i_4] [i_0] [0] [i_4] [i_0 + 1] [i_4]))), ((((var_6 % var_18) || var_15)))));
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        var_34 = ((1471 || (((arr_24 [i_9] [i_9]) && 21799))));
        var_35 = ((~(~var_2)));
    }
    #pragma endscop
}
