/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 |= ((924882947080255006 || ((924882947080255011 < (((max(30061, 50026))))))));
        arr_2 [i_0] [i_0] &= (((max((arr_0 [i_0] [i_0]), ((var_6 ? (arr_1 [i_0]) : var_12)))) / (((arr_0 [i_0] [i_0]) ^ (((arr_1 [i_0]) | (arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] |= (15510 - 29);
        var_19 = ((((((arr_3 [i_1] [i_1]) == (arr_3 [i_1] [i_1])))) ^ ((((arr_1 [i_1]) == (arr_4 [i_1]))))));
    }
    var_20 &= (max((((((max(1, 4910111177724414788))) && (!0)))), var_6));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_21 = (max(((((var_6 || var_17) ? var_7 : (((arr_11 [i_2] [i_2] [i_3]) % (arr_7 [i_2])))))), (((((((arr_10 [i_3] [i_2] [i_2]) != (arr_3 [i_2] [i_3]))))) ^ (((arr_12 [i_2]) & (arr_9 [i_2])))))));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 7;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {

                            for (int i_6 = 1; i_6 < 7;i_6 += 1)
                            {
                                arr_21 [i_2] [i_2] [i_4] [i_2] [i_6] = (((arr_11 [i_4 - 1] [i_2] [i_6 + 3]) << (((((var_3 - var_12) << (((((arr_11 [i_2] [i_2] [i_6]) + var_13)) - 3619907491)))) - 5495517445298847742))));
                                var_22 += ((((((arr_7 [i_4 - 1]) / (arr_7 [i_4 - 1])))) && (((-(1 && 37437))))));
                            }
                            for (int i_7 = 0; i_7 < 10;i_7 += 1)
                            {
                                arr_24 [i_2] [i_2] [i_4] [i_2] [i_7] = ((((max(var_17, (((var_11 <= (arr_14 [i_7] [i_2] [i_2] [i_2]))))))) || ((((~var_2) ^ (arr_22 [i_2] [i_4 + 3] [i_4 + 3] [i_4 - 1] [i_4]))))));
                                var_23 -= (((((((var_1 - (arr_3 [i_4] [i_4]))) - ((min((arr_22 [6] [i_3] [i_3] [i_5] [i_7]), var_7)))))) ? (min(var_17, (min(var_6, var_5)))) : (((6393136806521385331 ? 1610612736 : 1)))));
                                var_24 = (+(((!(((arr_16 [i_7]) == var_3))))));
                                var_25 &= (arr_15 [i_2] [i_4]);
                                arr_25 [i_2] [i_2] [i_2] = (arr_1 [i_4 + 1]);
                            }
                            arr_26 [i_2] [i_3] [i_2] = (min((1 | 1), (((((var_4 * (arr_12 [i_2])))) ? (((((arr_0 [i_3] [i_3]) && (arr_0 [i_2] [i_2]))))) : (var_13 * var_17)))));
                            var_26 = ((!(arr_10 [i_5] [i_2] [i_2])));
                            var_27 -= ((((max(1365703788, 0))) ? ((((-(arr_4 [i_5]))) & ((var_5 * (arr_13 [0]))))) : ((((arr_16 [i_2]) & (((arr_3 [i_2] [i_4]) / (arr_3 [i_5] [i_3]))))))));
                        }
                    }
                }
                arr_27 [i_2] [i_2] = ((((((min((arr_10 [i_2] [i_2] [i_2]), (arr_16 [i_2])))) ? (arr_18 [i_3] [i_3] [i_3] [i_2] [i_2]) : (arr_9 [i_2]))) - var_7));
                var_28 *= (((max((((var_7 / (arr_23 [i_2] [i_2] [2] [i_3] [i_3])))), ((var_0 | (arr_18 [i_2] [i_2] [i_2] [i_2] [i_3]))))) / ((max(((((arr_22 [6] [6] [6] [6] [i_3]) != (arr_18 [i_2] [i_2] [i_2] [i_3] [i_3])))), ((var_16 ? (arr_14 [i_2] [i_2] [i_2] [i_3]) : (arr_23 [i_2] [i_3] [4] [i_2] [i_2]))))))));
            }
        }
    }
    #pragma endscop
}
