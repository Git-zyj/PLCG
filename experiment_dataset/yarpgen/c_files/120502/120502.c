/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 *= (((((arr_2 [4]) > var_1)) ? (max(var_8, -var_15)) : ((((max((arr_3 [i_1] [i_2]), (arr_7 [i_0] [1] [i_2])))) ? (arr_2 [i_1]) : ((246 ? 1 : 8191))))));
                    arr_8 [i_0] [i_2] = var_14;
                }
            }
        }
    }
    var_18 = (min(var_18, (((var_6 | (!var_11))))));
    var_19 *= (!65535);
    #pragma endscop
}
