/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_2 != var_10);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1 - 3] = (((((((var_12 >> (var_5 - 3829013684688302824))) > (var_5 > var_1)))) > ((((var_0 & var_10) < var_8)))));
                arr_6 [i_0] [i_1 - 4] = var_2;
            }
        }
    }
    #pragma endscop
}
