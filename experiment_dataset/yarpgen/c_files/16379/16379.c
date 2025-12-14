/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_10;
    var_15 = (max(var_15, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] = max((arr_4 [i_0]), ((-(arr_3 [i_1]))));
                arr_8 [i_1] [i_1] = (arr_6 [i_0] [i_0]);
                arr_9 [i_0] [i_0] [i_1] = ((~(!1056553530)));
                arr_10 [i_1] = (max((max((max(4294967295, 16)), -28748)), var_0));
            }
        }
    }
    #pragma endscop
}
