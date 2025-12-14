/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_10 = (((arr_2 [i_0 + 1]) + (((arr_0 [i_0]) ? (min(255, var_6)) : (arr_2 [i_0 + 1])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [6] [i_0] [i_3] [i_2] = (((~-7681157037884539643) ? (min((!7681157037884539642), (((arr_8 [i_0] [i_0 + 1] [0]) ? var_2 : (arr_9 [i_0] [i_1] [5] [5]))))) : (arr_4 [i_1] [1] [1])));
                        var_11 = ((((((arr_11 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0]) ? (arr_8 [i_0] [i_0 + 1] [10]) : (arr_8 [i_0] [i_0 + 1] [i_0])))) || (arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])));
                    }
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 23;i_4 += 1)
    {
        arr_16 [9] = ((!((min(-7681157037884539643, (arr_14 [i_4 + 1] [i_4 - 1]))))));
        var_12 = (arr_15 [i_4]);
    }
    var_13 = (min(var_13, var_0));
    var_14 = (((~14410063051605254906) && var_4));
    #pragma endscop
}
