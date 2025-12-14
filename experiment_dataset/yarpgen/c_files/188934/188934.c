/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((max(var_3, var_8)));

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_12 |= (max((((max((arr_0 [1] [i_0 + 1]), var_1)) * (((min((arr_0 [i_0] [i_0]), 4095)))))), ((min((arr_1 [i_0 + 1] [i_0 - 1]), (arr_0 [i_0] [i_0]))))));
        var_13 = ((((((max(-15406, 15405))) % 63)) | -15406));
        var_14 &= 15405;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    var_15 = -14675;

                    for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                    {
                        var_16 += var_3;
                        arr_13 [i_1 - 1] [i_2] [i_4] = var_6;
                    }
                    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                    {
                        var_17 = (max(var_17, (arr_4 [i_5])));
                        var_18 = (max(var_18, ((((arr_1 [i_2] [i_3 + 1]) >= (arr_5 [i_2]))))));
                    }
                    for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                    {
                        var_19 = (min(var_19, (arr_16 [i_1 + 1] [i_3 + 1] [i_3])));
                        var_20 = (!15405);
                    }
                    var_21 = (arr_11 [i_1] [i_2] [i_2] [i_3]);
                    arr_20 [i_2] = (arr_9 [i_2]);
                }
            }
        }
        var_22 = ((-(var_4 | var_2)));
        arr_21 [i_1] = ((!(arr_6 [i_1 - 1] [i_1])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_23 = (!var_0);
        var_24 = (arr_25 [i_7] [i_7]);
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 22;i_8 += 1)
    {
        var_25 -= 6530;
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    {
                        var_26 = (max(var_26, (((!(((0 ? var_0 : var_3))))))));
                        var_27 = var_10;
                        var_28 = (((arr_28 [i_10]) | 164));
                        var_29 = ((!(arr_29 [i_8 - 1])));
                    }
                }
            }
        }
        var_30 = var_5;
        arr_38 [i_8] = -6529;
    }
    var_31 = (max(6615825181595917260, 6530));
    #pragma endscop
}
