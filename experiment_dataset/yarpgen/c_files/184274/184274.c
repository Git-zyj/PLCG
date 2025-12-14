/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((var_2 ? (max((min(var_8, 9577251033469879662)), (((85 ? 23861 : 32767))))) : 63)))));
    var_13 = ((var_8 ? var_6 : var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = ((29054 ? (arr_8 [i_1 - 1] [i_1] [i_2 - 1] [i_2 + 1]) : var_6));
                    var_15 = (!44060);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_16 = (arr_4 [i_2 - 1]);
                                var_17 = (arr_2 [i_0]);
                            }
                        }
                    }
                    var_18 |= arr_12 [i_0] [i_0] [i_1] [i_2 - 1] [i_2];
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                var_19 = (min(var_19, var_6));
                                var_20 = ((var_11 == (arr_19 [i_1] [i_1] [2] [i_1 - 2] [i_2 - 1] [i_6 + 1])));
                            }
                        }
                    }
                }
            }
        }
        var_21 += ((!(arr_16 [i_0] [14] [i_0] [i_0])));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_22 *= 15972;

        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_23 = ((-((min(-15966, (arr_0 [i_9] [i_10 - 3]))))));
                            var_24 = max((arr_23 [i_7]), (min((arr_23 [i_11]), 15972)));
                        }
                    }
                }
            }
            var_25 = (max(15977, 15977));
        }
        var_26 = (min(var_26, ((max((((max(-1279508327, (arr_14 [0] [i_7] [4] [i_7] [i_7]))))), 1)))));
        var_27 = (max(var_27, (((((!((max(var_7, 36153))))))))));
        var_28 = var_6;
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
    {
        var_29 = (-4875550522724031346 & (~243));
        var_30 = ((var_3 ? ((min((arr_28 [i_12] [i_12] [i_12] [i_12]), (arr_28 [i_12] [i_12] [i_12] [i_12])))) : (((arr_28 [i_12] [i_12] [i_12] [i_12]) * (arr_28 [i_12] [0] [i_12] [i_12])))));
    }
    var_31 = (min(((-15984 + ((25699 ? 127 : 3484249477)))), (15972 + 1)));
    var_32 = min((((1273563714 != (((var_7 ? var_5 : var_10)))))), (max(215, (12917049147430228917 + var_8))));
    #pragma endscop
}
