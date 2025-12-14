/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (0 || var_6);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] = ((63 ? (arr_2 [0]) : (min((min(4888879213625787564, 17352002434525226514)), 17352002434525226514))));
                var_13 = (max(221, 17352002434525226514));
                arr_8 [i_0] = (max((min(var_1, (arr_6 [i_1] [i_1 - 1] [i_1]))), ((((arr_6 [i_1 - 3] [i_1 + 2] [i_1 + 2]) > (arr_6 [i_1] [i_1 + 1] [14]))))));
            }
        }
    }
    var_14 = var_2;
    var_15 = 1094741639184325101;
    var_16 = (min(var_16, ((((-1094741639184325101 <= (var_2 * var_6)))))));
    #pragma endscop
}
