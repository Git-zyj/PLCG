/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_15 = (max((arr_9 [i_1 + 4] [i_1] [i_2 + 2] [i_4 + 2]), (((arr_9 [i_1 + 2] [i_1] [i_2 - 3] [i_4 - 1]) ? (arr_9 [i_1 - 1] [i_1] [i_2 + 2] [i_4 + 2]) : -83))));
                                var_16 = (arr_4 [i_1] [i_1]);
                                var_17 = (max(((var_2 ? (arr_11 [i_4 + 3] [i_2 + 1] [i_1 + 2]) : (arr_7 [i_2 - 3] [7] [i_2]))), ((((arr_7 [i_2 - 2] [i_1] [i_1]) || (arr_11 [i_4 + 2] [i_2 + 2] [i_1 + 1]))))));
                                var_18 = (max(((!(arr_3 [i_1 + 4] [i_4] [i_4]))), ((49 || (arr_3 [i_1 + 2] [i_4] [i_1 + 2])))));
                                var_19 = (max(var_9, (max(83, (arr_7 [0] [0] [i_1 + 4])))));
                            }
                        }
                    }
                    var_20 = (((-((((arr_2 [i_0]) == (-127 - 1)))))));
                    var_21 -= 3360917840;
                }
            }
        }

        for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
        {
            var_22 *= ((((((arr_7 [i_5 - 1] [i_5 - 1] [i_0 + 1]) ? (arr_1 [i_0 - 1]) : (arr_7 [i_5 - 1] [i_5 - 1] [i_0 + 1])))) ? ((2315588185 ? (arr_1 [i_0 + 1]) : 94)) : ((120 ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 1])))));
            var_23 *= ((15 ? (9432288678906122842 + 240) : ((-(arr_12 [i_0] [i_0 - 1])))));
        }
        for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_24 = (((arr_3 [i_0] [i_0] [i_0]) ? 12925958809353274459 : (((((max(var_7, var_12))) ? ((10686644140890563772 ? var_2 : 4294967292)) : -45)))));
                    var_25 = max(((1350628486638648457 ? (arr_11 [i_0 + 1] [i_6 - 1] [i_6 - 1]) : (arr_11 [i_0 - 1] [i_6 + 1] [i_6 - 1]))), (arr_11 [i_0 - 2] [i_6 - 1] [i_6 + 1]));
                }
                var_26 = (max(219, (max((arr_9 [i_0] [i_6] [i_7] [i_6]), (arr_9 [i_7] [i_6] [i_6] [i_0 - 1])))));
            }
            var_27 = ((!((max((arr_0 [i_0 - 2] [i_6 + 1]), (arr_0 [i_0 - 2] [i_6 + 1]))))));
        }
    }
    var_28 = var_9;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            {
                var_29 = (max((max((arr_27 [i_9]), (arr_27 [i_10]))), ((max(var_1, (arr_28 [i_10] [i_9]))))));
                var_30 = (((arr_28 [i_9] [i_9]) ? (max((arr_30 [i_9] [i_9] [i_10]), ((max((arr_26 [i_10]), (-127 - 1)))))) : (arr_30 [i_9] [i_10] [i_10])));
                var_31 = ((((max(((((arr_28 [i_9] [i_10]) ? (arr_28 [i_9] [i_9]) : var_0))), (arr_27 [i_10])))) ? ((255 ? 10686644140890563769 : 1)) : ((((159 / 138) ? (arr_26 [i_10]) : ((((-127 - 1) != (arr_29 [i_9] [i_10])))))))));
            }
        }
    }
    #pragma endscop
}
