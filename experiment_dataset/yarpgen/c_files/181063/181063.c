/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(((((var_13 ? var_3 : 8))) ? (var_3 | var_16) : (((var_5 ? var_6 : var_7)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        arr_10 [11] [1] [0] [i_2] [1] = (((((arr_0 [i_3]) ? var_14 : (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 4])))) ? 48 : ((var_11 & ((max((arr_5 [i_0 + 4] [2] [i_2]), -64))))));
                        var_18 += (((!(((var_4 ? (arr_8 [i_1] [i_0] [1]) : (arr_9 [10] [i_1] [i_3])))))));
                    }
                    arr_11 [5] [i_2] [i_2] = (max((((arr_4 [i_0 - 1] [i_1] [i_1]) ? -1 : (arr_8 [i_0 + 3] [i_2] [i_2]))), ((((arr_8 [i_0 + 3] [i_2] [i_2]) ? (arr_6 [i_0] [i_0] [i_2] [i_2]) : var_2)))));
                }
            }
        }
    }
    var_19 = ((((-9223372036854775807 - 1) / (var_3 & var_2))));
    var_20 = var_9;
    #pragma endscop
}
