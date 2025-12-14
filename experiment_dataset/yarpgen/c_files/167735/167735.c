/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_12 = (((((var_3 / var_11) >= (((arr_3 [i_1] [i_2]) & (arr_4 [i_0]))))) ? ((125 & (arr_6 [i_2] [i_2 + 1] [i_2] [8]))) : (arr_7 [i_0] [i_0])));
                    var_13 |= (arr_6 [i_0] [i_0] [1] [1]);
                }
            }
        }
    }
    var_14 = (max(var_14, (~var_10)));
    var_15 = ((-((~((max(var_11, var_4)))))));
    #pragma endscop
}
