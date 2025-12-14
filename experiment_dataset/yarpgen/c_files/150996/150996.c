/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = (((arr_6 [i_2 + 1] [i_2 + 1]) ? (((min((arr_4 [i_2 - 3] [i_2 - 3] [i_2 - 3]), (arr_4 [i_2 - 1] [i_2] [17]))))) : ((~(min((arr_0 [i_0]), (arr_2 [i_0])))))));
                    arr_9 [i_0] [i_2] [11] = ((((arr_4 [i_2] [i_2] [i_2 - 1]) | var_12)));
                    arr_10 [i_0] [i_2] = (((((~(((arr_0 [11]) ? (arr_4 [i_0] [i_1] [22]) : (arr_0 [i_0])))))) ? (((-(arr_5 [i_2 + 1])))) : (((arr_4 [i_2 + 1] [11] [i_0]) | var_2))));
                }
            }
        }
    }
    var_14 |= var_6;
    var_15 ^= var_4;
    #pragma endscop
}
