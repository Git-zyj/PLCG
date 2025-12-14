/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((min((max(var_7, 213), var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = 9506576979009903438;
                var_18 = ((arr_0 [i_0]) ? (((arr_2 [i_1] [i_1 + 1]) | (arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1]))) : ((-(0 ^ -1871914721))));
            }
        }
    }
    #pragma endscop
}
