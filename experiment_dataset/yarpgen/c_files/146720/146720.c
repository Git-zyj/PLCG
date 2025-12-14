/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_1 - 1] [i_0] = (arr_5 [i_1 - 2] [i_1 - 1] [i_1 - 2]);
            var_20 = (arr_0 [15] [15]);
            arr_7 [i_0] = 7;
            arr_8 [i_0] = ((+(((arr_1 [i_1 - 1] [i_1 - 2]) - (arr_1 [i_1 - 3] [i_1])))));
        }
        var_21 = (min(var_21, (arr_1 [i_0] [i_0])));
        arr_9 [i_0] [19] = ((!(((-(arr_5 [i_0] [i_0] [i_0]))))));
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_13 [i_2] = (((((((max(-32435, var_1))) ? (((-(arr_5 [14] [i_2] [i_2])))) : (arr_4 [i_2] [i_2] [i_2])))) ? 18038841720405394480 : (((((~var_13) >= (!13)))))));

        for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
        {
            arr_16 [i_3] = ((((arr_12 [i_2] [i_3 + 2]) ? (arr_12 [9] [i_3 - 1]) : (arr_15 [i_2] [i_3 - 1]))) - (((arr_15 [i_3] [i_3 + 2]) ? (arr_12 [6] [i_3 - 1]) : (arr_12 [i_3] [i_3 + 2]))));
            arr_17 [i_3] [i_3 - 1] [i_3] = ((~((+(max((arr_11 [i_2]), (arr_0 [i_2] [i_3])))))));
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 6;i_6 += 1)
                    {
                        {
                            arr_27 [i_3] [i_3] [i_4] [i_5] [i_4] [2] [i_5] = (arr_5 [i_2] [12] [12]);
                            var_22 = (max((arr_25 [i_6] [i_6] [i_6] [i_6] [i_6 + 3]), (arr_5 [i_6] [i_6] [i_6 + 1])));
                            var_23 = (((((41278 ^ 15074070302396367172) ^ (arr_26 [i_3])))) ? (arr_4 [i_4 + 1] [i_4 + 1] [i_6]) : ((((((arr_1 [16] [0]) ? (arr_21 [9] [i_4 + 1] [i_5] [7]) : 46)) ^ var_14))));
                        }
                    }
                }
            }
            var_24 = (max((arr_21 [6] [i_3] [6] [i_3]), (((arr_26 [i_3]) * (arr_26 [i_3])))));
            var_25 = (max(var_25, ((((arr_20 [5] [i_2] [i_3 + 1] [i_3]) != (arr_0 [i_3 - 1] [i_2]))))));
        }
        for (int i_7 = 1; i_7 < 8;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                var_26 = (max((~41291), (arr_30 [i_8] [i_8 - 1] [i_8] [i_8 - 1])));
                arr_34 [i_8] [i_7] [i_7] [i_2] = (((((arr_15 [i_2] [i_8]) ? (arr_11 [i_7]) : (arr_19 [i_8]))) + ((max((max(1288202997, (arr_24 [i_2] [i_2] [i_7 - 1] [i_8] [i_8]))), ((((arr_1 [10] [i_7 + 1]) / (arr_5 [i_8] [i_7] [i_2])))))))));
            }
            arr_35 [i_2] [i_7] = ((-(arr_28 [i_7] [i_7])));
            var_27 ^= (((~var_10) ? (arr_2 [6]) : (((-1 == (arr_12 [i_2] [i_2]))))));
            var_28 -= ((max(var_9, (arr_25 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 1]))));
            var_29 = (min(var_29, var_19));
        }
        arr_36 [i_2] = (((((((((arr_33 [i_2] [1] [i_2]) ? 73 : (arr_15 [i_2] [i_2])))) ? ((-(arr_12 [i_2] [i_2]))) : (max((arr_5 [i_2] [i_2] [i_2]), (arr_31 [i_2])))))) ? (((1 ? (arr_22 [i_2] [i_2] [2] [i_2]) : var_3))) : (max((arr_15 [1] [i_2]), ((var_19 ? 15209342523663419386 : var_13))))));
    }
    for (int i_9 = 1; i_9 < 19;i_9 += 1)
    {
        var_30 -= (arr_0 [i_9] [i_9]);
        arr_41 [i_9 + 2] [i_9 + 2] &= ((((max(0, (arr_38 [i_9] [i_9 - 1])))) ? 16383 : ((~(arr_37 [i_9] [i_9])))));
        arr_42 [i_9] [i_9] = 13170;
        arr_43 [i_9] = ((((((arr_1 [i_9 + 2] [i_9 - 1]) ? (arr_1 [i_9 + 1] [i_9]) : (arr_1 [i_9 - 1] [i_9])))) ? (((~(arr_2 [i_9])))) : (((((3006764317 + (arr_40 [i_9] [1])))) ? 12284751730886891979 : (arr_39 [i_9 + 1] [i_9 - 1])))));
    }
    var_31 = ((var_15 ? var_8 : (max((max(var_17, var_4)), var_7))));
    #pragma endscop
}
