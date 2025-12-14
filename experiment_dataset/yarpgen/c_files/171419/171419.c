/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [16] [i_0 - 1] &= var_4;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_16 = ((~(arr_5 [i_0 - 1] [i_0 - 1])));
                        var_17 = (arr_7 [i_0] [i_0] [i_3]);
                    }
                }
            }
        }
    }
    var_18 = (((!var_0) == 10240709263550691598));
    #pragma endscop
}
