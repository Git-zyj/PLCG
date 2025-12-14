/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_8 >> (-1945721551032157794 + 1945721551032157814)));
    var_18 = (var_4 && -43);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((15 >> (((arr_1 [i_0] [i_0]) + 536437442067400173))));
        arr_4 [i_0] [i_0] = (127 + var_6);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_14 [i_3] [i_3] [i_2] [i_1] [i_3] [i_0] = ((15 == (-79 > 127)));
                        var_19 = ((var_16 / (arr_12 [i_0] [i_1] [i_2])));
                        var_20 = (((((arr_2 [i_0] [i_1]) + 2147483647)) >> (((30002 % 32767) - 29984))));
                    }
                }
            }
        }
        var_21 = (((arr_6 [i_0] [i_0] [i_0]) >= 79));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_17 [i_4] [i_4] = (((arr_15 [i_4] [5]) - var_4));
        var_22 = (((var_2 <= var_2) | var_12));
        var_23 = (var_0 <= (arr_16 [i_4]));
        var_24 -= (4507429273907509363 < var_10);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_25 += ((241 + 16239283029165149185) - (1 - 16239283029165149185));
        arr_20 [i_5] [i_5] = (((((((arr_19 [i_5] [i_5]) || 18446744073709551595)))) > ((var_16 - (arr_16 [i_5])))));
        arr_21 [i_5] = ((((1 + (arr_19 [i_5] [i_5]))) - (((arr_19 [i_5] [i_5]) << 1))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_26 = ((((((arr_16 [i_6]) != var_14))) ^ (1 / -127)));
        arr_25 [i_6] = ((var_11 * 274877905920) * ((((var_11 > 76) << var_11))));
    }
    var_27 = var_7;
    var_28 = var_7;
    #pragma endscop
}
