/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~(max(((var_10 ? 142 : var_3)), (max(var_3, var_1)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_14 = (((-5117 >= 15) ? var_12 : 17130645685840839499));
        var_15 = ((9223372036854775807 + ((((max(17130645685840839496, (arr_0 [i_0] [i_0])))) ? ((-5007740100982852656 ? 255 : 17130645685840839499)) : -var_2))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_16 = ((var_3 * ((((-5007740100982852656 < 44634) ? (!-1) : (var_0 > var_3))))));

            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                var_17 = (min(var_17, 1316098387868712116));
                var_18 = (min(var_18, (min(((((((var_11 ? var_8 : var_10))) ? var_6 : 44624))), (((arr_6 [i_2]) ? var_6 : (arr_6 [2])))))));
                var_19 = (((((((var_9 | (arr_1 [i_2] [i_3 - 3])))) ? var_12 : (max(13710, var_3)))) >= (((-(9223372036854775807 && var_8))))));
            }
            var_20 = ((((max(((min(var_1, var_4))), var_11))) ? var_0 : (max(((((arr_2 [i_2]) ? var_8 : var_1))), (arr_6 [i_1])))));
            var_21 = (arr_4 [i_2]);
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 2; i_5 < 24;i_5 += 1)
            {
                var_22 = (min(var_22, (((var_8 ? var_3 : ((max((arr_6 [i_5 + 1]), (arr_6 [i_5 - 2])))))))));
                var_23 -= (((127 == -13710) ? (arr_10 [i_5 - 2] [i_5 - 1] [i_5 - 1] [i_5]) : ((var_6 ? -9223372036854775798 : (arr_10 [i_5] [i_5] [i_5 - 2] [i_5])))));
            }
            for (int i_6 = 3; i_6 < 23;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    var_24 = ((55776 != ((127 ? -5007740100982852663 : var_4))));
                    arr_20 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = var_10;
                    arr_21 [i_1] [i_4] [i_6] [i_7] = (min((arr_15 [i_6 - 2] [i_6 - 2]), ((~(arr_17 [i_7 + 1] [i_7] [i_7 + 1] [i_7])))));
                }
                var_25 = (((((25442 > 3079065642) % (1252513242 % var_2))) >= (((((7986890029032899302 ? var_7 : 65535)) & 21354)))));

                for (int i_8 = 2; i_8 < 23;i_8 += 1)
                {
                    var_26 = (((min(((var_12 ? var_6 : 32767)), (var_8 >= 3079065642))) / var_0));
                    var_27 *= ((((((arr_23 [i_8] [i_6 + 1] [i_6 + 1] [i_1]) ? (arr_23 [i_8] [i_8] [i_6 - 1] [i_6]) : var_0))) ? var_4 : (min(241, var_10))));
                }
                for (int i_9 = 1; i_9 < 24;i_9 += 1)
                {
                    arr_28 [i_1] [i_4] [3] [4] [12] = (max((((max(var_4, 127)))), (((arr_10 [i_1] [i_4] [i_6] [i_9]) ? ((5007740100982852648 ? 131071 : 81)) : var_3))));
                    var_28 = -421263538468616494;
                    var_29 ^= (var_8 != -26379);
                }
                arr_29 [i_4] [i_4] [i_1] [i_6] = (max(((max((var_11 % 421263538468616483), ((((arr_1 [i_1] [i_6 + 1]) / var_7)))))), (arr_10 [i_1] [i_4] [i_6] [i_6])));
            }
            /* vectorizable */
            for (int i_10 = 3; i_10 < 23;i_10 += 1) /* same iter space */
            {
                var_30 = (min(var_30, -var_12));
                var_31 = (((~var_12) > var_6));
                var_32 = ((((var_1 ? (-2147483647 - 1) : var_6)) > (1 > -5007740100982852659)));
            }
            for (int i_11 = 3; i_11 < 23;i_11 += 1) /* same iter space */
            {
                var_33 = (min(var_33, (((!(((arr_11 [i_1]) < (((arr_5 [i_1]) ? 0 : var_9)))))))));
                var_34 = arr_22 [i_4] [i_4] [i_4] [i_4];
                var_35 = ((((52984 > (arr_2 [i_11 - 1]))) ? 9 : -1));
            }
            var_36 = (min(((var_4 + ((max(var_6, var_0))))), (((arr_31 [i_1] [2] [i_4]) ? (arr_8 [i_1] [i_1] [i_1]) : (arr_31 [i_1] [i_1] [i_1])))));
            var_37 = ((((((-1 || 6707060101716890138) ? (((arr_26 [i_1] [i_1] [i_1]) ? var_4 : var_6)) : ((max(var_12, var_1)))))) || ((((arr_0 [i_1] [i_4]) ? var_2 : (arr_0 [i_4] [i_4]))))));
            var_38 = (min(var_38, (((((min((arr_19 [i_1] [i_4] [i_4] [i_4] [i_4] [i_4]), ((max(var_10, var_10)))))) ? (((!(((4294967275 ? (arr_4 [i_4]) : var_3)))))) : var_2)))));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
        {
            var_39 = (arr_12 [i_1] [i_12]);
            var_40 = (~5199);
        }
        for (int i_13 = 1; i_13 < 22;i_13 += 1)
        {
            var_41 = (-5153008805961676439 > 20);
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    {
                        var_42 = (min((var_4 == var_11), (((arr_41 [i_13 + 1]) ? (max(var_9, (arr_1 [i_1] [15]))) : (((812899668708601565 ? -421263538468616494 : var_2)))))));
                        var_43 &= ((((7419338516647131792 / ((var_10 + (arr_16 [i_14] [i_14]))))) > ((((max(var_7, var_4))) % ((var_5 ? var_8 : var_8))))));
                        var_44 = (min(var_44, var_11));
                    }
                }
            }
        }
        arr_46 [i_1] = min((-26379 > -100176604578714022), (((var_9 ? var_5 : var_3))));
        var_45 = var_12;
    }
    for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
    {
        var_46 = var_3;
        var_47 = ((((((((var_0 ? 255 : (arr_26 [i_16] [i_16] [i_16])))) ? -1257602719 : ((5199 ? var_11 : var_10))))) ? (((~var_1) ? var_5 : 719238587)) : (arr_8 [i_16] [10] [i_16])));
    }
    #pragma endscop
}
