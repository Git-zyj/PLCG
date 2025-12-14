/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                var_10 += (arr_2 [i_0]);
                arr_4 [i_1] [i_1 + 1] = (arr_2 [i_1 - 3]);
                arr_5 [i_1] [i_0] [i_1] = ((((((-9223372036854775807 - 1) ? (arr_0 [i_1]) : (arr_0 [i_0 + 1])))) ? 3642104883 : -19));
                arr_6 [4] [i_1] &= ((!(arr_0 [i_0])));
            }
        }
    }
    var_11 = var_5;
    #pragma endscop
}
