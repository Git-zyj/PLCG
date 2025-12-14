/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 |= ((((((arr_8 [i_1] [i_2] [i_1] [i_1]) ? 8985 : (arr_8 [i_1] [i_1] [i_1] [i_1])))) ? ((min((arr_8 [i_1] [i_1] [i_2] [i_2]), (arr_8 [i_1] [i_2] [i_1] [0])))) : (max(-11, 5654326759530548768))));
                    arr_9 [i_0] [i_1] [i_0] = ((((~(arr_7 [i_0] [i_0])))) ? ((63 ? 63 : (arr_4 [i_0] [10]))) : ((-((27 ? var_1 : var_11)))));
                    arr_10 [i_1] [i_1] &= ((var_0 ? (max((arr_8 [i_1] [i_2] [i_1] [i_2]), (arr_1 [i_1]))) : (((min(4194303, var_11))))));
                    arr_11 [i_0] [i_0] [i_1] [11] = ((max(60550, (var_11 - -18800))));
                }
            }
        }
    }
    var_14 = (min((((7603711976581088989 ? var_12 : ((min(-18796, var_9)))))), (max((max(16539987559594572790, var_6)), 4986))));
    #pragma endscop
}
