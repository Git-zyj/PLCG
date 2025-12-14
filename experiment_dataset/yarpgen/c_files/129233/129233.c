/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (arr_0 [i_0]);
                var_22 = (arr_2 [i_0]);
                var_23 = ((+(((var_13 ^ 4294967284) ? 7 : 1873736058))));
                var_24 = ((((min((arr_4 [i_1 - 1] [i_1]), (arr_1 [i_1 - 1] [i_1])))) ? (arr_1 [i_1 - 1] [i_1]) : (4420928172274460786 - 0)));
            }
        }
    }
    var_25 += var_15;
    #pragma endscop
}
