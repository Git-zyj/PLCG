/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (arr_4 [6] [i_0] [7])));
                var_17 = (max((arr_2 [i_1]), (arr_4 [0] [i_0] [6])));
                arr_5 [i_1] [i_1] = ((18446744073709551615 ? ((-((-(arr_3 [i_1]))))) : (arr_3 [i_1])));
            }
        }
    }
    var_18 = (min(var_18, var_3));
    #pragma endscop
}
