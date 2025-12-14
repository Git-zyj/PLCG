/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_14 += (max((((1 <= 195) ^ ((var_9 ? 205 : var_7)))), (((((max(34478, 0)))) - (((arr_1 [i_0]) - var_5))))));
                    var_15 = max((((var_2 / var_7) ? (arr_11 [i_2 - 2] [i_2 - 2] [i_2] [i_2]) : var_8)), ((((var_8 ^ var_8) != var_7))));
                    var_16 = (((-(arr_4 [i_0 - 1] [i_1]))));
                    arr_12 [i_1] [i_1] [i_2 - 1] = (((((51662 ? var_11 : ((max((arr_1 [i_0]), (arr_0 [i_0]))))))) ? ((((1547997332 == (((var_7 ? (arr_3 [i_1]) : var_2))))))) : (arr_4 [i_0] [i_1])));
                    arr_13 [i_2] [i_1] [i_2] = (((((var_6 + (arr_8 [i_2 + 2] [i_2 - 2] [i_2 + 2] [i_1 - 3])))) ? (((arr_10 [i_1] [i_1]) ? var_0 : (arr_1 [i_0 - 1]))) : -var_3));
                }
            }
        }
    }
    var_17 = (min(var_17, var_10));
    #pragma endscop
}
