/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (min(((var_12 ? (max(5881482657894219783, -5881482657894219782)) : (-5881482657894219783 - var_0))), ((((((3647459441 ? 120 : var_12))) * ((128 ? 31 : 524288)))))));
        var_14 = ((max(120, var_7)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_15 = var_4;
                        var_16 = ((((arr_6 [i_1] [i_1]) * var_11)));

                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 14;i_5 += 1)
                        {
                            arr_19 [i_1] [i_5 - 1] [i_5 - 1] = ((var_8 / ((var_9 ? var_11 : 647507865))));
                            arr_20 [i_1] [i_2] [i_2] [i_3] [i_1] [i_5] = var_0;
                            arr_21 [i_3] [i_1] = (var_13 ? (arr_18 [i_1] [i_2] [i_3] [i_1] [i_2] [i_3] [i_2]) : var_0);
                        }
                    }
                }
            }
        }
        arr_22 [i_1] = (((!var_6) ? var_11 : var_6));
        var_17 = (max(((((max(2147418112, 135))) ? (var_11 | 136) : (((65515 * (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])))))), (((!((max(var_10, var_6))))))));
    }
    var_18 &= (var_4 ^ 3647459425);

    for (int i_6 = 4; i_6 < 18;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        arr_33 [i_6 - 4] [i_7] [i_8] [i_9] = ((((min((min(var_3, 5881482657894219783)), (!var_12)))) ? -1587025078 : var_1));
                        arr_34 [i_8 - 1] = ((-(((arr_24 [i_8]) & (647507854 + 50)))));
                    }
                }
            }
            var_19 = (121 ? ((((!var_9) ? (((-5881482657894219769 ? (-32767 - 1) : 647507871))) : ((var_13 ? (arr_27 [i_7] [i_7] [i_7] [i_7]) : var_7))))) : var_13);
            var_20 = (min(247, ((((arr_32 [i_6 + 2] [i_6 - 2]) ? ((28 - (arr_28 [i_6 - 3] [i_6 - 3] [i_6 - 3] [i_6 - 4]))) : ((max(var_7, (arr_30 [i_6] [i_6] [i_7] [i_6])))))))));
            var_21 = ((var_4 + ((1032192 ? ((var_11 ? (arr_25 [i_7]) : 144115187807420416)) : var_6))));
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            arr_37 [i_6 - 4] = (31 * 14680064);
            var_22 = (max(var_22, ((min((((-570200613 && (8656555816935063330 - 3647459425)))), ((((min(var_10, 188))) ? (min((arr_26 [i_10] [i_10] [i_10]), -2261552069845482500)) : (var_1 && 2147418112))))))));
            var_23 = ((8388544 * (max(-96, (var_11 != 262140)))));
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
        {
            arr_41 [i_11] = (min(((((var_7 ? var_4 : var_10)))), (min(-1032183, var_8))));
            var_24 = (((((!((max((arr_29 [i_11] [i_6] [i_6]), var_13)))))) > ((var_5 ? 919 : ((var_7 << (((arr_30 [i_6] [i_11] [i_11] [i_11]) - 194))))))));
            arr_42 [i_11] [i_11] [i_11] = var_10;
        }
        for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
        {
            arr_45 [i_6] [i_12] [i_6] = (min(-var_4, (arr_32 [i_6 - 2] [i_12])));
            var_25 = var_10;
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 20;i_15 += 1)
                    {
                        {
                            var_26 = 1048560;
                            var_27 |= ((3647459424 * (((-0 ? (59 <= var_12) : var_3)))));
                            var_28 = ((!(((~((var_2 ? 70368475742208 : var_3)))))));
                            var_29 = ((((var_11 ? 3647459424 : var_13)) * ((((min((arr_50 [i_6] [i_12] [i_12] [i_15 - 1] [i_12] [i_12]), (arr_27 [i_6] [i_12] [i_13] [i_14]))) & 70368475742201)))));
                        }
                    }
                }
            }
        }
        var_30 = (((arr_52 [i_6 - 1] [i_6 - 4]) ? ((var_9 ? (arr_52 [i_6 + 1] [i_6 - 3]) : var_7)) : (((var_5 || (arr_52 [i_6 - 2] [i_6 - 2]))))));
    }
    var_31 = ((((max(((var_8 ? var_11 : var_2)), ((max(var_0, var_2)))))) ? 247 : var_10));
    #pragma endscop
}
