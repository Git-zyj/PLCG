/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((((var_1 ? var_8 : var_11))))));
    var_14 = (min(var_14, var_8));
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_4 [i_1] [i_1] = (arr_0 [i_0] [i_0]);
            var_16 = (min(var_16, (((~(arr_0 [i_0] [7]))))));
            var_17 = (max(var_17, (arr_0 [i_1] [i_1])));
            arr_5 [i_1] [i_1] = (!(arr_2 [i_0] [i_1]));
        }
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_0] = ((+(((arr_8 [i_2 - 1] [i_2 + 1] [i_2 + 1]) ? (arr_8 [i_2 - 1] [i_2 + 1] [i_2]) : (arr_8 [i_2 - 1] [i_2 + 1] [0])))));
            var_18 &= (((arr_0 [i_2] [i_2 - 2]) ? (arr_9 [i_2] [i_2 + 1]) : (arr_9 [i_2] [i_2 - 2])));
            arr_11 [i_0] = (~(arr_0 [i_0] [i_0]));
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 7;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_19 = (max(var_19, (((~(((arr_14 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? (arr_8 [i_4 - 1] [6] [i_3 + 1]) : (arr_8 [i_4 + 1] [i_3] [i_3 + 1]))))))));
                        arr_18 [i_0] [i_0] [i_4 + 1] [i_5] = ((((((arr_16 [i_0] [i_5] [i_4 + 2] [i_0]) ? (arr_16 [i_4 + 2] [3] [i_4 + 2] [8]) : (arr_16 [i_5] [i_5] [i_4 + 3] [i_4])))) ? (arr_16 [i_5] [9] [i_4 + 1] [i_3]) : ((((!(arr_16 [0] [i_5] [i_4 + 1] [i_3 + 1])))))));
                        var_20 = (((arr_0 [i_3 + 1] [i_4 + 1]) ? (((arr_7 [i_3 + 1]) ? (arr_7 [i_3 + 1]) : (arr_7 [i_3 + 1]))) : (((!((((arr_9 [i_0] [1]) ? (arr_16 [i_0] [i_3] [i_3] [i_5]) : (arr_16 [i_0] [i_0] [6] [6])))))))));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        arr_21 [i_6] = ((((((((-(arr_1 [i_6])))) ? (((arr_2 [i_6] [i_6]) ? (arr_8 [i_6] [i_6] [i_6]) : (arr_7 [i_6]))) : (((arr_6 [i_6]) ? (arr_13 [i_6] [i_6]) : (arr_2 [i_6] [i_6])))))) ? (arr_2 [i_6] [i_6]) : ((((arr_8 [3] [i_6] [i_6]) ? (((!(arr_6 [i_6])))) : (arr_14 [i_6] [i_6] [i_6] [i_6]))))));
        var_21 = (min(var_21, (((!(arr_15 [9] [i_6] [i_6]))))));
        var_22 += (!((!(arr_15 [i_6] [i_6] [i_6]))));
        arr_22 [i_6] = ((((!(arr_8 [i_6] [i_6] [i_6]))) ? ((((!(arr_3 [i_6] [i_6] [i_6]))) ? (arr_13 [i_6] [i_6]) : (arr_14 [i_6] [i_6] [i_6] [i_6]))) : (((!(arr_7 [i_6]))))));
        var_23 = (min(var_23, (arr_9 [i_6] [i_6])));
    }
    #pragma endscop
}
