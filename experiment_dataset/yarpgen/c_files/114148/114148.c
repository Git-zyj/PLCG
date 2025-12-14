/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = (min((arr_3 [i_0]), ((((arr_3 [16]) ? (arr_3 [i_0]) : var_9)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 ^= (((var_5 | var_13) ? (arr_5 [i_1 - 1] [7]) : (((var_5 ? (arr_2 [i_1] [i_2]) : var_7)))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (((((arr_8 [i_2]) ? (arr_5 [i_0] [i_2]) : ((~(arr_3 [i_0]))))) ^ (arr_3 [i_1])));

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_16 = ((min(var_0, (arr_7 [i_1] [i_1] [i_1 - 1] [i_3 + 1]))));
                        var_17 = (min(var_17, (((15712 ? 1341222977 : 1436521593)))));
                        var_18 = (((((var_1 ? (arr_10 [6] [6] [i_3 - 1] [1]) : (((arr_7 [6] [6] [i_2] [i_2]) ? (arr_2 [i_0] [i_0]) : (arr_10 [10] [10] [10] [10])))))) ? (arr_2 [i_3] [i_0]) : (1436521593 == 14842452547911106873)));
                        var_19 = (min(var_19, (((((arr_1 [i_0] [i_1 - 2]) ^ (arr_1 [i_3 - 1] [i_1 - 2])))))));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_20 = (max(3604291525798444742, 3604291525798444775));
                        var_21 = (((((((var_8 ? var_13 : (arr_10 [i_0] [i_1] [i_2] [i_0])))) && (arr_5 [i_0] [i_0]))) ? var_2 : ((min((min((arr_0 [0]), var_10)), ((max(var_7, (arr_11 [i_4] [i_1] [i_2])))))))));
                        var_22 = (((((((max((arr_12 [i_4]), var_7)))) == (arr_10 [12] [i_1 - 2] [i_1 - 2] [i_4]))) ? (((arr_7 [i_1] [i_1] [i_1 - 1] [i_4]) ? (((arr_13 [12] [i_4] [i_0] [i_1] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_12 [5]))) : 2858445684)) : 0));
                        var_23 = ((+((((((arr_8 [i_1]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_1 [i_0] [i_2])))) ? ((5 ? -14 : 25367)) : (arr_7 [i_2] [i_2] [i_1 + 1] [i_1 - 1])))));
                        var_24 = (arr_1 [i_4] [i_1]);
                    }
                    arr_14 [i_0] [0] [i_0] [i_0] = ((22 ? 17 : 854583889));
                    arr_15 [i_0] [i_1] [i_0] = ((((arr_4 [i_2] [19] [i_1 - 2]) ? (arr_4 [17] [2] [i_1 - 2]) : (arr_4 [i_0] [i_0] [i_1 - 3]))));
                }
            }
        }
    }
    var_25 = (max(var_25, ((max(((((~4501188256782744811) ? var_9 : var_7))), (min((((var_5 ? var_6 : var_3))), var_4)))))));
    #pragma endscop
}
