/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (!511)));
    var_21 += (((-23110 != 65025) >> ((((~((255 ? 0 : 5228561877973367623)))) + 27))));
    var_22 *= 15845;
    var_23 = (min(var_23, (((!(((((max(var_16, 14632426234569289662))) ? (1 % 7723140485665461863) : var_10))))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_24 = (max(var_24, ((((((!3422722557573604438) ? 13477 : (max(0, var_2)))) % ((max(127, 0))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 7;i_2 += 1)
            {
                {
                    var_25 = (max((((!((min(3942218372278094373, var_3)))))), ((((min(var_9, 19))) ? 0 : (!-3493414850310795117)))));
                    var_26 = -109;
                    var_27 = ((10351 ? ((3942218372278094373 ? (((max(var_2, 255)))) : (max(18446744073709551615, var_14)))) : (((((15834 ? var_14 : (-9223372036854775807 - 1))) >> 13700397103598621781)))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_28 = ((12003201470840747544 ? (!var_8) : 0));
                        arr_10 [7] = (max((((8537 & 5969660495807700196) | 234)), (47 & 191)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_4] = (252 / 1);
                        var_29 = var_15;
                    }
                }
            }
        }
        var_30 -= ((!((!(((1 ? 63521 : 16352)))))));
        arr_14 [i_0] [6] = (!212);
        var_31 = ((-15834 ? (((min(0, 84)))) : 18446744073709551615));
    }
    #pragma endscop
}
