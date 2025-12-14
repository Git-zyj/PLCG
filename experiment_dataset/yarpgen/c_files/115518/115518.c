/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_6 <= (var_6 % var_16))) ? ((-var_4 ? var_5 : var_15)) : ((var_10 ? var_15 : var_14))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 &= ((18446744073709551615 % ((max(2772170631, -67)))));
        var_19 = (((((var_10 % (arr_1 [i_0] [i_0])))) ? ((~(arr_1 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_0] [i_2] = (arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 2]);
                    arr_8 [i_1] = (max((min((arr_2 [i_0] [i_1]), (arr_4 [i_0] [i_2 - 1] [i_1]))), (max(var_16, (arr_6 [0] [i_2 - 2] [i_0] [i_0])))));
                    var_20 = -var_11;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_21 = (max(22, ((((arr_9 [i_3]) == var_10)))));
        var_22 = (((((var_4 ? (arr_10 [i_3]) : (arr_10 [i_3])))) & (((arr_12 [i_3]) & (arr_11 [i_3])))));
        arr_13 [i_3] [i_3] = var_6;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                {
                    var_23 = (max((max(((((arr_15 [i_3] [i_4] [1]) ? (arr_12 [i_3]) : 2744943515))), (arr_15 [i_3] [i_4] [i_4]))), (arr_12 [i_3])));
                    arr_18 [i_3] [i_3] [i_5 + 1] [i_3] = (max((min((arr_14 [i_3]), (((var_0 ? 0 : (arr_15 [i_3] [i_3] [i_3])))))), (((((max(var_12, (arr_17 [1] [i_4] [1] [i_3])))) ? var_16 : ((var_5 ? (arr_15 [i_3] [i_3] [i_5]) : var_15)))))));
                    var_24 = ((~(((!(arr_14 [i_3]))))));
                    arr_19 [i_3] [i_3] [i_5] [i_5] = (~9389714586868333347);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = ((-(((!(arr_16 [i_6] [i_6]))))));
        arr_24 [i_6] = ((((max(55, (arr_21 [i_6])))) ? ((-(arr_21 [i_6]))) : (arr_21 [i_6])));
    }
    #pragma endscop
}
