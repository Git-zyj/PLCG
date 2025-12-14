/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_14 -= (min((arr_3 [6]), ((195210350 ? 22 : (((((arr_0 [i_1]) >= var_13))))))));
                var_15 = (min(var_9, var_11));
                arr_6 [i_0] [i_0] [i_1] = min(((((arr_2 [i_1 + 2] [i_0 + 1]) != var_13))), (arr_4 [i_0 - 3]));
                var_16 = -89;
            }
        }
    }
    var_17 = ((((((min(var_13, var_11)) * var_0))) * (min((var_9 * 0), (var_7 % var_0)))));
    #pragma endscop
}
