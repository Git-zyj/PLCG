/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = var_0;
                    var_15 = (max(((max(var_8, (arr_0 [i_2 - 1])))), ((min(0, 0)))));
                    arr_7 [i_2 - 1] [i_0] [i_0] = ((var_9 ? (((arr_3 [i_0] [i_0] [5]) ? var_9 : (arr_6 [i_2] [i_2 - 2] [i_2] [i_0]))) : (((((min(1666037985, 1)) >= ((((arr_0 [i_0]) ? 29882 : 43883)))))))));
                    arr_8 [i_0] [i_1] &= ((0 ? 227 : 0));
                    arr_9 [i_0] [i_0] [i_2] = (((((((max(var_9, var_1))) || (((var_4 ? -111 : var_0))))))) <= (((arr_2 [i_0]) ? ((((arr_3 [i_2] [i_0] [i_0]) & var_0))) : (min(var_12, (arr_6 [i_0] [15] [i_0] [i_0]))))));
                }
            }
        }
    }
    var_16 |= 1;
    var_17 = var_11;
    #pragma endscop
}
