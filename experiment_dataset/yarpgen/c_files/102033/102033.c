/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 ^= (min((70 || 1671077108), (((((3860794188 >> (((arr_5 [i_0]) - 54676))))) | 6971520393263560846))));
                    var_16 = (max(var_16, ((((((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_0 + 1]))) < ((((((arr_1 [i_2]) ? 3338878301 : var_13)) < var_4))))))));
                }
            }
        }
    }
    var_17 = 845190166;
    #pragma endscop
}
