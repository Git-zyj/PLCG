/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_12 = (i_0 % 2 == 0) ? (((((max(var_11, (arr_2 [i_0] [i_1])))) != ((((((arr_1 [i_0] [i_0]) >> (((arr_2 [i_0] [i_0]) + 1950566444))))) + (max(var_4, (arr_3 [i_1])))))))) : (((((max(var_11, (arr_2 [i_0] [i_1])))) != ((((((((arr_1 [i_0] [i_0]) + 2147483647)) >> (((arr_2 [i_0] [i_0]) + 1950566444))))) + (max(var_4, (arr_3 [i_1]))))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_13 = (min(var_13, (((((((arr_6 [i_0] [i_1] [i_1] [i_4]) || (arr_6 [i_4] [i_4] [i_4] [i_0])))) & (arr_6 [i_3] [i_3] [i_1] [i_3]))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_4] = (((((-(arr_0 [i_0])))) ? (min((arr_7 [i_0] [i_1] [i_2] [i_3]), var_9)) : (((arr_6 [i_0] [i_1] [i_0] [i_3]) % (arr_6 [i_0] [i_2] [i_0] [i_4])))));
                        }
                    }
                }
            }
            arr_11 [i_0] [i_0] [i_0] = ((((((var_1 != var_10) ? (((8048461039778440723 ? (arr_7 [i_0] [i_0] [i_1] [i_1]) : (arr_8 [i_0] [i_1] [i_1] [i_0])))) : (arr_9 [i_0] [i_1] [i_1] [i_1] [i_1])))) ? (arr_4 [i_0] [i_0]) : ((((~1152897421440944904) < (((var_1 ? var_10 : (arr_2 [i_0] [i_0])))))))));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] = ((var_5 + (max(((max(var_2, var_10))), (((arr_9 [i_5] [i_5] [i_6] [i_7] [i_0]) * 0))))));
                        var_14 += (~var_6);
                    }
                }
            }
            var_15 ^= 8048461039778440735;
            var_16 = 0;
            arr_20 [i_0] = ((~(((arr_17 [i_0] [i_5] [i_5] [i_5]) ? (arr_17 [i_0] [i_5] [i_5] [i_5]) : (arr_17 [i_0] [i_0] [i_0] [i_5])))));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {
            arr_23 [i_0] = ((~((min((arr_1 [i_0] [i_0]), (arr_4 [i_0] [i_0]))))));
            var_17 = (max(var_17, ((((max((arr_14 [i_8] [i_0] [i_8] [i_8]), var_5)) < (!var_2))))));
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_18 = (max(var_18, (((((((var_11 > (arr_3 [i_0]))) ? (((arr_4 [i_10] [i_8]) + (arr_1 [i_9] [i_11]))) : (((1 < (arr_16 [i_0] [i_8] [i_9] [i_11] [i_11]))))))) ? ((((max(var_1, 8048461039778440723))))) : (((var_5 || var_9) ? (arr_13 [i_0] [i_11] [i_10]) : (((((arr_26 [i_11] [i_11] [i_9] [i_11] [i_11] [i_8]) == var_10))))))))));
                            arr_32 [i_0] [i_8] [i_9] [i_0] [i_11] = (((((arr_1 [i_10 - 3] [i_0]) ? var_6 : (arr_1 [i_10 + 1] [i_0])))) && (arr_1 [i_10 + 1] [i_0]));
                            var_19 = ((((((min(var_4, var_4))) ? (max(var_8, var_1)) : (min(var_8, var_1)))) >= ((((var_9 == var_7) + (arr_17 [i_10] [i_8] [i_0] [i_10]))))));
                        }
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            arr_35 [i_0] = min((max((arr_6 [i_0] [i_12] [i_0] [i_12]), (arr_34 [i_0] [i_12]))), ((((max(var_11, var_1)) < (((((arr_24 [i_0] [i_0] [i_12] [i_12]) != var_5))))))));
            var_20 = ((-30402 | (((((var_5 == (arr_28 [i_0] [i_0] [i_12] [i_0]))) && (((var_11 + (arr_24 [i_0] [i_12] [i_12] [i_12])))))))));
            arr_36 [i_0] [i_0] [i_0] = (min((((arr_24 [i_0] [i_0] [i_0] [i_12]) & (min((arr_28 [i_12] [i_12] [i_12] [i_0]), var_8)))), ((min((arr_34 [i_0] [i_12]), ((28 * (arr_28 [i_0] [i_0] [i_12] [i_0]))))))));
            arr_37 [i_0] = var_4;
        }
        var_21 = (((((((max(var_11, (arr_22 [i_0] [i_0] [i_0])))) ? (var_8 + -16373) : (((((arr_13 [i_0] [i_0] [i_0]) == var_0))))))) ? ((((max(var_1, var_8))) ? ((min((arr_31 [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_0])))) : 7117)) : -1988328105));
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
    {
        arr_41 [i_13] = ((((((((var_6 != (arr_25 [i_13])))) - (var_3 && 1988328104)))) & (min((var_9 < var_5), (arr_8 [i_13] [i_13] [i_13] [i_13])))));
        arr_42 [i_13] [i_13] = ((((((((12 ? var_2 : var_4)) <= (((arr_15 [i_13] [i_13] [i_13]) ? var_6 : (arr_21 [i_13] [i_13] [i_13]))))))) != (min((arr_21 [i_13] [i_13] [i_13]), var_9))));
    }
    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        arr_46 [i_14] = ((((((((!(arr_8 [i_14] [i_14] [i_14] [4])))) * (1 == var_0)))) != (arr_43 [i_14] [i_14])));
        arr_47 [i_14] |= (((var_7 - var_10) | (((((var_10 ? (arr_33 [i_14] [i_14] [i_14]) : (arr_15 [i_14] [i_14] [i_14]))) > -16380)))));
        arr_48 [i_14] [i_14] = ((((((!(arr_15 [i_14] [i_14] [i_14]))))) / (arr_13 [i_14] [16] [i_14])));
        arr_49 [i_14] = (max((((arr_0 [2]) * (arr_0 [12]))), (min(var_1, ((((arr_0 [14]) ? var_0 : (arr_1 [14] [14]))))))));
    }
    var_22 = var_2;
    #pragma endscop
}
