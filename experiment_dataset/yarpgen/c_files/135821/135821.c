/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_4));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (127 == 0);
                arr_5 [1] [i_0] = (arr_1 [i_0] [i_1]);
                var_12 = ((-(min(2636262991, (!589188576)))));
                var_13 -= (~(18860 & 49152));
                var_14 = (max(var_14, ((min(-127, -75)))));
            }
        }
    }
    #pragma endscop
}
