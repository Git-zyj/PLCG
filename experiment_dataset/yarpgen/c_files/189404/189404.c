/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189404
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
                var_19 = (min(var_19, ((((min((arr_6 [0]), (arr_5 [i_0]))) == (((114 ? 0 : 29755))))))));
                var_20 = (arr_6 [i_1]);
                var_21 = 1;
            }
        }
    }
    var_22 = ((max(9, var_10)));
    var_23 = (max((-2147483647 - 1), -437836603));
    #pragma endscop
}
