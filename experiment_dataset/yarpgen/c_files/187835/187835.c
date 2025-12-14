/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_4;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_0] &= (((arr_2 [4] [i_1 - 1]) ? (((arr_5 [i_0 + 2] [i_0 + 3] [i_0 + 2]) ? (arr_2 [i_0 - 2] [i_0 - 1]) : (arr_7 [i_0 - 2] [i_0 + 3] [i_0 + 2]))) : (((0 ? 0 : 1)))));
                    var_11 = (max(var_11, (((67 ? 67 : 182)))));
                }
            }
        }
    }
    #pragma endscop
}
