/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_2] = -66;
                    var_19 *= (max(((1022630245 - (arr_1 [i_2]))), (-680526819 + -1022630237)));
                    var_20 = 8170714750379115112;
                    arr_8 [i_2] [i_1] [i_2] = (arr_0 [i_1 + 1] [i_1 + 2]);
                }
            }
        }
    }
    var_21 = (min(var_21, ((min(var_9, (4131810551171837651 | var_3))))));
    #pragma endscop
}
