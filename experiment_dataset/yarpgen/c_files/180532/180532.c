/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= min((min(162, var_14)), var_9);

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_16 += max((((-6338153684525624724 > 63556) ? (((min((arr_1 [i_0] [i_0]), 32750)))) : ((6476269155068375131 + (arr_1 [i_0] [i_0]))))), (((93 != ((1 ? 62 : 32753))))));
        arr_3 [i_0] [i_0] = ((13 ? -1 : -116));
        arr_4 [4] [i_0] &= ((!((max(3122848934689935094, -19586)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 = (~94);
        var_18 ^= (((arr_1 [i_1] [i_1]) == ((var_11 * (arr_6 [i_1])))));
        var_19 = (((((-21862 ? var_14 : var_10))) ? ((1 ? 3940310065931286586 : 24834)) : var_4));
        arr_9 [i_1] = ((((arr_0 [i_1] [i_1]) ? (arr_7 [7] [5]) : 253)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_19 [i_3] [i_2 - 1] [i_2 - 1] [14] [i_2] = (~255);
                                var_20 = ((!((((arr_1 [14] [i_2]) ? 93 : (arr_17 [i_1] [11] [11] [11] [i_5]))))));
                                arr_20 [i_2] [6] [i_3] [i_3] [i_2 + 2] [i_1] [i_2] = var_7;
                            }
                        }
                    }
                    var_21 = (((((255 ? var_9 : 87))) ? 62 : var_3));
                }
            }
        }
    }
    var_22 = ((var_1 ? (var_13 != var_1) : ((min(var_5, var_10)))));
    #pragma endscop
}
