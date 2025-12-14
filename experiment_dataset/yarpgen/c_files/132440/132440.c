/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 ^= (arr_3 [i_1]);
                    arr_9 [i_0] [i_0] [i_1 - 1] [i_2 - 1] = arr_5 [i_0] [i_0] [i_0];
                    arr_10 [i_0] [i_0] [i_0] = 50331648;
                    var_14 = (max(var_14, var_9));
                }
            }
        }
    }
    var_15 -= (max(var_11, ((((var_9 || var_0) ? (-60 || var_3) : var_0)))));
    #pragma endscop
}
