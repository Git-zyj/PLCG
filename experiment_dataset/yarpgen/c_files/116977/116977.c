/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_1 ? ((((var_0 >> (var_8 - 1580466118))))) : 1));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0 + 3] [i_0 + 2] = var_0;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, -var_5));
                    var_12 -= (((arr_0 [i_0 - 4]) ? (arr_8 [i_0 - 1] [i_0 - 2]) : (arr_8 [i_0 + 2] [i_0 - 1])));
                    var_13 = (arr_2 [i_1 - 1] [i_1 - 1]);
                }
            }
        }
        var_14 = (max(var_14, var_8));
        arr_9 [i_0] [i_0] = (((arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 2]) ? (arr_1 [i_0 - 3]) : var_5));
    }
    var_15 = (max(var_15, ((min(var_7, var_0)))));
    var_16 ^= 7507745992724521546;
    var_17 = (min((min(0, (var_5 >= var_0))), var_0));
    #pragma endscop
}
