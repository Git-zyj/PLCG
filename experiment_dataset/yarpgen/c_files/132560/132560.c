/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_0] |= (max((max((arr_3 [i_0] [i_1] [i_1]), 1)), ((((arr_1 [i_0] [12]) > (arr_0 [i_0] [i_1 - 1]))))));
                    var_10 = (max(var_10, (arr_4 [20])));
                    var_11 ^= ((((1 ? 28 : 3528535264)) < 1));
                    arr_7 [21] [1] [i_2] [i_2] = ((((21670 << (((-1793501231 + 1793501248) - 9))))) ? ((((arr_1 [i_0] [i_0]) <= (((min(1, var_9))))))) : 1);
                    var_12 = (112 >= 1);
                }
            }
        }
    }
    var_13 = (var_0 >= 1);
    #pragma endscop
}
