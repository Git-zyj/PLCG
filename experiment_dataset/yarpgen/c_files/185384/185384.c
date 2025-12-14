/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_5;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((!var_3) || ((max((arr_0 [i_0 + 2] [i_0]), var_10)))));
        var_12 -= ((((((min(var_6, var_2))) && (((var_2 ? var_4 : (arr_0 [i_0 + 2] [i_0])))))) ? (((var_2 && (arr_1 [i_0])))) : ((((arr_0 [i_0 + 2] [i_0 + 2]) < (((var_2 ? var_2 : (arr_1 [i_0])))))))));
        arr_3 [i_0 + 2] = var_1;
        var_13 = (((((var_1 ? (((arr_0 [i_0] [i_0]) ? var_10 : (arr_0 [i_0] [i_0]))) : ((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_4)))))) ? (min(((var_0 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0 + 1]))), var_7)) : var_5));

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_14 = ((-(((28542 - var_9) ? (var_1 || var_2) : var_7))));
            var_15 ^= (arr_7 [i_0] [i_0 + 2] [i_0]);
            var_16 = (((92 && 102) ? var_0 : ((-16434 ? 1681078844 : -49))));
        }
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_17 = ((((min((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_2])))) ? (((arr_9 [i_2] [i_2]) << (((arr_9 [i_2] [16]) - 4157470075257628303)))) : (((arr_9 [i_2] [i_2]) ^ (arr_9 [i_2] [i_2])))));
        var_18 = -8;
        arr_11 [i_2] = (max((((arr_9 [9] [i_2]) ? (arr_8 [i_2]) : ((18 << (1524992444483523873 - 1524992444483523856))))), 65518));
    }
    for (int i_3 = 4; i_3 < 19;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            arr_16 [i_4] = min(((((arr_12 [i_3 - 2]) < 236))), ((var_5 ^ (51 - var_10))));
            var_19 |= (0 / 3);
        }
        var_20 = ((var_2 ? (((arr_12 [i_3 - 1]) ? (arr_12 [i_3 + 1]) : ((max(var_8, (arr_15 [i_3] [i_3] [i_3])))))) : (min((((arr_12 [i_3]) - (arr_12 [10]))), ((min((arr_12 [i_3 - 2]), (arr_15 [4] [i_3] [0]))))))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_21 &= (arr_15 [2] [i_3] [i_3 + 1]);
            var_22 = (max(var_22, (((((max((((-(arr_17 [i_3])))), (((arr_12 [i_3]) ? var_8 : (arr_14 [i_3])))))) ? ((max(var_3, (arr_15 [i_3] [i_3] [i_3])))) : ((((max(-13012, -103))) - var_0)))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    {
                        arr_28 [i_3] [i_6] [i_6] [i_8 - 1] = (arr_13 [i_8 - 1]);
                        var_23 *= arr_15 [i_8 - 1] [i_7] [i_3];
                        arr_29 [i_3 - 3] [17] [i_6] [i_8] = (((arr_17 [i_7]) ? (arr_26 [i_8] [i_7 + 1] [i_8 + 1] [i_7] [i_7 + 1]) : (!var_6)));
                        var_24 = (min(var_24, var_7));
                    }
                }
            }

            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                var_25 += var_1;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 18;i_11 += 1)
                    {
                        {
                            arr_37 [i_3] [i_6] [i_3] [i_10] [i_6] [13] [i_9] = ((((var_9 ? var_3 : var_6)) != var_3));
                            arr_38 [i_6] = ((-var_3 ? var_8 : var_0));
                        }
                    }
                }
                arr_39 [i_9] [i_6] [i_9] [i_9] = var_0;
            }
            for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
            {
                var_26 = (arr_13 [i_12]);
                arr_42 [i_3] [i_3] [i_3] [i_6] = ((!(arr_36 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 3] [i_12] [i_12])));
                var_27 = ((var_9 >= (arr_25 [i_3 + 1] [i_6] [i_12])));
            }
            for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 2; i_14 < 18;i_14 += 1)
                {
                    var_28 = arr_40 [i_3 + 1] [i_3] [i_3 - 3] [i_3 - 3];
                    var_29 = (((arr_12 [i_14 - 2]) | 28));
                }
                for (int i_15 = 3; i_15 < 17;i_15 += 1) /* same iter space */
                {
                    arr_51 [i_6] [i_13] [i_6] [i_6] = (arr_43 [i_6] [i_6] [i_6] [i_15 + 2]);
                    var_30 = var_5;
                    arr_52 [i_15 - 1] [i_6] [i_6] [4] [i_13] [i_6] = var_8;
                }
                for (int i_16 = 3; i_16 < 17;i_16 += 1) /* same iter space */
                {
                    var_31 = ((~(arr_45 [i_3 - 2] [4] [i_16] [i_6])));
                    arr_55 [i_6] [i_3] [i_6] [i_6] = (arr_32 [i_3] [i_6] [i_16 + 3] [i_3 - 2] [i_6] [i_13]);
                    var_32 = (arr_34 [i_6] [i_3 - 4] [i_13]);
                    var_33 = var_5;
                }
                var_34 -= ((((((arr_40 [i_6] [i_3] [i_6] [i_6]) % var_5))) ? (var_8 * -27172) : var_6));
            }
            for (int i_17 = 1; i_17 < 16;i_17 += 1)
            {
                var_35 = (arr_22 [i_6]);
                var_36 = (arr_54 [i_6] [i_6] [i_6] [i_17]);
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 18;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        {
                            arr_64 [i_3] [i_6] [1] [i_6] [i_19] = (((arr_34 [i_3 - 2] [i_17 + 2] [i_18 - 1]) & var_3));
                            arr_65 [i_19] [i_6] [i_17] [i_6] [i_3] = var_9;
                            arr_66 [i_3 - 3] [i_6] [i_17] [i_6] [i_18 + 2] [i_3] [i_6] = var_2;
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 20;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 20;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 20;i_22 += 1)
                    {
                        {
                            var_37 = ((var_8 ? (arr_27 [i_20] [i_6] [i_6] [i_3 - 2]) : (arr_27 [i_21] [i_6] [i_6] [i_3 - 4])));
                            var_38 = ((-(arr_27 [i_3 + 1] [i_6] [i_6] [i_3 - 2])));
                            var_39 = var_3;
                            var_40 = ((+((var_1 ? (arr_50 [i_6] [i_21]) : var_5))));
                        }
                    }
                }
            }
        }
    }
    var_41 = var_7;
    var_42 = var_8;
    var_43 = var_2;
    #pragma endscop
}
