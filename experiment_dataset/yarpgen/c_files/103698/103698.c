/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = (((min(3484267493, (arr_4 [i_2] [i_0 + 1] [i_0])))) ? 0 : (arr_2 [0]));
                    var_16 = (min(var_16, (((~(arr_0 [2]))))));
                }
            }
        }
    }
    var_17 = ((max(var_9, var_13)));
    #pragma endscop
}
