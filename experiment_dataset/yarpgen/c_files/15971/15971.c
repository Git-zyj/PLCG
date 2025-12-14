/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_1;
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (max((max((!var_4), (arr_0 [i_0] [i_0]))), (min(((-(arr_0 [9] [9]))), 2930578461))));
                arr_4 [i_1] = (((((((arr_1 [i_0]) && -8947198462994540257)))) * (((arr_2 [i_1] [i_1]) / -635761318))));
                var_17 = arr_2 [i_1] [i_1];
            }
        }
    }
    #pragma endscop
}
