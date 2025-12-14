/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (min(-22885, 22884));
        var_20 = (arr_1 [i_0] [i_0]);
        arr_2 [1] [1] |= -29277;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_21 = ((-0 ? (!123) : (max((!-22885), ((var_18 ? (arr_3 [i_1] [i_1]) : var_11))))));
        var_22 = -7684;

        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            var_23 -= (max(((max(0, var_6))), ((-(arr_5 [i_1])))));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_24 = 3194;
                        arr_15 [i_1] [9] [i_2] [i_3] [i_4] = (max(var_3, (max(0, (var_6 == var_3)))));
                        var_25 = ((-(8126 == 0)));

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_19 [i_1] [i_1] [i_1] [3] [3] [0] [9] = (((~((4294967295 ? var_6 : (arr_5 [i_4]))))));
                            var_26 = (((((~((max(-3195, 0)))))) ? (min(((1 ? -7684 : 1)), 235)) : ((7 + (arr_8 [i_3] [i_3 - 2])))));
                        }
                        arr_20 [i_4] = ((0 ? ((((~var_2) == (min(var_12, 1262758450))))) : 3195));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
        {
            var_27 = (max(var_27, ((max(-84, ((var_11 + (arr_8 [i_1] [i_6]))))))));
            var_28 |= (arr_16 [i_1]);
        }
        arr_23 [i_1] = -48;
        arr_24 [4] [i_1] = ((+((25064 - (min((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), 12036339779160342078))))));
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_29 [i_7] = (((arr_22 [i_7] [i_7]) ? ((-var_15 ? var_8 : (arr_27 [9] [i_7]))) : ((+(((arr_21 [i_7] [i_7]) - (arr_11 [i_7] [6] [i_7] [10])))))));

        /* vectorizable */
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            var_29 |= (((var_3 * 20) ? ((-(arr_1 [10] [1]))) : 236));
            arr_33 [i_7] [i_8] [i_8] = var_6;
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 13;i_11 += 1)
                {
                    {
                        arr_41 [i_7] = (arr_38 [i_11 - 4] [i_11] [i_11] [i_11]);
                        var_30 = 0;
                    }
                }
            }
            var_31 = -253;
        }
        arr_42 [i_7] [i_7] = (max(((32767 ? 223 : ((min(0, 1))))), (((arr_14 [i_7] [i_7]) ? (((arr_18 [i_7] [i_7] [i_7] [i_7] [i_7]) & (arr_12 [i_7] [i_7] [i_7] [11]))) : 0))));
    }
    var_32 = ((2 ? (min(226, ((114 ? 0 : 32767)))) : 0));
    #pragma endscop
}
