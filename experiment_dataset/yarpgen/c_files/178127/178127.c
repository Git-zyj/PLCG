/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -13;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_1] = ((~((max((arr_4 [i_0 + 1] [i_0 + 1]), (arr_4 [i_1 + 2] [i_0 + 1]))))));
                    var_12 += var_1;
                    arr_10 [i_1] [i_1] = (((((arr_3 [i_1] [i_1 + 1] [i_1]) ? (arr_3 [i_1] [i_1 + 2] [i_1 + 2]) : -1459203032925245066)) - 4582255460806730681));
                }
            }
        }
    }
    var_13 += var_6;
    #pragma endscop
}
