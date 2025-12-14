/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (arr_0 [i_0 + 2]);
                arr_5 [i_0] [5] = ((((((arr_0 [i_0]) ^ (arr_0 [i_1])))) ? ((((max((arr_0 [13]), (arr_3 [13] [17])))) ? (arr_2 [i_0 - 1]) : (arr_4 [i_0] [i_0]))) : (((~(arr_1 [i_0 - 1]))))));
            }
        }
    }
    var_15 = -var_9;
    #pragma endscop
}
