/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_4 ^ (!var_4)))) ? var_9 : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = (max(var_12, ((min(((max((arr_2 [17]), 4294967265))), var_5)))));
                arr_5 [i_0] [i_0] [i_1] = ((((min((arr_2 [i_0]), (arr_2 [i_0])))) ? (arr_4 [i_1] [i_0] [i_1]) : (!30)));
            }
        }
    }
    var_15 = ((var_3 ? ((var_5 / (-8811443615074197061 <= var_8))) : (((((var_6 > var_1) < ((var_3 << (var_11 - 781330165)))))))));
    var_16 = (~var_11);
    #pragma endscop
}
