/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((max(1889680360, (((((min(var_8, 1))) && (min(var_5, var_11))))))))));
    var_21 = (~114);
    var_22 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_23 ^= (((!1) >> 1));
                    var_24 = 1546013396;
                    var_25 ^= max(37, 1);
                }
            }
        }
    }
    #pragma endscop
}
