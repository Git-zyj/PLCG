/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((min(((!(arr_1 [i_0]))), (((arr_2 [i_0]) != (arr_1 [i_0]))))) ? (arr_3 [i_0]) : (min((((arr_1 [9]) ? (arr_3 [i_0]) : (arr_3 [i_0]))), (((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 += ((~(((arr_8 [i_1 - 1] [7] [i_2 + 3]) ? (arr_2 [i_2]) : (arr_8 [i_1 + 1] [i_2] [i_2 + 2])))));
                    arr_10 [9] [i_0] [9] = (arr_6 [i_0] [7] [i_2]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_21 += ((!(((((((arr_1 [i_3]) ? (arr_2 [10]) : (arr_11 [2])))) ? (((!(arr_12 [16])))) : (arr_6 [9] [14] [2]))))));
        arr_13 [i_3] = (min((arr_1 [i_3]), (arr_1 [i_3])));
        var_22 = (min(var_22, (((((min(((((arr_11 [14]) != (arr_3 [16])))), (((arr_0 [20]) ? (arr_12 [0]) : (arr_2 [8])))))) ? (max((max((arr_6 [i_3] [i_3] [i_3]), (arr_7 [i_3] [i_3] [8]))), ((((arr_1 [i_3]) ? (arr_2 [4]) : (arr_11 [16])))))) : (((((arr_3 [2]) == (((arr_2 [18]) / (arr_7 [i_3] [18] [i_3]))))))))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = (((min(((max((arr_6 [7] [i_4] [6]), (arr_3 [8])))), (min((arr_0 [0]), (arr_14 [i_4]))))) | (((((((arr_14 [i_4]) ? (arr_5 [12]) : (arr_6 [2] [i_4] [7])))) ? ((((arr_3 [22]) ? (arr_14 [i_4]) : (arr_14 [i_4])))) : (arr_15 [i_4]))))));
        arr_17 [i_4] = (min(((((arr_9 [i_4]) ? (arr_9 [i_4]) : (arr_9 [i_4])))), (min((arr_3 [12]), (arr_3 [16])))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_23 = max(((~(arr_7 [i_6 - 1] [i_6 - 1] [i_6 - 1]))), (arr_14 [i_4]));
                        arr_25 [13] [i_5] [7] [i_7] [i_4] [i_5] = ((!(arr_23 [i_4] [i_4] [19] [i_4])));
                        arr_26 [i_7] = (max((((((-(arr_5 [i_7])))) ? (((arr_19 [i_7] [4] [i_4]) ? (arr_3 [i_7]) : (arr_22 [i_4]))) : (arr_6 [i_6 + 1] [i_7] [i_7]))), (((((((arr_12 [i_7]) ? (arr_6 [2] [i_7] [2]) : (arr_21 [12])))) ? (arr_22 [i_5]) : (((!(arr_14 [i_7])))))))));
                    }
                }
            }
        }
        var_24 += ((((min((arr_24 [i_4]), (arr_3 [20])))) ? (min((((arr_14 [i_4]) ? (arr_24 [i_4]) : (arr_14 [i_4]))), (arr_20 [i_4] [i_4] [i_4]))) : ((((arr_18 [i_4] [i_4] [i_4]) ? (arr_18 [i_4] [i_4] [11]) : (arr_18 [i_4] [i_4] [i_4]))))));
    }
    var_25 = ((!((min(-var_11, var_14)))));
    #pragma endscop
}
