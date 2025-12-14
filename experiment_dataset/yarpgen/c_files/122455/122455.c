/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_1] = (min(2147483621, 0));
                    var_10 = (min(var_10, (((8778142913207866610 < 23) >> (-1 + 7)))));
                    var_11 = (max(var_11, (-1821240039 & 1)));
                }
            }
        }
    }
    var_12 = (max(var_12, (var_3 >= var_1)));
    #pragma endscop
}
