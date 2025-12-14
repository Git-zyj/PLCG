/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((~(((arr_2 [i_0]) - (((15 ? 38271 : var_1)))))));
        var_10 ^= (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        var_11 -= ((((((((var_4 ? (arr_4 [6] [i_1]) : 38275))) ? var_4 : (max(var_7, var_2))))) ? (((-(arr_1 [14])))) : (arr_2 [20])));
        arr_6 [i_1] = 27287;
    }
    var_12 = var_5;
    var_13 = var_3;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] = (min(((1 ? -135798837 : 15457)), ((((arr_2 [i_2]) >= (arr_2 [i_2]))))));
                    arr_16 [i_2] [i_3] [i_3] = (arr_14 [i_2] [15] [i_2] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
