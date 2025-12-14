/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = (min(var_5, (((arr_3 [i_0] [i_0] [13]) / var_3))));
                    var_14 = (max(var_14, ((max(((max((arr_5 [i_2 + 1] [i_1] [i_2] [i_1 - 1]), (arr_5 [i_2 + 1] [i_1 + 2] [i_2] [i_1 + 2])))), -285605906)))));
                    var_15 &= 144115188075855871;
                    arr_10 [i_0] [i_0] [i_1] [i_0] = (arr_7 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    var_16 ^= var_13;
    #pragma endscop
}
