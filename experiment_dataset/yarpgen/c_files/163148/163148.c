/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 = var_5;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_13 = ((~((-(arr_0 [i_0])))));
        var_14 = -123;

        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                var_15 = (!-109);

                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    arr_10 [i_0 - 1] [i_1] [i_2 + 1] [i_1] [i_1] = ((~(arr_8 [i_0])));
                    var_16 = (min(var_16, (((+(((arr_6 [i_0] [i_0]) & -1562941206)))))));
                    arr_11 [i_0] [i_1] [i_2 - 1] [i_3] = (arr_3 [i_1 - 3] [i_0 - 4]);
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_17 = (max(var_17, (arr_13 [i_0] [i_0] [i_1 + 1] [i_2] [i_2 - 1] [i_4])));
                    arr_14 [i_0 - 2] [i_1 + 1] [1] [i_1] = 69;
                    var_18 = (!2786802094997536398);
                    arr_15 [i_0 + 1] [i_1] [i_1] = (~22041);
                    arr_16 [i_0 + 1] [i_0] [i_1] [i_0] = 10722495766985829697;
                }
                for (int i_5 = 4; i_5 < 17;i_5 += 1)
                {
                    var_19 = (~46);
                    arr_20 [i_5 - 1] [i_1] [i_1] [i_1] [7] = (arr_19 [i_1]);
                    arr_21 [i_0] [i_1] [i_0] [3] = 22;
                }
            }
            for (int i_6 = 4; i_6 < 16;i_6 += 1) /* same iter space */
            {
                var_20 = -1267336359;
                var_21 ^= (arr_23 [i_6] [i_0 + 1]);
                var_22 = (max(var_22, (((62197 && (((30 ? -1923886354 : 65524))))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_32 [i_0 - 1] [i_1] [i_1] [i_8 + 3] = (arr_13 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
                            arr_33 [i_1] [i_1] = 1301358720;
                            var_23 *= ((-(arr_22 [i_1 - 1] [i_6] [i_7] [2])));
                        }
                    }
                }
                var_24 = ((~(~18446744073709551615)));
            }
            for (int i_9 = 4; i_9 < 16;i_9 += 1) /* same iter space */
            {
                var_25 = (min(var_25, 16383));
                arr_36 [i_0 - 1] [i_1] [i_1] = (arr_6 [i_1 - 1] [i_1 - 3]);
            }
            var_26 = ((~(arr_24 [i_1])));
            arr_37 [i_1] [i_1] [i_1 - 2] = ((~(arr_3 [i_1 - 3] [i_0 - 2])));
        }
        for (int i_10 = 1; i_10 < 16;i_10 += 1)
        {
            var_27 = (min(var_27, (((!(arr_18 [i_0] [i_0]))))));
            var_28 = 18446744073709551615;
        }
        for (int i_11 = 4; i_11 < 17;i_11 += 1)
        {
            arr_44 [i_0] [i_0] [i_11] = (((((-1267336369 ^ 22) + 2147483647)) >> ((((arr_12 [i_0 + 1] [i_0] [i_0 - 3] [i_0 - 2] [i_11] [i_11]) > 599401788)))));
            var_29 ^= 11;

            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                arr_48 [14] [i_11 - 4] [17] = (arr_42 [i_11 - 3] [i_11 - 2]);
                var_30 = (((arr_6 [i_11 - 1] [i_11 - 1]) ? (arr_6 [i_11 - 3] [i_11 + 1]) : (arr_6 [i_11 + 1] [i_11 + 1])));
            }
            var_31 ^= (((arr_24 [i_11]) * 6692377302841019311));
        }
    }
    for (int i_13 = 1; i_13 < 1;i_13 += 1)
    {
        arr_51 [i_13] [i_13] = ((((min(0, (arr_23 [i_13] [i_13 - 1])))) ? (!30525) : (arr_23 [i_13] [i_13 - 1])));
        arr_52 [i_13] [i_13] = -1179569898;
    }
    #pragma endscop
}
