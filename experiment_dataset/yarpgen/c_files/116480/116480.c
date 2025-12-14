/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += max(-1, 1);
    var_17 = ((!(((~(~32767))))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_18 *= (((((((((arr_1 [i_0]) ^ var_6))) ? (arr_0 [i_0]) : ((min((arr_1 [i_0 + 3]), (arr_2 [i_0]))))))) ? (((((var_15 ? (arr_1 [i_0]) : (arr_3 [i_0]))) == (!var_7)))) : ((~(((arr_2 [7]) ? 1 : var_8))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_11 [i_0 - 2] [0] [i_0 + 2] [i_0 + 3] [i_0] [i_0 + 2] = (arr_2 [i_0]);
                        arr_12 [i_0] [10] [i_1] [i_0] = ((var_1 != (((((-1570758278251775979 ^ (arr_0 [i_0 + 2])))) ? (arr_2 [i_2]) : var_4))));
                    }
                }
            }
        }
        arr_13 [i_0 + 2] = (((((min((arr_7 [i_0] [7] [i_0]), var_14)) * (1 >= var_7))) ^ 25915));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                {
                    arr_19 [i_0] [i_4] [i_4] = ((!(((-(arr_1 [i_0 + 3]))))));
                    arr_20 [i_0] [i_4] [i_0] [i_5 + 1] = (max((min(var_13, (min(var_12, (arr_6 [i_0] [i_0 + 1] [i_5] [i_0 + 2]))))), ((max((((arr_9 [5] [5] [5] [i_5 - 3]) != 25915)), (var_1 || var_12))))));
                    var_19 *= (min((min((arr_6 [i_0 + 1] [9] [i_0 + 1] [i_5]), (arr_2 [i_4 + 1]))), (((-(arr_2 [i_0 + 3]))))));
                    arr_21 [i_0] [i_0] = (arr_15 [i_0] [i_4]);
                }
            }
        }
        arr_22 [i_0 - 1] [i_0] = (arr_10 [i_0] [i_0] [i_0]);
    }
    var_20 = var_3;
    #pragma endscop
}
