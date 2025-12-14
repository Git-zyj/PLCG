/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = 1;
                    var_21 = 3822432227;
                    var_22 -= 0;
                }
            }
        }
    }
    var_23 = (((815786886650224782 | 0) << (1 >> var_8)));
    #pragma endscop
}
