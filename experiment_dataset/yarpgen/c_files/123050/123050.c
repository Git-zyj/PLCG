/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = min((((4071377281 * var_8) / ((4071377291 ? var_2 : var_15)))), var_4);
                var_18 = (223590010 ^ var_10);
            }
        }
    }
    var_19 = (min((max(((4071377301 ? var_13 : var_15)), var_15)), (max(var_5, (min(223589995, var_11))))));
    var_20 = (((((((min(var_15, 4071377287))) ? var_14 : (max(246, 15))))) ? 133279072 : ((-(min(4071377286, 4071377275))))));
    var_21 -= var_0;

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_22 = (((((var_7 / 205) ? 223590010 : var_14)) == var_9));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    {
                        var_23 = ((var_3 & (177 ^ 180)));
                        var_24 = 223590004;
                        var_25 = var_10;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_26 = (min(var_26, 4071377300));

        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            arr_23 [i_7] [i_6] = (!var_15);
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        var_27 = (min(var_27, ((3453567220 ? 4071377290 : (!var_7)))));
                        arr_28 [11] [13] [i_7] [0] [i_8] [i_9] = var_1;
                        var_28 = (((((0 - (arr_24 [i_8])))) ? var_12 : ((2995544185 ? 67973346 : 0))));
                        arr_29 [i_6] [i_8] [11] [i_7] [i_7] = var_7;
                    }
                }
            }
        }
        for (int i_10 = 1; i_10 < 23;i_10 += 1)
        {
            var_29 = 0;
            var_30 = var_16;
            arr_32 [i_10] = (arr_19 [i_6]);
            arr_33 [16] [i_10] = (((~var_4) ? var_5 : 1521033599));
        }
        arr_34 [7] = 0;
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 13;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            arr_39 [i_11 + 1] = (-(var_3 & var_1));
            var_31 = ((1 ? 278864420 : 1000694084));
        }
        var_32 = ((-var_8 ? ((0 ? 133279072 : 102)) : (var_11 & 2771406364)));

        for (int i_13 = 1; i_13 < 14;i_13 += 1)
        {
            arr_42 [i_13] [i_13] [i_13] = (((((var_9 ? 53 : var_11))) ? -var_8 : 129798827));
            var_33 = 1299423131;
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 13;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    {
                        arr_50 [i_11 - 2] [i_13 - 1] [i_14] [i_15] [i_11] [i_13] = (((4294967295 & 251) ? (!var_4) : (223589995 % 4281133167)));
                        arr_51 [i_13] [i_14 + 2] [i_13] [i_13] = 1155944902;
                        var_34 = (!616144537);
                    }
                }
            }
            var_35 |= 1354713379;
            arr_52 [i_13] = (3011947170 ? 53 : 914887986);
        }
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {
            arr_57 [i_16] [i_11] = (((arr_30 [i_11 - 3] [i_16] [i_16]) ? var_9 : var_5));
            arr_58 [i_16] = 1;
            arr_59 [i_16] [i_16] [i_16] = arr_53 [i_11] [0] [i_16];
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 15;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {
                {

                    for (int i_19 = 0; i_19 < 15;i_19 += 1)
                    {
                        var_36 = 0;
                        var_37 = ((136 && (!1)));
                    }
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        var_38 |= (arr_65 [i_11 + 1] [i_11] [i_11] [i_11]);
                        arr_71 [i_20] [i_17] [i_11] = ((((37641135 ? 244 : (arr_45 [i_20] [i_17]))) * (120 / 227)));
                    }
                    for (int i_21 = 2; i_21 < 14;i_21 += 1)
                    {
                        var_39 -= (((28 != var_10) - (arr_38 [i_21 + 1] [i_11 + 1] [i_11 - 2])));
                        arr_75 [i_21] [2] [i_17] [8] = (((((var_3 ? var_6 : var_5))) ? (~var_7) : 1415541079));
                        var_40 = (~var_3);
                    }
                    for (int i_22 = 0; i_22 < 15;i_22 += 1)
                    {
                        var_41 = (max(var_41, var_0));
                        var_42 = var_7;
                    }
                    arr_78 [i_18] [6] [13] = var_2;
                }
            }
        }
    }
    for (int i_23 = 0; i_23 < 25;i_23 += 1)
    {
        arr_81 [i_23] |= ((var_14 ? (min(3092884347, var_9)) : var_16));
        var_43 = min(3204737256, 2161456357);
        var_44 = (((((arr_22 [i_23] [i_23] [i_23]) * (1138852818 / 4049110889))) / ((var_0 ? (min(1913854892, 914887994)) : (max(var_14, 30))))));
        var_45 = (504132721 ? 7 : 2133510939);
    }
    #pragma endscop
}
