/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((~((var_2 ? ((85 ? 248 : 46)) : ((min(var_10, 13))))))))));
    var_16 = (min(var_16, (((var_14 ? (((179 != 208) ? var_6 : var_7)) : var_13)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = 179;
        var_17 ^= 0;
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        var_18 = 6;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_19 = ((var_5 > (arr_8 [i_2] [i_2] [i_2])));

            for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    arr_16 [i_4] [i_4] [i_4] = (143 == 60);
                    var_20 = ((!(arr_12 [i_1 - 2] [i_3 + 1] [i_3] [i_4] [17])));
                    var_21 = ((~((~(arr_12 [i_1] [i_1] [i_3] [i_4] [i_4])))));
                }
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    arr_19 [i_1] [7] [i_3] [i_3] [i_3] = (!0);

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_22 = 219;
                        arr_22 [i_1] [i_3 + 1] [i_1] = (arr_8 [i_3 - 1] [i_3 - 1] [i_5 + 1]);
                        arr_23 [i_1] [11] [i_3] = (((var_8 >= 142) ? (arr_17 [i_3] [17] [i_3] [i_3 - 2]) : 238));
                    }
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        var_23 = ((((!(arr_24 [i_5] [i_2] [i_7] [i_5]))) || ((((arr_18 [i_1] [i_3 - 2]) ^ (arr_10 [i_5] [i_3]))))));
                        arr_28 [i_7] [i_3] [i_3] = (!244);
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_24 = (!0);
                        var_25 += ((~(arr_30 [i_8] [i_8] [i_3] [i_8] [i_8])));
                        arr_31 [i_1] [i_2] [i_3 - 2] [i_2] [i_8] [i_1 + 2] = ((!(arr_5 [i_1])));
                    }
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    arr_34 [i_2] [i_2] [i_3] [2] [i_3] [i_3] |= arr_13 [i_1] [i_1] [i_3] [i_2];
                    arr_35 [i_9] [i_3] [i_2] [i_1 - 3] [i_1 - 3] = (135 > 71);
                    var_26 = (min(var_26, (((~(((!(arr_7 [i_1] [i_1])))))))));
                    var_27 = ((~(arr_5 [i_1 - 3])));
                    var_28 = 20;
                }
                var_29 = (~var_0);
                var_30 -= ((-(219 & 21)));
                arr_36 [i_1] [i_2] [i_3 - 1] |= (arr_12 [i_1] [i_2] [10] [i_1] [i_1]);
            }
            for (int i_10 = 2; i_10 < 21;i_10 += 1) /* same iter space */
            {
                arr_40 [i_1] [i_10 - 2] [i_10] [i_2] = (((arr_30 [i_1] [i_2] [i_2] [i_10 + 1] [i_10]) ? (arr_29 [i_1]) : (arr_38 [i_2] [i_2] [i_2])));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            var_31 = (arr_7 [i_1] [i_2]);
                            var_32 = (max(var_32, (arr_25 [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 1] [i_1])));
                            var_33 &= (((arr_9 [i_1 - 2] [i_1 - 1]) || (arr_9 [i_1 - 3] [i_1 + 2])));
                            var_34 = 169;
                        }
                    }
                }
                var_35 = ((!(arr_33 [i_1 - 3] [i_1 - 3])));
                arr_46 [i_10 - 1] [i_1] = (arr_45 [i_10 - 2] [i_1 + 2] [i_10] [i_1] [i_10]);
                var_36 = (((((~(arr_8 [i_2] [i_2] [i_1 + 3])))) || (~255)));
            }
            for (int i_13 = 2; i_13 < 21;i_13 += 1) /* same iter space */
            {
                arr_50 [i_1] [i_1] [i_13 + 1] [i_13 + 1] = (var_1 >> 6);
                var_37 = (!123);
                var_38 ^= arr_43 [i_13] [16] [i_13 - 2] [i_13 + 1] [i_1 - 2];
                var_39 ^= 0;
            }
            arr_51 [i_2] |= (((arr_42 [i_2] [i_1] [i_2] [i_1] [i_1 + 2]) ? (arr_42 [i_2] [i_2] [0] [i_2] [i_1 - 2]) : (arr_42 [i_2] [i_1 - 1] [i_2] [i_2] [i_1 - 1])));
        }

        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            arr_54 [i_14] = (((arr_33 [i_14] [i_1]) * (((arr_44 [i_1 - 2] [i_1 - 2] [i_1] [i_14] [i_14]) ? 28 : ((~(arr_5 [i_1])))))));
            var_40 = 150;
            arr_55 [i_1] [i_14] [i_14] = 16;
            var_41 = (((255 ? 185 : (arr_53 [i_1] [i_1] [i_1]))));
        }
    }
    for (int i_15 = 1; i_15 < 17;i_15 += 1)
    {
        var_42 = ((-0 != ((~((54 ? 64 : (arr_32 [i_15] [i_15 + 1] [i_15 + 1] [i_15 + 3] [i_15 + 2])))))));
        var_43 -= ((((((arr_20 [i_15] [i_15] [i_15] [i_15] [i_15]) ? 4 : 2))) ? 0 : 0));
        var_44 = (min(var_44, ((((arr_4 [i_15]) ? (~192) : var_5)))));
    }
    #pragma endscop
}
