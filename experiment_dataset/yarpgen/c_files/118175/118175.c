/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max(((min((((arr_0 [i_0] [i_0]) + 1)), (arr_1 [1] [i_0])))), ((var_5 ? (min((arr_2 [i_0]), (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])))));
        var_10 |= (((((arr_0 [1] [1]) * (arr_2 [i_0]))) < (arr_0 [i_0] [1])));
        var_11 = (((arr_1 [i_0] [i_0]) && (arr_2 [i_0])));
        var_12 = ((((max(((max(var_9, (arr_1 [i_0] [i_0])))), ((1 ? (arr_0 [i_0] [i_0]) : (arr_1 [4] [i_0])))))) ? (((max((arr_2 [i_0]), (arr_2 [i_0]))) >> (((arr_2 [i_0]) - 608898777)))) : ((-(arr_2 [i_0])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            {
                arr_10 [i_2] = (((max((arr_8 [i_2]), -6814400332765671628)) * (arr_4 [0] [i_2])));
                var_13 = (min(var_13, (arr_9 [i_1])));
            }
        }
    }
    var_14 ^= (min(-6814400332765671620, var_6));
    var_15 = var_8;
    #pragma endscop
}
