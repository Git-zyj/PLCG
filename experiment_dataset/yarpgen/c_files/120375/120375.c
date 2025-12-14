/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((!((min(var_0, var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_12 += (max((arr_4 [i_0]), -711754555));
                var_13 = (((4294967295 / -115) >> ((((max((max((arr_2 [i_0]), (arr_2 [i_0]))), (arr_0 [i_0])))) - 34))));
            }
        }
    }
    var_14 = (min(var_4, (((var_8 ? 64 : var_0)))));
    #pragma endscop
}
