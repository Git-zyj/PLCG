/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((~(((arr_1 [i_0]) ? (arr_1 [i_0]) : 33634))));
                arr_5 [0] [i_0] = (((min(((var_7 ? var_3 : 8230266894244471832)), (var_3 ^ 3968))) >> (((((((var_0 ? (-32767 - 1) : var_0))) ? (arr_3 [i_0] [i_0] [i_1]) : var_6)) - 5100107546881431005))));
                var_20 = max(((((var_19 ? 33612 : var_14)))), (((arr_1 [i_0]) ? var_9 : (arr_3 [i_1] [7] [i_0]))));
            }
        }
    }
    var_21 = var_15;
    var_22 = ((max(((max(3584, var_1))), var_17)));
    var_23 = (~var_5);
    #pragma endscop
}
