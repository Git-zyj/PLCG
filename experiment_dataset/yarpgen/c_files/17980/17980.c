/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_10 [19] [i_1] [3] [i_3] [23] [i_3] = var_7;
                        var_14 = (min(var_14, (((4294967294 ? var_12 : ((3096772847 << ((((var_10 ? var_3 : var_10)) - 6200701965786203121)))))))));
                    }
                }
            }
        }
        var_15 = (((max(9223372036854775807, 5))) ? (!482614095503506107) : (((arr_6 [i_0] [i_0 - 1] [i_0]) ? 1170669549651331410 : (arr_6 [i_0 - 1] [18] [6]))));
        var_16 += (((((((8847197962595480313 ? -4774905269330240856 : var_8))) ? ((((arr_8 [i_0 + 1] [i_0] [i_0] [i_0 + 1]) ? var_1 : 250))) : ((3957477206 ? 18446744073709551615 : var_11)))) * (18446744073709551611 | 15118847223595704569)));
    }
    var_17 = (max(var_17, (((((min(var_12, var_6))) ? (--8) : var_12)))));
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            {
                arr_17 [i_4 - 1] = max((!var_11), (min(((1 ? 337490079 : 18446744073709551615)), -527045766)));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 8;i_7 += 1)
                    {
                        {
                            arr_23 [i_7] [i_6] [i_5 - 1] [11] [i_6] [i_4] = (((((arr_18 [i_5] [2] [i_6]) > 2440)) ? (((~(max(var_2, (arr_15 [0])))))) : (((4294967295 <= (arr_21 [9] [0]))))));
                            arr_24 [i_4 - 1] [i_5 - 1] [i_6] [9] = arr_1 [i_7] [17];
                        }
                    }
                }

                /* vectorizable */
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            {
                                arr_32 [3] [i_8] [3] [9] [i_8] [3] = (arr_9 [i_4 - 2] [i_9 + 1] [i_8] [i_8]);
                                var_18 = -24;
                            }
                        }
                    }
                    arr_33 [i_8] [9] [i_8] [i_8] = ((4228047074 >> (168061393 - 168061386)));
                }
                var_19 *= ((-107 ? var_9 : (((var_9 ? (arr_16 [i_4] [i_4 + 2] [i_4 + 3]) : var_12)))));
            }
        }
    }
    var_20 = (min(var_20, ((max((var_11 + var_12), var_9)))));
    #pragma endscop
}
