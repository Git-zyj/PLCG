/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (1 | 1719725645);
    var_12 = 14;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_7 [13] [i_0] [i_0] = (0 % 23);
            var_13 = (((-9223372036854775807 - 1) ? var_0 : (arr_6 [i_0])));
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                arr_15 [3] [i_0] [i_0] = (23 + 44);
                var_14 = (min(var_14, -23));
            }
            var_15 = (min(var_15, (((((((var_6 > (arr_0 [i_2]))))) * ((0 ? 14 : 0)))))));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_20 [i_0] [8] = ((((20 ? var_0 : 3467327584781571672))) ? -1 : (min((275295920 ^ -1), (((var_1 ? (arr_13 [i_0] [i_0]) : var_6))))));
            arr_21 [i_0] [i_4] [i_0] = ((((((arr_2 [i_0] [i_0]) ? var_7 : (arr_5 [i_0] [i_0])))) ? ((255 ? -14 : 116)) : (169 | 255)));
            arr_22 [i_0] = (min(((((var_10 ? 235 : var_4)) + ((-1459458284321897609 ? 1 : 32767)))), (-2074208176184137028 != 47437)));
            arr_23 [i_0] [i_0] = 1563899235;
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_16 = (max(var_16, (-4 == var_2)));
            arr_26 [i_0] = ((var_8 | (arr_19 [i_0] [i_0])));
            arr_27 [i_0] [i_0] [i_0] = 9;
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_17 ^= (7 <= -7213646604431299582);
                            var_18 = 6;
                            arr_35 [i_0] [i_0] = (((((((arr_12 [i_5] [i_0] [i_8]) ? (arr_17 [i_0] [i_0] [i_0]) : (arr_17 [18] [i_0] [i_8]))))) || ((max(16451, 31744)))));
                        }
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        var_19 = (((((var_4 >> ((((-923529042555236249 ? -21521 : 65527)) + 21550))))) ? -23 : ((((arr_25 [8] [i_9]) * -29867)))));

        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            arr_42 [i_9] [i_10] = var_4;
            var_20 = 9;
            var_21 = (min(var_21, (((max(1, var_1))))));
            arr_43 [i_10] [i_9] [13] = (((!2147483647) - var_9));

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                arr_46 [i_9] [i_9] = 47927;
                var_22 += ((min((arr_4 [22] [2]), -1046262264)));
                var_23 ^= (((241 ? -1 : (arr_39 [i_9]))));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                var_24 = 39979;
                arr_49 [i_9] [i_12] [i_9] = 158;
                var_25 |= (((((var_1 - (arr_44 [i_12] [i_9])))) ? 8 : (arr_33 [0] [0] [0])));
            }
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            var_26 += (arr_39 [5]);
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    {

                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            arr_62 [i_9] [16] [i_14] [i_15] [i_9] = (133 >> 9);
                            arr_63 [i_9] [6] [i_14] [i_9] [i_9] [5] [i_16] = (!(arr_31 [i_9] [i_13]));
                        }
                        arr_64 [i_9] [i_13] [i_13] [i_9] = (((arr_32 [i_9] [i_9]) ? (-32767 - 1) : (arr_52 [i_9])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
