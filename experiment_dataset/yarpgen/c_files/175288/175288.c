/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(((min(var_12, 1354090718)) ^ (2940876578 == var_12)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (max(var_19, (arr_0 [i_0])));
        arr_2 [5] [i_0] = ((((((((max((arr_1 [i_0]), (arr_1 [i_0]))))) / (max(2940876584, (arr_1 [i_0])))))) ? (((((arr_1 [i_0]) >= (arr_1 [i_0]))))) : ((~(max(var_2, 13308))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                {
                    arr_11 [1] [i_1] [1] |= (((((!(arr_5 [i_3 + 1])))) + ((((arr_4 [i_1] [i_1]) == (((arr_3 [i_2] [i_3]) ? var_11 : var_1)))))));

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_20 = var_9;
                            var_21 &= (max(((-(arr_7 [i_5] [i_2]))), var_2));
                            var_22 &= ((((arr_4 [i_3 - 2] [i_3 - 1]) ? var_5 : (arr_4 [i_3 + 1] [i_3 - 1]))));
                        }
                        arr_18 [i_4] [i_2] [2] = ((((max(2554688589950805906, var_10))) * (-15348 / 6097065932096889727)));
                    }
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        arr_21 [i_6] [i_6] [i_6] [i_6] [i_6 - 2] [i_6] = (max((arr_3 [i_6 - 1] [i_3]), (arr_3 [i_1] [i_3])));
                        var_23 &= (max(((~(!var_16))), (arr_12 [i_1] [4] [i_3] [i_2])));
                        var_24 &= ((((max((min((arr_8 [i_2] [i_2]), (arr_8 [i_1] [i_1]))), (arr_8 [15] [15])))) == (arr_4 [i_3 - 2] [i_3 - 1])));
                        arr_22 [i_1] [i_3] = ((274877906943 ^ (((arr_13 [i_1] [i_2] [i_3 + 1] [i_6 + 1]) % (arr_13 [i_1] [i_2] [i_3 - 2] [i_6 + 1])))));
                        var_25 = (max((arr_6 [i_3]), (arr_16 [16] [i_2] [i_2] [i_3 - 2] [i_6 - 2])));
                    }
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            arr_29 [i_1] [i_2] [i_3] [i_7] [i_8] &= ((-((~(arr_12 [i_3 - 1] [i_3 - 1] [i_7 - 1] [i_8 - 1])))));
                            arr_30 [i_1] [i_1] [i_2] [12] [i_7] [i_7] [3] = (arr_20 [22] [i_2] [22] [22]);
                            var_26 = (min(var_26, ((max((~var_12), (42651 == var_7))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            var_27 = (arr_13 [i_1] [i_1] [i_1] [i_1]);
                            var_28 = (arr_3 [i_2] [i_2]);
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
                        {
                            var_29 = (max(var_29, (((~(arr_19 [i_1] [i_3 + 1] [i_7] [i_10]))))));
                            var_30 = (min(var_30, ((max(((min(29842, -10147))), (((arr_9 [i_3]) ^ var_0)))))));
                        }
                        for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                        {
                            var_31 += (arr_20 [i_1] [i_1] [i_3 - 1] [i_3 - 1]);
                            var_32 += arr_8 [i_7 - 1] [i_11];
                            var_33 *= (arr_12 [i_1] [19] [i_3 - 1] [i_11]);
                        }
                        arr_38 [i_1] [i_2] [i_7 - 1] = ((((((arr_28 [i_1] [i_1] [i_1] [i_2] [i_3 - 1] [i_7 - 1] [i_1]) ? (arr_32 [i_3 - 1] [i_7 - 1] [i_7] [i_7]) : (max((arr_10 [i_2] [i_2] [i_2]), (arr_33 [i_3] [i_3] [i_2])))))) ? (max(((6097065932096889727 % (arr_33 [i_1] [i_2] [i_1]))), var_12)) : (((((((arr_19 [i_1] [i_1] [i_3] [i_7]) ? 4903 : (arr_8 [i_1] [i_1])))) % 2940876581)))));
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        var_34 = (arr_34 [i_1] [i_1] [i_1] [20] [i_2] [i_3] [i_1]);
                        arr_41 [i_3 - 2] [i_2] [i_3 - 2] [i_12] [i_3] [i_3 - 2] = (arr_12 [i_1] [i_2] [i_3] [i_12]);
                        arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_20 [i_1] [i_2] [i_3] [i_12]);
                    }
                    var_35 = (max(var_35, (arr_8 [i_2] [i_3])));
                }
            }
        }
        arr_43 [i_1] = (~(((!(arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])))));
        arr_44 [i_1] = (max((((((arr_23 [i_1]) + (arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) + (((var_3 ? var_8 : (arr_33 [i_1] [i_1] [i_1])))))), var_0));
        arr_45 [i_1] = (min((max(var_7, (arr_27 [i_1] [i_1] [i_1] [i_1] [i_1]))), (arr_27 [i_1] [i_1] [i_1] [14] [i_1])));
    }
    var_36 = ((~(max(var_7, ((var_12 ? var_15 : var_8))))));
    #pragma endscop
}
