/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -1;
    var_20 = (min(var_20, var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_21 |= (((min(1, 90045765))) ? (arr_6 [i_1]) : (((!(arr_6 [i_0])))));
                var_22 = (max(var_22, (((3846614843 ? 1 : 15881)))));
            }
        }
    }
    var_23 = (((((max(var_0, 3846614848))) + var_7)));
    #pragma endscop
}
