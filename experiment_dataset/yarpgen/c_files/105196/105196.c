/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [9] [6] = ((((((var_0 ? 1548746893 : -1049518144))) ? ((-1049518144 ? 11324111123838729586 : -1669336552)) : (min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_0]))))));
                var_11 = (min(131071, 2177589428));
            }
        }
    }
    var_12 &= (((((max(2177589428, -1669336552)))) ? var_7 : var_6));
    var_13 = min((((min(1049518143, 1)))), (((var_4 ? 1 : var_1))));
    var_14 &= var_6;
    #pragma endscop
}
