/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_13 = 14824;
                arr_5 [i_0] = 7415255436903352134;
            }
        }
    }
    var_14 = (!158319819);
    #pragma endscop
}
