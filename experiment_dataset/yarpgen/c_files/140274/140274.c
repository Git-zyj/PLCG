/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_17 = (min(var_17, ((min(((448 ? ((((arr_3 [i_0]) * (arr_3 [i_0])))) : -var_14)), var_5)))));
        var_18 += var_5;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((((((var_6 ? var_10 : (arr_4 [i_1])))))) % (((253 ? var_6 : (arr_4 [i_1]))))));
        var_19 = ((+(((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1])))));
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_20 &= ((((arr_4 [i_2 - 1]) ^ (arr_4 [i_2 - 1]))));
        arr_9 [i_2] [i_2] = var_10;
    }

    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_21 = (var_14 | -1);
        var_22 = ((arr_7 [i_3 + 1]) ? ((max(3045, (arr_10 [i_3] [i_3])))) : (((min(var_15, var_6)) / ((((325791783 != (arr_4 [i_3]))))))));

        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_23 = var_7;
                        arr_21 [i_3] [i_5] = var_4;
                        arr_22 [i_3] [i_4] [i_4] [i_5] [i_5] [i_3] = (((-(arr_16 [i_5] [i_3] [i_3] [i_3]))));
                    }
                }
            }
            var_24 = (min(var_24, (((+(((arr_4 [i_3 + 1]) - 25476)))))));
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            arr_25 [i_3] = (i_3 % 2 == zero) ? ((min((arr_19 [i_3] [i_3]), (((!((((arr_10 [i_3] [i_3]) << (((arr_10 [i_3] [i_3]) - 148))))))))))) : ((min((arr_19 [i_3] [i_3]), (((!((((arr_10 [i_3] [i_3]) << (((((arr_10 [i_3] [i_3]) - 148)) + 83)))))))))));
            arr_26 [0] [i_3] [i_7] &= ((((-32767 - 1) ? var_16 : (max(var_6, (arr_15 [i_3] [i_7] [i_3] [14]))))));
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        var_25 = (min(var_25, ((((arr_14 [i_3] [i_10]) ? (min((arr_32 [i_3] [i_8] [i_9] [i_10]), (arr_30 [i_9] [i_8] [i_3]))) : (arr_10 [i_3] [i_10]))))));
                        arr_33 [i_3] [i_8] [i_3] [i_10] = (!var_9);

                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_26 = (~(((min(var_3, var_16)))));
                            var_27 = (((59494 <= (((!(arr_31 [i_11] [i_10] [i_9] [i_8])))))));
                        }
                        for (int i_12 = 4; i_12 < 17;i_12 += 1)
                        {
                            var_28 *= var_12;
                            var_29 = (min((arr_32 [i_8] [i_9] [i_10] [i_3]), var_0));
                            var_30 = (((-(arr_12 [i_3]))));
                        }
                        for (int i_13 = 2; i_13 < 16;i_13 += 1)
                        {
                            var_31 = ((-((((var_4 > (arr_15 [i_3] [i_9] [i_8] [i_3]))) ? ((var_9 ? var_5 : var_11)) : (arr_7 [i_3 - 1])))));
                            arr_40 [i_3] [i_3] = (arr_27 [i_9] [i_8]);
                        }
                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            arr_45 [i_3] [i_8] [i_9] [i_3] [i_14] = var_3;
                            arr_46 [i_3] [i_10] [i_9] [i_10] [i_14] &= ((((min(77, (arr_20 [i_3] [i_10] [i_8] [i_3 - 1])))) ? ((-(arr_17 [i_3 - 1]))) : (((arr_42 [i_3 - 1] [i_3 + 1] [i_3] [i_9] [i_9] [i_9]) ? (arr_17 [i_3 - 1]) : (arr_20 [i_3] [i_10] [i_9] [i_3 + 1])))));
                            arr_47 [i_3] [i_10] [i_10] [i_9] [i_8] [i_3] = ((-77 ? ((8505 ? -78 : 31234)) : (((((-(arr_12 [i_3]))) >= (arr_27 [i_9] [i_3 + 1]))))));
                        }
                        var_32 = (min(var_32, 14290));
                    }
                }
            }

            for (int i_15 = 3; i_15 < 16;i_15 += 1)
            {

                for (int i_16 = 2; i_16 < 18;i_16 += 1)
                {
                    var_33 = (arr_35 [i_3] [i_8] [i_3 - 1] [i_16] [i_3] [i_3] [i_16]);
                    arr_54 [i_3] [i_8] [i_15] [i_3] = (arr_44 [i_3] [i_3] [i_15] [i_3] [i_16]);
                    var_34 = (min(var_34, (((+(min((((arr_37 [i_3] [i_8] [i_16] [i_16] [i_15]) * (arr_41 [i_3] [i_3] [i_8] [i_8] [i_15] [i_16]))), (((arr_18 [i_3] [i_16] [i_15] [i_16] [i_16]) ^ (arr_41 [i_3] [i_15] [i_16] [i_15] [i_8] [i_16]))))))))));
                }
                arr_55 [i_3] [i_3] [i_15] [i_15] = (max(var_8, var_14));
            }
        }
    }
    for (int i_17 = 2; i_17 < 13;i_17 += 1)
    {
        var_35 = (max(var_35, ((((-(arr_23 [i_17] [i_17] [i_17 + 3])))))));
        var_36 = (arr_15 [i_17] [i_17] [i_17] [i_17]);
    }
    var_37 = var_5;
    var_38 = (((var_13 || var_12) << ((((((var_11 ? var_11 : var_0))) && (!var_9))))));
    var_39 ^= var_16;
    #pragma endscop
}
