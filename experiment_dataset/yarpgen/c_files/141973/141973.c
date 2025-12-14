/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (min((max(((min(var_4, 1))), var_2)), ((min(var_4, (!1))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = 1;
        var_13 ^= ((((255 <= ((var_6 ? (arr_2 [i_0]) : var_1)))) ? (((~(arr_0 [i_0] [i_0])))) : var_10));
        var_14 ^= ((~((121 ? 1 : 117))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] = (((((((min(var_8, 1))) ? -96 : (arr_4 [i_1] [i_1])))) ? 1 : (min((!var_10), (min(11, 1))))));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_10 [i_1] [i_1] = ((-((var_5 + (1 - var_9)))));
            var_15 = ((+((((min((arr_8 [i_2]), (arr_8 [i_2])))) ? ((var_7 ? var_10 : (arr_4 [i_1] [i_1]))) : 7335506067612369852))));
            var_16 = (max(var_16, 9));
            var_17 = ((((arr_4 [i_1] [i_1]) ? 179 : (arr_0 [i_1] [i_2]))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_18 *= 4232633517682091697;
                        arr_17 [i_4] [i_2] [i_2] [i_4] = (min(((((-9220 || -96) > var_1))), ((min(-199840303895431691, (arr_3 [i_4]))))));
                        var_19 = ((((-86 ? 1 : 1))) ? var_4 : ((9 + (~-13))));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            arr_31 [i_1] [i_1] [i_6] [i_1] = ((4232633517682091697 ? 96 : 1));
                            var_20 = (!(~-5505));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                arr_34 [i_1] [i_1] = (~5494);
                var_21 = (min(var_21, (((((((arr_11 [i_1] [i_5]) + var_2))) ? 11111238006097181764 : -var_8)))));

                for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                {
                    var_22 *= (arr_7 [i_5] [i_9]);
                    var_23 = var_8;
                    arr_39 [i_1] [i_9] = (arr_24 [i_1]);
                    arr_40 [i_1] [i_5] [i_1] [i_9] [i_1] = 44;
                }
                for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                {
                    var_24 = ((((((arr_19 [i_11]) + var_5))) || (~var_8)));

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_48 [i_11] = (arr_2 [i_5]);
                        arr_49 [i_5] [i_11] [i_5] [i_11] [i_5] [i_5] [i_1] = (!var_7);
                        var_25 = (min(var_25, (((60030 ? 1 : -1514919382414006497)))));
                    }
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        arr_53 [i_11] = (~var_6);
                        var_26 = var_4;
                        var_27 = (!-66);
                    }
                    arr_54 [i_11] [0] [i_5] [i_11] = (8 * var_9);
                    var_28 = 2677148710;

                    for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
                    {
                        var_29 = 1;
                        var_30 = ((!(arr_26 [i_11] [i_5])));
                    }
                    for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
                    {
                        var_31 = (((1617818590 - 1) ? 102 : var_2));
                        var_32 ^= var_0;
                        var_33 = var_6;
                    }
                }
                var_34 = (((3172871185 ? 89 : var_5)));
            }
        }
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            var_35 = (max(((((-(arr_44 [i_16] [i_16] [i_16] [i_1]))) + -104)), (arr_51 [i_1] [i_1] [i_1] [i_16] [i_16])));
            arr_64 [i_1] [i_16] = (max((~1), 2306210996887998507));
            var_36 = var_10;
        }
    }
    for (int i_17 = 1; i_17 < 1;i_17 += 1)
    {
        var_37 = (-4232633517682091686 == var_5);
        arr_69 [i_17] = ((((((((min(1, var_3))) < (var_3 && var_7))))) <= ((((-6148481356108883638 ? 4243599871258067026 : -6599126936332849551)) - ((min(5505, (arr_29 [i_17] [i_17] [2] [i_17 - 1] [i_17 - 1]))))))));
    }
    #pragma endscop
}
