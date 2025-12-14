/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= 255;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((var_5 ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 2])))) ? (arr_0 [i_0]) : 562949953421312));
                arr_6 [i_0] [i_0] = (min((max((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1]))), (((2147483647 ? (12 * 0) : (((var_9 <= (arr_0 [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
