/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (~105);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [2] [2] [0] [i_2] |= ((~(arr_4 [1] [i_1])));
                    arr_8 [i_0] [i_1] [i_2] = (((((-(arr_0 [i_2 - 1])))) ? (arr_0 [i_2 + 3]) : (min((arr_0 [i_2 + 2]), (arr_0 [i_2 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
