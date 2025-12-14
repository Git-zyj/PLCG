/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            var_11 = var_3;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [i_1] [4] [4] [i_1] = -1006764078;
                        var_12 = (((((var_4 >> (((((arr_2 [i_2] [i_1]) ? (arr_1 [i_0]) : (arr_5 [1] [i_1] [i_1] [i_3 - 1]))) - 216))))) / ((((arr_0 [i_2] [i_1 - 1]) ? 1135543644418825325 : (arr_9 [i_0]))))));
                        arr_13 [i_0] [1] = ((!((((max((arr_6 [i_1 + 1] [i_2] [i_3 - 1]), var_10))) || var_6))));
                        arr_14 [i_0] [6] [i_1 + 1] [i_2] [i_2] [i_1 + 1] = ((9223372036854775787 ? ((-1 ? -1 : 236930552475301407)) : (arr_11 [i_0] [i_1] [i_2] [1] [i_3 - 1])));
                        var_13 = var_9;
                    }
                }
            }
            var_14 = ((((((arr_2 [i_0] [i_1 - 1]) ? (arr_11 [i_0] [i_1 - 1] [i_0] [3] [i_0]) : 0))) ? (arr_2 [i_0] [i_1 - 1]) : (arr_6 [11] [i_1 - 1] [11])));
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_15 = (max(((23891 ? (arr_6 [i_4] [i_4] [i_0]) : (arr_0 [i_0] [i_4]))), ((((arr_6 [11] [i_4] [11]) ? (arr_6 [1] [i_0] [i_0]) : var_8)))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        {
                            var_16 = ((((max(var_6, (arr_11 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])))) ? (((arr_11 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]) ? (arr_11 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]) : var_1)) : ((var_10 ? (arr_11 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]) : var_0))));
                            var_17 = (((((((var_0 ? (arr_0 [10] [i_4]) : var_3))) ? (arr_2 [i_7] [i_7 + 1]) : (var_10 >= var_4))) >> ((var_7 / ((var_10 ? var_9 : (arr_22 [2] [i_4] [i_0] [i_6])))))));
                            arr_27 [i_5] [i_4] [i_4] [i_4] [i_7 + 2] |= ((((min(((var_4 * (arr_18 [i_0] [i_4] [i_5] [12]))), (var_0 <= var_4)))) ? 45 : (arr_10 [i_0] [i_4] [i_5] [i_6] [i_6])));
                            var_18 = ((((max(((14834 ? 134217727 : var_3)), (((var_10 ? var_0 : var_5)))))) ? (((arr_1 [i_6 - 1]) + var_8)) : (0 || 1874325634)));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {
                        var_19 = (((arr_0 [10] [i_8]) && ((min(var_5, (arr_0 [1] [1]))))));
                        var_20 ^= (1 || 1);
                        arr_34 [i_9] [i_9] [i_9] = (((arr_8 [i_0] [4] [3] [i_10]) / var_1));
                    }
                }
            }
            arr_35 [i_0] = (max(((~(arr_25 [i_0] [1] [i_8] [i_8] [i_8]))), (((!(((var_9 ? var_1 : var_0))))))));
            var_21 = (min((max((((arr_23 [i_0] [i_8] [i_8] [1] [i_8] [i_8]) ? var_5 : (arr_3 [i_0] [i_0] [i_8]))), var_9)), (min(4846843131202304238, -935343547))));
            var_22 = arr_8 [i_0] [i_0] [12] [12];
        }
        var_23 &= (min(((((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) && (arr_23 [0] [i_0] [0] [i_0] [i_0] [i_0])))), -var_9));
        var_24 += ((arr_24 [i_0] [i_0] [i_0] [i_0] [8] [i_0] [0]) ? ((~(arr_24 [i_0] [i_0] [i_0] [i_0] [6] [i_0] [i_0]))) : ((((!(arr_24 [i_0] [1] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    var_25 = ((var_5 + ((((!(var_3 == var_2)))))));
    #pragma endscop
}
