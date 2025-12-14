/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((+(((-2147483647 - 1) ? -1 : 511))));
    var_16 = (max(var_16, (((var_11 ? (~var_2) : var_2)))));

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] |= ((399835200 ? 511 : 537));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_15 [i_0] [i_2] [i_3] [i_4] = (arr_8 [i_2]);
                            arr_16 [i_2] [i_3] [i_2] = ((((arr_14 [i_2]) ? (arr_14 [i_2]) : (arr_14 [i_2]))));
                            var_17 = (((arr_2 [i_4]) ? ((((((arr_2 [i_3]) ? (arr_5 [i_0] [i_2] [i_3]) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_5 [i_3 - 2] [i_2 + 1] [i_0 - 4]) : (((arr_9 [i_2] [10]) ? (arr_6 [i_4]) : (arr_0 [i_4]))))) : (!114)));
                            var_18 &= ((((((arr_1 [i_0 - 3]) ? (arr_14 [i_0]) : (arr_14 [i_3])))) ? (((!(arr_1 [i_0 - 3])))) : (arr_7 [i_0 - 3] [i_2 + 1] [i_3 - 2] [i_4])));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_19 [i_0 - 4] [i_3] [i_0] &= (-(((!((((arr_6 [i_0 - 1]) ? (arr_1 [i_2]) : (arr_6 [i_2]))))))));
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_2] [i_5] [i_2] = ((-(arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_5])));
                            var_19 += ((1840223774 ? 18446744073709551104 : 18446744073709551098));
                            var_20 = (18446744073709551081 ? 12 : 4716);
                        }
                        var_21 = (((arr_1 [i_2]) ? ((((((arr_2 [i_0]) ? (arr_18 [i_3] [i_0 - 2] [i_2] [i_2] [i_1] [i_1] [i_0 - 2]) : (arr_10 [i_2] [i_1] [i_2] [i_2])))) ? (arr_9 [i_2] [i_2]) : (arr_9 [i_2] [i_3 - 1]))) : (!5152)));
                    }
                }
            }
        }
        arr_21 [i_0] = (arr_6 [i_0 - 1]);
    }
    var_22 = var_3;
    #pragma endscop
}
