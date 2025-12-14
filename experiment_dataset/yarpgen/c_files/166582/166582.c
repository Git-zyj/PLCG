/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 ^= (((arr_1 [i_0]) ? ((((max(47616153, 45821829)) << ((((4247351155 ? 7797437023333642666 : var_1)) - 7797437023333642644))))) : (47616153 ^ 0)));
                    var_12 = (max(var_12, 1158746417));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = var_3;
        var_13 += ((0 ? (min(((var_6 ? (arr_8 [i_3]) : (arr_10 [12]))), (arr_10 [i_3]))) : ((min(var_3, 112)))));
        arr_12 [i_3] = ((((min((arr_9 [i_3] [17]), 0))) ? (arr_9 [11] [11]) : var_3));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
    {
        var_14 ^= (arr_9 [i_4] [i_4]);
        arr_17 [i_4] [7] = ((-((-(arr_9 [1] [i_4])))));
    }
    var_15 = var_5;
    #pragma endscop
}
