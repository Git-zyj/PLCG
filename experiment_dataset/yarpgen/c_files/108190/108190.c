/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = var_1;
                    var_19 ^= ((!(arr_2 [0] [i_1] [i_0])));
                    var_20 = (min(var_20, ((((arr_4 [11] [i_1] [i_2]) ? (max((arr_5 [i_2 - 2] [i_1 + 2]), var_5)) : ((max((arr_1 [i_2 - 2]), (min((-2147483647 - 1), (arr_3 [i_0] [i_1])))))))))));
                    var_21 = 299624662;
                }
            }
        }
    }
    var_22 &= var_0;
    var_23 = var_0;
    #pragma endscop
}
