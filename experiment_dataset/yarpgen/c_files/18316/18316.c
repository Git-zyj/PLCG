/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += ((min(var_4, (((var_8 ? var_9 : var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((!(arr_4 [i_2] [i_2] [i_2 - 1])))));
                    arr_6 [i_2] [18] [i_1] [i_2 - 1] = (((((arr_2 [i_2]) ? (arr_1 [i_2]) : (((max((arr_2 [i_0]), (arr_4 [i_0 - 2] [i_0 - 2] [2])))))))) ? ((max(2798050123, 5074))) : (((((~(arr_4 [i_0] [i_0] [i_2])))) ? (max((arr_5 [8] [i_1] [i_1]), (arr_1 [1]))) : (arr_1 [i_1]))));
                    var_17 = (min(var_17, (((~(((!((min((arr_5 [i_0] [i_0] [i_2]), (arr_3 [1]))))))))))));
                }
            }
        }
    }
    var_18 = var_9;
    var_19 ^= var_6;
    #pragma endscop
}
