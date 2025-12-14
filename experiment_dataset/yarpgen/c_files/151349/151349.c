/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((var_2 != (var_17 && 1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((max((arr_8 [i_1] [0]), (arr_8 [i_1] [6])))))));
                                var_22 = (!var_2);
                            }
                        }
                    }
                    var_23 = ((var_3 == (arr_3 [1] [i_1 - 1])));
                }
            }
        }
    }
    var_24 |= (((((min(var_10, 20385))) ? (var_10 <= -791272106) : (var_12 ^ -791272101))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        var_25 = var_9;
                        arr_25 [i_8] [i_8] [i_6] [i_8] [i_5] = (max((((arr_14 [i_6 + 4] [i_7 - 1]) ? (arr_14 [i_6 + 4] [i_7 - 1]) : var_15)), (~-127)));
                        arr_26 [i_8] = var_2;
                        var_26 = ((var_6 ? ((-(arr_19 [i_6] [i_6 + 1] [6] [i_7 + 1]))) : ((-8 ? (arr_12 [i_7] [i_7 - 1] [i_7] [i_8] [i_8] [i_8] [i_7]) : (arr_12 [12] [i_7 + 2] [11] [i_8] [3] [5] [i_8])))));
                    }
                    for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                    {
                        var_27 = (arr_24 [i_5] [i_6] [7] [i_5]);
                        var_28 = (!13617);
                        var_29 = (((min(var_19, ((var_1 ? 4669706275366616446 : 34))))) ? ((min((34609 <= 3355829083), 7))) : (((!(((var_11 ? 791272107 : -35)))))));
                        var_30 = var_7;
                    }
                    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                    {
                        var_31 = ((((-8 ? 791272129 : 109))) - (max(var_7, (arr_1 [i_7 + 1] [i_6 - 1]))));

                        for (int i_11 = 1; i_11 < 10;i_11 += 1) /* same iter space */
                        {
                            arr_33 [i_5] [i_6 + 2] [i_7 + 2] [i_11] = (((((arr_0 [i_6 + 2] [i_7 + 2]) != -8)) ? (arr_0 [i_6 - 1] [i_7 + 1]) : (((!(arr_0 [i_6 + 3] [i_7 + 2]))))));
                            arr_34 [i_5] [7] [7] [i_10] [i_11] [i_7] [i_7 + 1] = -8225;
                            arr_35 [5] [5] [i_10] = (((162 ? (((arr_4 [i_5] [i_10] [0] [16]) << 0)) : -121)));
                            arr_36 [i_6] [i_6 + 1] = ((max(var_7, ((max((arr_8 [i_5] [2]), var_1))))));
                        }
                        for (int i_12 = 1; i_12 < 10;i_12 += 1) /* same iter space */
                        {
                            var_32 -= (((max(791272084, -791272101))) ? ((-(max(var_8, var_17)))) : ((max(-791272107, ((min(62481, 112)))))));
                            var_33 = (max(var_33, 9223372036854775791));
                            var_34 = 109;
                            var_35 = (min(var_35, (~114)));
                        }
                        var_36 = ((-((-((791272119 ? -12732 : 791272099))))));
                    }
                    for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                    {
                        var_37 = (min(-124, 791272090));
                        arr_45 [i_5] [i_13] = min((((arr_12 [13] [i_5] [i_7] [i_7] [1] [16] [i_7]) ? 65535 : var_10)), -var_12);
                        var_38 = (max(var_38, ((max((arr_22 [i_5] [i_6] [i_7] [8]), var_2)))));
                    }
                    var_39 = (var_11 ? -115 : ((((var_2 << (var_7 - 4548899101949909798))))));
                }
            }
        }
    }
    #pragma endscop
}
