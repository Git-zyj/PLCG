/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 -= (max(var_0, (max((arr_1 [i_0]), (arr_0 [i_0] [i_1])))));
                var_17 = (min(6192706255237260523, ((min(var_11, var_3)))));
            }
        }
    }
    var_18 ^= (-32767 - 1);

    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {
        arr_6 [i_2] = (min(((var_7 ? 0 : (min(var_8, 4294443008)))), (arr_5 [i_2 - 4])));
        var_19 ^= ((((max((arr_4 [i_2 - 1]), var_0))) ? (min(var_10, (arr_4 [i_2 + 1]))) : (((arr_4 [i_2 - 1]) ? (arr_4 [i_2 + 1]) : (arr_4 [i_2 + 3])))));
        var_20 = (((arr_5 [6]) ? ((~((-(arr_5 [i_2 + 1]))))) : (-19791 < var_5)));

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_11 [i_2] [i_3] [i_3] &= (min((arr_8 [i_3] [i_2] [i_2]), ((~(arr_5 [i_2 - 3])))));
            var_21 = (max((arr_10 [i_2 - 4] [i_2 - 2]), -1037861802));
            var_22 = var_7;
            var_23 = (max(var_23, -0));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            var_24 = (max(var_24, (((!(arr_10 [i_2 - 3] [i_2 + 1]))))));
            var_25 = var_11;
            arr_14 [i_4] [i_4] [i_2] |= ((arr_4 [i_2 - 3]) ? (~var_7) : ((((arr_13 [i_4] [i_4] [i_4]) ? (arr_9 [i_2] [3] [i_2]) : (arr_5 [i_4])))));
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        var_26 = (max(var_26, (((!((!((1340060680 || (arr_17 [i_2] [i_5]))))))))));
                        arr_25 [i_2] [i_5] [i_5] [i_7] [i_7] = ((~(((arr_24 [i_2 - 4] [i_2 + 3] [i_2 - 4] [i_2 - 4]) ? (arr_24 [i_2 - 4] [i_2 + 3] [i_2 - 4] [i_6]) : (arr_24 [i_2 - 4] [i_2 + 3] [i_2 - 4] [i_2 + 3])))));
                    }
                }
            }
            var_27 -= ((-(((arr_21 [i_2 - 4] [i_2 - 4]) ? (arr_13 [i_5] [i_2 + 3] [i_2 + 3]) : (arr_21 [i_2 - 4] [i_2 - 4])))));
            var_28 = ((47382 + (((min(8679056683044285663, 3597505380630483724))))));
            var_29 = (82 == 4294443008);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    {
                        var_30 = (min((arr_18 [i_2] [i_9] [i_2 + 2] [i_9]), ((-30487 ? (arr_13 [i_2 + 3] [i_2 - 4] [i_2 - 2]) : (arr_21 [i_2 + 3] [i_2 - 4])))));
                        var_31 = (min(((4294443015 ? (arr_12 [i_2 + 2]) : (((arr_20 [i_2] [i_2 + 2]) ? 250 : 3597505380630483724)))), (max(50, (arr_23 [i_8] [i_5])))));

                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            var_32 = (((((((min(var_5, var_3))) ? (!-15653) : 11965))) ? ((-(arr_33 [i_9] [i_5] [i_5] [i_2 - 2] [i_2]))) : ((-127 + (((arr_19 [11] [i_5] [i_5] [i_5]) + var_8))))));
                            var_33 = (arr_29 [i_5] [i_5] [i_5]);
                            var_34 = min(((((arr_32 [i_2 - 2] [i_8] [i_10] [i_10]) ? (arr_24 [i_2 - 3] [i_2] [i_2] [i_8]) : (arr_33 [i_2 + 2] [i_2 + 2] [2] [i_8] [i_8])))), 14849238693079067892);
                            var_35 = min(7, 1705757518);
                        }
                    }
                }
            }
        }
        var_36 = (min((((-(arr_8 [i_2 - 4] [i_2 - 4] [i_2])))), (var_0 * 17983)));
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        var_37 = (((arr_36 [2] [2]) ? (min((arr_37 [i_11]), 524288)) : ((((9767687390665265930 && (arr_37 [i_11])))))));
        var_38 = ((((((((var_5 ? var_12 : 6898997170728718850))) ? -17040559472020467128 : (arr_36 [i_11] [i_11])))) ? var_8 : var_4));
        var_39 = ((+(((arr_36 [i_11] [13]) + -88))));
    }
    var_40 = var_14;
    #pragma endscop
}
