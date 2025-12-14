/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (max((max((arr_3 [i_0] [i_1]), (arr_4 [i_0] [i_1]))), ((-1330180951 ? (arr_3 [i_1] [i_0]) : (arr_7 [i_0])))));
                arr_8 [i_0] = (max((arr_1 [i_1]), ((~((-(arr_5 [i_0] [7] [i_0])))))));
                arr_9 [i_1] |= ((-(max((arr_5 [i_0] [i_0] [i_1]), (arr_7 [i_1])))));
            }
        }
    }
    var_12 = (max(1048102474859947004, var_10));
    #pragma endscop
}
