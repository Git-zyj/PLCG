/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -var_7;
    var_13 = min(((max((min(42216, 23296)), -26125))), (min((23319 || 13), var_2)));
    var_14 ^= -2312408585701503357;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = var_8;
                var_16 = (max((((!((248 < (arr_0 [i_0])))))), (((!1915509538) ? (~var_9) : (((min(13, 0))))))));
            }
        }
    }
    #pragma endscop
}
