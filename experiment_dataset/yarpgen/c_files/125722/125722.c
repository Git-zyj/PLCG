/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((var_1 % 2541153390) >= 5398))) & (1753813897 > 70)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = var_10;
                arr_4 [i_1] &= (var_8 || 2936666997);
            }
        }
    }
    #pragma endscop
}
