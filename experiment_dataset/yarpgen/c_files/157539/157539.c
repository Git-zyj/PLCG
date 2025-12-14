/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    var_12 = var_0;
    var_13 = ((((max((~1), 91))) || ((max((var_6 % var_10), (~var_6))))));
    var_14 = (max(var_14, -var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (max((arr_4 [i_1]), (1 || var_4)));
                arr_5 [i_0] [i_0] = ((-(min(var_8, ((max(0, var_0)))))));
                var_16 -= 260096;
            }
        }
    }
    #pragma endscop
}
