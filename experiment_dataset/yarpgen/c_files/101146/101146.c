/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 += (((((var_6 + 65512) ? (arr_3 [i_0]) : -var_8))) ? (((!(((arr_1 [i_0]) && (arr_5 [i_2])))))) : (min(((~(arr_3 [4]))), var_10)));
                    var_16 |= var_11;
                    arr_8 [i_0] [i_1] [5] = var_3;
                    var_17 = min(((~((max((arr_3 [i_2]), -4096))))), (((((arr_7 [i_2] [i_2] [i_2] [i_1]) ? 245 : 11)) + (var_2 == var_2))));
                }
            }
        }
    }
    #pragma endscop
}
