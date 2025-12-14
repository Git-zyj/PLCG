/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (-5 / 4095);
    var_18 = (max(var_18, var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_19 -= (max((max((arr_2 [i_1 + 1] [i_1 + 1] [i_0]), (arr_1 [i_1 + 1]))), (max((arr_1 [i_1 + 1]), 255))));
                var_20 -= (((((arr_1 [i_1 + 1]) ^ (arr_2 [i_0] [i_1 + 1] [i_0]))) ^ (((arr_1 [i_1 + 1]) & (arr_2 [i_0] [i_1 + 1] [i_0])))));
                var_21 = (arr_1 [i_1]);
                var_22 -= (max(((var_7 >= (arr_0 [i_0] [i_0]))), (((arr_0 [i_1 + 1] [i_0]) >= 4294967290))));
            }
        }
    }
    #pragma endscop
}
