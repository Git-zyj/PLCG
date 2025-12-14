/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        var_19 = arr_0 [i_0];
        var_20 *= var_11;
        var_21 = (arr_1 [i_0]);
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                {

                    for (int i_4 = 3; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        var_22 |= (min(-var_16, (arr_5 [i_1 - 1])));
                        arr_14 [i_4] [i_2] [22] [i_2 + 1] = (max(((max(var_0, -7))), (arr_9 [1] [i_3 - 1] [i_3 - 1])));
                    }
                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        arr_19 [1] [21] [11] [18] [i_5 + 3] = ((((var_0 >> (var_17 - 1325018459))) ^ (8258297379348286720 & var_16)));
                        var_23 = ((var_14 ? (arr_5 [1]) : (arr_16 [i_2 + 3] [i_3 + 2] [i_3 + 1] [i_5 + 1] [i_5 - 1] [i_5 + 3])));
                        var_24 -= ((-(((arr_10 [8] [18] [1]) & var_14))));
                        arr_20 [i_1 + 2] [1] [3] [i_5] [14] = (10610 ? var_3 : 10188446694361264895);
                        arr_21 [i_1 + 2] [i_1 - 2] [1] [i_1] = (var_13 + var_7);
                    }
                    var_25 = (min(var_25, var_4));
                    var_26 = (arr_7 [i_1 - 2]);
                }
            }
        }

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_27 = (max(var_27, ((((min((arr_3 [i_1 - 1]), (var_6 & 10188446694361264896))) >= (~8258297379348286701))))));
            var_28 = (((var_15 + 2147483647) << (var_1 - 20613)));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            arr_26 [15] [17] = -var_10;
            arr_27 [16] = ((10188446694361264909 < ((var_8 ? 8258297379348286701 : 1072398480))));
            var_29 = var_4;
        }
        arr_28 [21] = (1 % -1);
        var_30 = ((max((~var_11), 1244275745)));
    }
    for (int i_8 = 2; i_8 < 21;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    arr_37 [2] [1] [6] [i_8] = (8258297379348286698 * 32640);
                    var_31 = (max(((((((arr_23 [9] [i_9 - 1]) > var_17))) - (arr_10 [11] [3] [i_10]))), ((-(arr_3 [i_8 + 1])))));
                }
            }
        }
        arr_38 [i_8] = ((var_2 ? ((64 ^ (var_8 != 3222568816))) : ((min((arr_33 [i_8] [i_8 - 1] [i_8 - 1]), (arr_33 [i_8] [0] [i_8]))))));
    }
    var_32 = (max(var_32, var_0));

    /* vectorizable */
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        arr_41 [3] = var_12;
        var_33 *= (((arr_29 [i_11] [18]) - (arr_29 [i_11] [i_11])));
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        arr_44 [12] [i_12] = arr_3 [5];
        var_34 = (min(var_34, (arr_10 [i_12] [i_12] [i_12])));

        /* vectorizable */
        for (int i_13 = 2; i_13 < 15;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {

                for (int i_15 = 2; i_15 < 15;i_15 += 1)
                {
                    var_35 |= (arr_35 [i_12] [i_14] [i_13] [i_12]);
                    var_36 -= var_8;
                    var_37 ^= -var_17;
                }
                for (int i_16 = 0; i_16 < 16;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        var_38 = (max(var_38, 30047));
                        arr_58 [i_13 - 2] [i_13 - 2] [i_14] [i_16] [i_13 - 2] [i_14] = ((((~(arr_32 [13] [0]))) < (arr_5 [i_13 - 1])));
                        var_39 = ((-((((arr_49 [i_12] [i_12] [1] [1] [i_12]) && var_0)))));
                    }
                    var_40 ^= (((arr_24 [i_13 - 2]) || 3708171436816269975));
                }
                arr_59 [9] [1] [i_14] [1] = (((arr_52 [i_13] [i_14] [i_13 + 1] [9]) ? (arr_15 [i_12] [i_13] [i_14]) : (arr_7 [20])));
            }
            for (int i_18 = 2; i_18 < 14;i_18 += 1)
            {
                var_41 = (-0 || (((var_7 ? var_8 : var_3))));
                var_42 = (max(var_42, (var_14 || var_8)));
                var_43 *= (((-1 > (arr_9 [1] [i_13 - 1] [i_18 + 1]))));
            }
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 16;i_19 += 1)
            {
                for (int i_20 = 3; i_20 < 14;i_20 += 1)
                {
                    {
                        var_44 |= (((arr_9 [i_12] [i_19] [1]) ? (10188446694361264887 - 264241152) : 2863));
                        var_45 ^= 1337;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 16;i_21 += 1)
        {
            var_46 = var_0;
            arr_71 [i_21] = var_6;
            var_47 += (arr_11 [i_12]);

            for (int i_22 = 1; i_22 < 15;i_22 += 1) /* same iter space */
            {
                var_48 = (max(var_48, var_7));
                arr_74 [i_21] [i_22 - 1] [13] = -8;
            }
            for (int i_23 = 1; i_23 < 15;i_23 += 1) /* same iter space */
            {
                arr_77 [i_21] [i_21] = (((var_5 * var_9) + var_17));
                var_49 = (min(var_49, ((((arr_60 [i_23] [i_23 + 1] [i_23 + 1]) + ((~(arr_55 [i_23]))))))));
                var_50 = (min(var_50, var_12));
            }
        }
    }
    for (int i_24 = 0; i_24 < 21;i_24 += 1)
    {
        arr_80 [i_24] = (min(var_2, (max((!var_17), (arr_33 [i_24] [18] [i_24])))));
        var_51 -= 52244;
    }
    for (int i_25 = 0; i_25 < 23;i_25 += 1)
    {
        arr_83 [i_25] [i_25] = var_15;
        arr_84 [20] [15] = (arr_32 [i_25] [12]);
        var_52 = ((-(arr_6 [17])));
    }
    #pragma endscop
}
