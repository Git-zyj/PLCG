/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 += var_8;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_1] [i_0] = ((+((((max((arr_0 [i_0]), 15313))) >> (((max(65527, var_10)) - 2416247814532033451))))));
            var_20 = (arr_4 [i_0] [i_1] [i_1]);
            var_21 = (max(var_21, (((((max((min(65529, 7355)), (!var_9)))) ? (((max(var_12, var_10)) % ((((arr_1 [i_0]) ? var_13 : (arr_0 [i_1])))))) : (var_16 / 183))))));
        }
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 4; i_3 < 13;i_3 += 1)
            {
                arr_11 [i_0] [i_2] [i_2] [i_0] |= (((min(((max(var_2, var_14))), (~15312))) | (arr_8 [i_2])));
                var_22 *= var_15;
                var_23 = (((max((max(var_17, (arr_3 [i_3] [i_2] [i_0 - 2]))), ((~(arr_9 [i_0] [i_3 - 2]))))) ^ ((~((320721591 ? var_13 : (arr_6 [10] [i_2])))))));
                arr_12 [i_0] [i_2] [i_3] = var_0;
            }
            var_24 = var_8;
            var_25 *= (((((-(arr_2 [i_2] [i_0])))) > ((var_16 ? 1045902482 : (arr_3 [i_2 - 1] [i_0 - 2] [i_0 - 2])))));
            var_26 *= ((!((min((((~(arr_6 [i_2] [i_0 - 1])))), (arr_1 [i_0 - 2]))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_27 = 2154902720;

                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            arr_20 [i_0] [i_4] = 1;
                            arr_21 [i_4] [i_2] [i_4] [i_5] [i_6] = (max((min((arr_4 [i_0] [i_0 - 1] [i_4]), (arr_16 [i_0] [i_0 - 1]))), (((!((((-127 - 1) ? 13649 : var_8))))))));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_28 = var_6;
                            var_29 = ((var_12 >> (((((((arr_17 [i_2 - 1] [i_0 - 1] [i_0] [i_0]) + 2147483647)) >> (3974245704 - 3974245699))) - 67108693))));
                            var_30 = (((((3312763732 >> (var_2 - 48772)))) - (max(var_5, (arr_16 [i_0 - 2] [i_2])))));
                            var_31 *= ((0 ? (!1) : (min(var_5, ((((arr_18 [i_0] [i_2] [i_4]) > var_2)))))));
                        }
                    }
                }
            }
        }
        arr_24 [i_0] [i_0] = ((var_8 >= (((15307 ? var_2 : (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {

                    for (int i_10 = 3; i_10 < 13;i_10 += 1)
                    {
                        arr_32 [i_0] [i_10] [i_8] = (max(((((((arr_19 [i_0] [i_10] [i_8] [i_9] [7]) ? (arr_28 [i_0 + 1] [i_0] [i_0] [i_0 - 1]) : var_9))) ? (min((arr_31 [i_10] [i_8] [i_9]), 3543)) : (((max(21, 3056)))))), var_2));
                        arr_33 [i_10 - 3] [i_9] [i_10] [i_10] [i_0] [i_0 - 2] = (((min((((-(arr_1 [i_0])))), 31))) ? ((~(arr_23 [i_10] [i_10] [i_10] [i_10] [i_10 - 1] [i_10] [i_10 + 1]))) : ((max(var_16, (((arr_22 [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]) & (arr_9 [i_10 + 1] [i_8])))))));
                    }
                    var_32 = (arr_2 [i_9] [i_0]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_33 *= (min(((((var_0 ? 1 : (arr_36 [i_8]))) ^ ((min((arr_29 [i_12]), (arr_15 [i_0] [i_8] [i_9] [i_11] [i_0])))))), var_11));
                                arr_40 [i_0] [i_8] [i_9] [i_11] = 1;
                                arr_41 [1] [i_0 - 1] [i_8] [i_9] [i_9] [i_9] [1] = 352319031;
                            }
                        }
                    }
                    var_34 = ((var_16 ? (((arr_7 [i_0]) ? (min((arr_16 [i_0] [i_0]), var_2)) : 1)) : 15734958176592333229));
                }
            }
        }
    }
    var_35 = (max(var_10, ((min(((min(5328, 38086))), ((var_7 ? 3974245697 : 58)))))));
    #pragma endscop
}
