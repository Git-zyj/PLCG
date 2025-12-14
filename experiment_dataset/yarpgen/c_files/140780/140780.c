/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = ((max(253, var_3)));
        var_12 = (max(-var_6, 1296327816));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_4 [i_1] = ((!((85 > ((var_4 ? var_10 : (arr_1 [i_1] [i_1])))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_13 = -1;

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_10 [i_1 + 1] [i_1] [i_2] [i_3] = ((((4222272981 ? var_5 : 0)) / ((6672076448305385069 ? (arr_5 [i_3] [i_2] [10]) : var_9))));
                arr_11 [i_1] = ((0 / (arr_8 [i_1] [i_1] [i_1 + 1] [i_3])));
            }
        }
        var_14 *= (max((arr_6 [i_1 + 1]), (((((-2 ? var_4 : var_2))) ? var_1 : (arr_1 [i_1 + 1] [i_1 + 1])))));
        var_15 = ((10010 * (arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1])));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_16 ^= var_5;
        var_17 = ((-((-10010 ? 0 : 21939))));
        arr_14 [i_4] = (~var_4);
        arr_15 [i_4] [13] = 0;
        var_18 &= 1;
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_19 = -85;
        var_20 = 158;
    }
    var_21 = var_10;
    var_22 = (max(var_22, ((min(var_2, (((!var_7) + ((60 ? 34 : var_5)))))))));
    #pragma endscop
}
