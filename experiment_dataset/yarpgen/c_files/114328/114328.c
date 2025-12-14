/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_10));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_0;
        var_14 -= ((!((min((48593 < 44144), ((var_10 ? var_7 : var_3)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 24;i_4 += 1)
                {
                    {
                        var_15 -= (((arr_12 [i_3 + 2] [i_2] [i_4 - 1] [i_3]) ? (arr_12 [i_3 + 1] [i_3] [i_4 + 1] [i_4 - 1]) : (arr_8 [i_3 + 2] [i_2] [i_4 + 1])));
                        arr_14 [i_1] [13] [i_4] = (!48593);
                        var_16 = (min(var_16, var_10));
                    }
                }
            }
        }
        var_17 = ((3773629575 ? 5929277139296546754 : -2131642476));

        for (int i_5 = 2; i_5 < 24;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    {
                        var_18 ^= (-var_1 / 658646060);
                        var_19 &= (61440 << (31 - 21));
                    }
                }
            }
            var_20 = (max(var_20, (((var_6 ? -1176590699 : 39)))));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_25 [i_1] [2] = ((!(arr_1 [i_1] [i_1])));
            var_21 -= 4956099660515237744;
            var_22 = 6632907400544019557;
        }
    }
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        arr_29 [i_9] [i_9] = ((-((((var_2 ? 0 : var_9)) | ((min(var_0, 6198)))))));
        arr_30 [i_9] [i_9] = -1;
        var_23 = (~var_12);
    }
    #pragma endscop
}
