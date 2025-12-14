/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(((!(((121 ? var_2 : var_5))))))));
    var_12 = ((65531 ? 65455 : -2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 *= ((-(((!((!(arr_1 [22] [22]))))))));
                var_14 = (arr_3 [i_0] [i_0] [i_0]);
                var_15 = (max(var_15, 28));
                var_16 = ((~((-((28 ? 73 : -12712))))));
            }
        }
    }
    #pragma endscop
}
