/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (3590273018 ? var_4 : (var_2 & 1737559456));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = (((((arr_1 [i_0]) & var_16))) ? (min(4294967275, (~3688901966))) : (arr_1 [i_0]));
        arr_2 [i_0] [i_0] = (((((3022393632 > ((var_0 ? var_14 : 187700387)))))) - ((((2557407839 ? 62914560 : 2)) | 2557407839)));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_20 -= (+(max((arr_3 [i_1] [i_0]), var_7)));
            arr_5 [i_1] [i_0] [i_0] = ((!((((arr_3 [i_1] [i_0]) ? 16777088 : (arr_3 [i_1] [i_0]))))));
            var_21 = (3150673525 >= 4294967295);
            var_22 = max(((var_5 ? (min(2374367469, var_9)) : var_15)), ((var_4 ? ((-(arr_1 [i_0]))) : var_7)));
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            var_23 &= ((3574291629 & (arr_4 [i_0])));

            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_24 -= (3022393632 <= 1737559441);
                            var_25 = ((arr_12 [i_5] [i_4 + 2] [i_3 - 1] [2]) ? (arr_6 [3] [3]) : 4294967275);
                        }
                    }
                }
                arr_18 [i_0] [i_2] [i_0] = (~1424173358);
                var_26 = ((!(arr_8 [i_3 - 1] [i_2] [i_2 - 1] [i_2 - 2])));
            }
            arr_19 [i_2] &= 87287822;
            var_27 = (2256968438 + 2);
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 19;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_28 = min((max((var_11 - var_0), ((var_15 ? var_13 : var_2)))), (arr_26 [i_8] [i_7] [i_8 - 2] [i_8 - 2]));
                                arr_32 [i_10] [i_6] [7] [i_7] [i_7] [i_6] [i_6] = (((((1737559440 == 369665857) ? ((4294967294 ? var_14 : var_5)) : ((((!(arr_26 [i_7] [i_7] [i_7] [8]))))))) != (arr_22 [i_6] [i_7])));
                            }
                        }
                    }
                    arr_33 [i_7] = (((((arr_24 [i_7] [i_7] [i_8] [i_8 + 2]) ? (arr_24 [i_6] [i_7] [i_6] [i_8 + 2]) : (arr_31 [i_8 + 1] [i_8 - 2] [i_8 - 2] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 + 1])))) ? (max((arr_24 [i_6] [i_7] [3] [i_8 - 2]), (arr_31 [i_8 + 2] [i_8 - 2] [i_8] [i_8 - 2] [i_8] [i_8] [i_8 - 1]))) : (4216948227 / 1073741792));
                }
            }
        }
        var_29 = arr_22 [i_6] [i_6];
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        var_30 = ((arr_22 [i_11] [i_11]) ? (max(3433026421, 3758096384)) : (min((arr_22 [i_11] [13]), (arr_22 [i_11] [i_11]))));
        var_31 = (max(var_31, (arr_20 [19] [i_11])));
        arr_36 [i_11] = (~(((4027372274 >> (16777200 - 16777170)))));
        arr_37 [1] = 2147483392;
        var_32 = min((!-3758096384), ((2557407819 ? 3990531627 : 4216948227)));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        var_33 = ((!4216948250) ? (arr_38 [i_12]) : (2 <= var_15));
        arr_41 [i_12] = 536870912;
    }
    #pragma endscop
}
