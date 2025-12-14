/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (max(var_13, ((min((max(((6 ? 4294967289 : 1)), ((max((arr_2 [6]), (arr_2 [i_0])))))), (arr_2 [i_0]))))));
        var_14 = ((max((arr_2 [i_0]), (arr_1 [i_0]))));
        var_15 = min(var_7, (((arr_0 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (max((arr_0 [i_0] [4]), var_6)))));
        var_16 = (max(var_16, (!var_11)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_17 |= ((((((var_3 != (arr_7 [1])))) / (((var_7 >= (arr_7 [9])))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    {
                        var_18 = ((+(max(((max((arr_9 [i_3 + 1] [i_1]), var_5))), ((var_4 - (arr_4 [i_2] [i_2])))))));
                        arr_15 [i_1] [i_2] [i_1] [0] = (min(((((arr_12 [7] [7] [i_3 - 1] [i_4 + 2]) ? var_2 : (arr_9 [i_1] [8])))), ((var_10 ? (arr_12 [1] [i_4] [i_4] [i_4]) : (max(181, 6771735810793206908))))));
                        var_19 &= ((+((((arr_14 [i_1] [i_2] [0] [0] [i_1] [i_3 - 1]) ? (arr_7 [6]) : (arr_4 [i_1] [5]))))));
                    }
                }
            }
        }
    }
    var_20 = var_3;
    #pragma endscop
}
