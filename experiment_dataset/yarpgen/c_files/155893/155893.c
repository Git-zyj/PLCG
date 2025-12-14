/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((~var_13) <= (var_4 % var_8))))) > (((max(var_11, 0)) << (-1 + 11)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] &= 3;
        arr_5 [i_0] = ((((var_12 ? 0 : var_4))) ? (min(var_11, -1)) : (min(-1, 5987721974884473159)));
        arr_6 [i_0] [i_0] = var_7;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] = ((((((((((var_5 == (arr_1 [i_0]))))) != var_0)))) == (((((arr_9 [i_0] [1] [i_0] [i_0]) <= var_1)) ? (max(var_3, 0)) : (((max((arr_3 [i_0]), var_5))))))));
                    arr_12 [i_0] &= (0 & -1);
                }
            }
        }
    }
    #pragma endscop
}
