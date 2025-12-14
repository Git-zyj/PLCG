/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 137;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((49 ? (arr_5 [i_2] [i_2] [i_2] [1]) : (max(var_5, ((max(102, (arr_3 [i_0 - 1]))))))));
                    arr_8 [i_2 + 2] = (max(-24, (((arr_5 [i_2] [i_2] [i_2] [i_2 - 1]) ? (-124 >= 3) : (((arr_6 [i_0]) ? (arr_5 [i_0] [i_0] [i_1] [0]) : (arr_4 [i_0])))))));
                    var_11 *= (0 > 13104428806559839072);
                    arr_9 [i_0] [1] = ((((160 ? 63 : (arr_1 [i_0 + 3] [i_2 + 2]))) >> (((arr_3 [4]) & (arr_5 [i_2 + 1] [i_0 + 1] [i_0 + 1] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
