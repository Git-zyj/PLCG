/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_2] [i_1 - 3] [i_1] = ((0 ? 15 : 3197502624));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_2] [i_1] [i_1] [i_0] = -896;
                        arr_10 [i_0 - 1] [i_1] [i_1] [i_3] = ((~((-((~(arr_5 [i_3] [i_2] [i_1] [i_0 + 2])))))));
                        var_13 -= (!60);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_14 = (min(var_14, 1097464670));
                        arr_13 [i_1] [i_1 - 2] [i_1] [i_1 - 2] = 3197502597;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_15 = max((32756 - -9281), (max((((arr_11 [i_2] [i_5]) ? 4 : var_9)), 8192)));

                        for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            var_16 += (11 ? 12697 : 2134463450);
                            var_17 += -26545;
                            arr_19 [i_2] [i_1] [i_2] [i_5] [i_6 - 1] = ((((((arr_15 [i_0 + 3]) ? 20 : (arr_15 [i_0 + 3])))) ? (max(60, ((max((arr_1 [i_2]), var_5))))) : var_5));
                            var_18 = (((max((arr_0 [i_6 + 2] [i_0]), var_1)) % (arr_18 [i_0 + 1] [i_0 + 1] [i_2] [i_1] [i_6])));
                            arr_20 [i_1] [i_2] [i_5] [i_1] = -12697;
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0 + 4] [i_0] [i_0] [i_1] = ((((!(arr_17 [i_0 - 1] [i_5]))) ? 3197502619 : (((13 ? 21 : 63)))));
                            var_19 = ((8737899302748851592 ? (arr_22 [i_0 + 2] [i_2] [i_7 - 2] [i_1] [i_7 + 1]) : (arr_22 [i_0 + 1] [i_0] [i_1] [i_1] [i_1])));
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_27 [i_1] = (max((55 - 127), ((((arr_8 [i_1] [i_1 + 2] [i_5]) <= 1)))));
                            var_20 = (max(var_20, (((13056 ? 1548931549 : 39797)))));
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_31 [i_1] = var_11;
                            arr_32 [i_0] [i_0] [i_2] [i_5] |= arr_25 [i_1 - 1] [i_2] [i_2] [i_9];
                            var_21 = (max((arr_28 [i_0] [i_0 + 2] [i_0] [i_1] [i_0]), (((((-1748649699150141261 ? (arr_2 [i_0 - 2] [i_1]) : (arr_23 [i_0 - 1]))) & (arr_22 [15] [i_0 - 1] [i_1 - 3] [i_1] [i_5]))))));
                        }
                    }
                    var_22 = (108 ^ -1671357011);
                }
            }
        }
    }
    var_23 = var_7;
    #pragma endscop
}
