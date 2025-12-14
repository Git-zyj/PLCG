/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_15 ? (min(-9223372036854775804, var_12)) : ((max(var_15, 0)))))) ? var_4 : -var_2));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= var_3;
        var_20 = ((~((((!(arr_1 [i_0]))) ? (((arr_1 [i_0]) ? 235 : 3469)) : (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = (~-1346734664);
                        arr_12 [i_1] [i_2] [i_2] = ((max(((var_6 ? -7921361411451749524 : -7921361411451749524), (min((arr_8 [i_0]), var_3))))));
                        var_21 = ((+((((arr_9 [i_2 + 1] [i_2 + 1] [0] [i_0] [i_2] [i_1]) <= (arr_9 [i_2 + 1] [i_1] [i_2 + 1] [0] [i_2] [i_1]))))));
                        arr_13 [i_0] [i_0] [i_0] [i_2 + 1] [i_3] = (arr_9 [i_0] [i_1 + 3] [i_2 + 1] [i_3] [i_0] [i_1 + 3]);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_22 |= (max(((-(arr_9 [9] [i_5] [i_2] [9] [i_5] [i_4]))), (((!(arr_6 [i_4] [i_4]))))));
                                var_23 = (min(var_23, (((-(min((((arr_0 [i_2]) ? (arr_1 [0]) : var_12)), (arr_6 [i_0] [i_1 + 3]))))))));
                                arr_18 [9] [i_1] [i_2] [2] [i_4] = (((((arr_16 [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2]) ? (arr_16 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2]) : (arr_16 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]))) >> (((min(var_10, (arr_16 [5] [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]))) - 49))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_24 -= (min(((!(arr_23 [8]))), (!var_3)));
                                var_25 = (max(((((arr_19 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [1] [i_6]) >= (arr_16 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2])))), (((arr_16 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]) ? var_0 : 13000763483731872031))));
                            }
                        }
                    }
                    var_26 = (((-(arr_15 [i_2 + 1] [i_2 + 1] [i_2 + 1] [2]))));
                    var_27 *= (((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]) < (arr_10 [i_0] [i_0] [i_0])));
                }
            }
        }
        var_28 -= ((!(((((var_7 <= (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
    {
        var_29 = ((((((((arr_26 [i_8]) / (arr_26 [i_8]))) % var_10))) || ((((arr_26 [i_8]) ? (-11322 * 3726027336) : var_13)))));
        arr_27 [i_8] [i_8] = ((!(((((((var_18 + 2147483647) << (((((arr_26 [i_8]) + 5586970519630463927)) - 31))))) ? (arr_26 [i_8]) : ((var_18 ? (arr_25 [3] [i_8]) : -7736329567196992677)))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
    {
        var_30 = 11322;
        arr_31 [i_9] [i_9] = ((-9223372036854775792 >= (arr_25 [i_9] [i_9])));
    }
    #pragma endscop
}
