/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 ^= (min(((((arr_4 [i_1]) != (max((arr_1 [i_0]), (arr_2 [i_1])))))), (((arr_0 [i_2]) ? (((arr_3 [23] [23] [1]) ? (arr_4 [i_1 - 1]) : (arr_5 [i_0] [i_2] [i_2]))) : (arr_5 [i_2 - 2] [i_1 - 1] [i_0])))));
                    var_12 = (min(((+(((((arr_5 [i_0] [i_1 - 1] [i_2]) + 2147483647)) << (((arr_2 [i_0 - 1]) - 240)))))), (min(((min((arr_3 [i_2] [i_0] [i_0]), (arr_4 [i_0])))), ((~(arr_3 [i_0] [i_0] [19])))))));
                    arr_7 [10] [i_2] [i_2] [i_0] = (arr_5 [12] [i_1 - 1] [i_2 + 1]);
                }
            }
        }
    }
    var_13 = (max(var_13, ((((-(min(var_9, var_5))))))));
    var_14 = (min((~var_0), ((((var_4 << (var_9 - 3248652318)))))));
    var_15 = var_10;
    #pragma endscop
}
