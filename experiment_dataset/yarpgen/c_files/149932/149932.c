/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_14 = ((var_12 && (((arr_3 [i_0]) && var_8))));
            var_15 = max(((max(var_12, (arr_0 [i_0])))), (max(2108451867, (max(2225429569, 2069537737)))));
            arr_4 [i_0] [i_0] = 262144;
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_16 = (((min(var_10, (arr_6 [i_0 + 2])))) ? 679129979 : (min(((2104178828 ? 2455368616 : 2840896804)), (arr_0 [i_2]))));
            var_17 *= var_1;

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_18 = (3591723865 > 3296941418);

                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    var_19 = var_0;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_20 = (max(var_20, var_3));
                        var_21 = var_7;
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        arr_18 [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_0] [i_0 - 1] = ((arr_11 [i_2] [0] [i_4] [16]) ? ((((var_3 || (arr_13 [i_0]))))) : var_4);
                        var_22 = var_1;
                    }
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    arr_21 [i_0] [i_2] [i_0] [i_7] = (+(((arr_0 [i_0]) * (arr_0 [i_3]))));
                    arr_22 [i_2] [i_3] [i_0] = (((((max(3687877283, 3)) & ((398271535 ? 2108451856 : 1562172255))))) ? (arr_1 [i_0]) : ((~(arr_7 [i_0 - 1] [i_2]))));
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_23 |= (arr_3 [16]);
                    var_24 = (1846596751 ? 17 : 2667130806);
                    var_25 = (max(var_25, (arr_13 [i_8])));
                }
                /* vectorizable */
                for (int i_9 = 2; i_9 < 17;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_26 = (max(var_26, (((var_2 & 3976751339) ? (arr_13 [i_0 + 3]) : (arr_19 [i_9 + 2] [i_2] [i_3] [i_0 + 1] [i_3])))));
                        var_27 = (max(var_27, ((var_6 ? (((arr_12 [i_0] [i_0]) << (3168938440 - 3168938434))) : 3591723876))));
                        var_28 = (max(var_28, ((~((-(arr_26 [i_10] [i_10] [i_10])))))));
                    }
                    for (int i_11 = 2; i_11 < 18;i_11 += 1)
                    {
                        var_29 = arr_32 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 2];
                        var_30 = (~var_9);
                        var_31 = (2069537739 << (2840896792 - 2840896771));
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        arr_37 [i_12] [i_0] [i_9] [3] [i_0] [i_0] = 2922235552;
                        arr_38 [i_0] [13] [i_2] [i_3] [i_0] [i_0] = (3591723856 ? var_6 : 1);
                        var_32 = ((3896695757 && (arr_36 [i_0] [i_0] [17])));
                    }
                    var_33 ^= 293447862;
                    arr_39 [i_0 + 2] [i_2] [i_3] [i_0] = 2225429543;
                    var_34 = var_7;
                }
            }
            /* vectorizable */
            for (int i_13 = 1; i_13 < 18;i_13 += 1)
            {
                var_35 &= (1260197201 ? 4294967295 : 2922235566);
                var_36 = (min(var_36, ((((arr_16 [i_13 - 1] [i_0 + 2]) >= (arr_16 [i_0 - 1] [i_2]))))));
            }
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 18;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    {
                        var_37 = (-3896695751 % (arr_9 [i_0] [i_15]));
                        var_38 = (2190444650 ? (max((max(var_9, var_8)), var_0)) : 1073733632);
                        var_39 = min((~var_1), ((((arr_41 [6] [i_0 + 2] [i_0 + 3] [i_14 + 1]) <= (arr_26 [i_0] [i_0 + 1] [i_0 + 3])))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_16 = 1; i_16 < 18;i_16 += 1)
        {
            var_40 = (max(var_40, (~3800703555)));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 20;i_18 += 1)
                {
                    {
                        var_41 |= (((arr_19 [i_0] [i_16 + 2] [i_17] [i_17] [i_18]) || (arr_19 [i_0 + 1] [i_0] [i_0] [i_0 + 2] [i_0 + 3])));
                        arr_56 [i_0] [i_16] [i_17] [i_17] = (-(arr_2 [i_0 + 3] [i_17]));
                    }
                }
            }
            var_42 = (((-(arr_29 [i_0] [i_0] [i_16] [i_16] [i_16]))) >> (var_10 - 1256107533));
            var_43 += 607721442;
            var_44 = (min(var_44, var_10));
        }
        var_45 *= arr_16 [i_0 - 1] [i_0];
        var_46 = (~857345267);
    }
    #pragma endscop
}
