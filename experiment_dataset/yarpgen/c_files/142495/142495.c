/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [1] [1] [1] = ((-((+((var_10 ? (-9223372036854775807 - 1) : 18446744073709551583))))));
                var_18 = (~885447936);
            }
        }
    }
    var_19 = (min(var_19, var_0));
    #pragma endscop
}
