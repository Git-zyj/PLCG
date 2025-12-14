/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_20 -= max((min((arr_1 [i_0 + 1]), (arr_1 [18]))), (max((arr_1 [i_0 - 3]), ((((arr_0 [i_0]) > (arr_0 [i_0 - 1])))))));
        arr_2 [i_0] = (((((((arr_1 [i_0]) - (arr_0 [1]))) >> (((arr_1 [i_0 + 1]) - 104)))) >> (((arr_0 [i_0 - 2]) * (arr_0 [i_0 - 4])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 ^= (((((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1]))) > (arr_0 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_11 [i_1] = (arr_3 [i_3]);
                    arr_12 [i_3] &= (min((((arr_3 [i_3]) ? (arr_5 [i_1] [i_2] [i_3]) : (arr_3 [i_3]))), ((((arr_4 [i_1] [i_3]) || (arr_4 [i_1] [i_3]))))));
                    var_22 = (((min((arr_5 [i_2] [i_2] [i_1]), (arr_7 [i_1]))) % ((((arr_7 [14]) + (arr_10 [i_2] [i_1]))))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_23 -= (((((((((arr_7 [0]) / (arr_10 [i_4] [13])))) || ((((arr_8 [1]) ? (arr_1 [i_4]) : (arr_5 [i_4] [i_4] [14]))))))) / (((arr_7 [i_4]) | (arr_0 [i_4])))));
        var_24 ^= ((((((arr_14 [8] [2]) < (arr_8 [14])))) ? ((((max((arr_13 [i_4] [2]), (arr_10 [i_4] [i_4])))) ? (arr_8 [14]) : (((arr_10 [i_4] [i_4]) ? (arr_7 [i_4]) : (arr_9 [i_4] [i_4] [0] [i_4]))))) : (max((((arr_14 [6] [0]) ? (arr_8 [10]) : (arr_3 [i_4]))), (((arr_8 [1]) + (arr_9 [i_4] [4] [1] [4])))))));
    }
    var_25 = (min((((!(((var_13 ? var_14 : var_4)))))), -var_12));
    #pragma endscop
}
