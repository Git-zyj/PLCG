/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        var_21 = (min(var_21, (((-7 ? (arr_1 [9]) : ((((arr_0 [i_0 + 2]) == (arr_1 [i_0])))))))));
        arr_3 [i_0] [i_0] = var_8;
        var_22 = ((((((var_15 ^ (arr_2 [i_0] [i_0]))))) % (((arr_0 [i_0]) - (!2930641285634590193)))));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        var_23 = (max(var_23, 1));

        for (int i_2 = 4; i_2 < 16;i_2 += 1)
        {
            arr_8 [i_2 - 4] [i_2] [i_2] = var_18;
            arr_9 [i_1] [i_2] = (max((min(15516102788074961423, var_4)), -var_7));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_24 |= (arr_11 [i_1 + 2]);
            var_25 = var_16;
            var_26 = (min(var_26, ((((arr_6 [i_1]) & (15516102788074961416 > 18359024684805142555))))));
            var_27 = (arr_10 [i_1] [i_3] [i_3]);
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    arr_16 [i_1] [i_4] = ((var_1 ? var_13 : (((arr_14 [i_1 + 2]) >> (arr_14 [i_1 + 3])))));
                    arr_17 [i_1] [i_5] = var_14;
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_28 &= (!-16);
        var_29 = var_7;
        var_30 = ((((max(((((arr_7 [i_6] [i_6]) < (arr_18 [i_6])))), var_10))) ? (((18359024684805142564 ? 5475465693123831375 : 1))) : 15516102788074961423));
        var_31 = ((((min(var_11, (arr_18 [i_6])))) ? (!var_12) : (((arr_13 [i_6] [i_6]) & 4))));
        arr_20 [i_6] |= (arr_1 [i_6]);
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 21;i_7 += 1)
    {
        arr_23 [i_7 - 2] = ((~(arr_22 [i_7 - 3])));
        arr_24 [15] = (18359024684805142564 & 188);
        arr_25 [i_7] [i_7 + 4] = (arr_22 [i_7 - 3]);
    }
    var_32 = var_16;
    var_33 -= -11678;
    #pragma endscop
}
