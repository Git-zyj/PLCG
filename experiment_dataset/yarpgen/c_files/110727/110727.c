/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] = min((arr_2 [i_1] [i_1 - 1]), ((((34667 ? 0 : 30869)))));
                var_15 = (((((+((18446744073709551615 ? (arr_0 [i_0]) : (arr_1 [i_0])))))) ? (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0] [i_0]))) : (arr_2 [i_1] [i_0])));
            }
        }
    }
    var_16 = 1;
    #pragma endscop
}
