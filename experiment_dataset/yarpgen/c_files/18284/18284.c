/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 = ((~(((arr_3 [i_0 + 1]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1])))));
                    arr_10 [i_0] = ((~(((~31515) ? (((arr_6 [i_0] [i_1]) >> (var_13 - 1494906053))) : (((31516 ? (arr_8 [i_2]) : (arr_0 [i_0] [i_0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
