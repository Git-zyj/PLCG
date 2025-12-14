/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(3, (min(4022447614, -6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = 17114;
                var_12 |= 17115;
                arr_7 [i_0] |= 11428;
            }
        }
    }
    #pragma endscop
}
