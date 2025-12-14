/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 &= var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (((((-(arr_5 [i_0] [i_0 + 2] [i_1 + 1])))) ? ((max((arr_5 [i_0] [11] [i_1 + 1]), (arr_5 [i_0] [6] [i_1 - 1])))) : (arr_5 [i_0] [3] [i_1 - 1])));
                arr_8 [0] [i_0] = (0 || 268515380);
                var_16 = (((max(0, (arr_2 [i_0 + 3]))) * (0 == 19)));
                var_17 = var_2;
                var_18 = (((min((~-4), -1342483965518483790)) & (arr_0 [i_0])));
            }
        }
    }
    #pragma endscop
}
