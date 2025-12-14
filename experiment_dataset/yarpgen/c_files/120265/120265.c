/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_7 ? (((2815424929 ? 1 : 1))) : ((2 ? 1 : (var_9 && 1135016343)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_0] [i_0] = (6 < 1);
                    var_21 = -6393778410502266649;
                    var_22 = (max(var_22, (arr_4 [i_0] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
