/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_18 *= (arr_2 [i_1 - 1] [i_1] [i_0]);
                var_19 &= (((max((arr_2 [20] [i_1 - 2] [i_1 - 2]), (arr_2 [i_1] [i_1] [i_1 - 2]))) % (((-((max(123, (arr_1 [i_1])))))))));
            }
        }
    }
    var_20 = ((((-109 ? 4135560677 : 13948)) | var_7));
    #pragma endscop
}
