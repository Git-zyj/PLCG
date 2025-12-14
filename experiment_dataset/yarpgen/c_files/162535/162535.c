/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_1] [i_2] = (!-33);
                    var_11 |= ((var_4 ? ((((!((min(2688692178, var_2))))))) : ((-(arr_2 [i_0 - 1])))));
                    var_12 = (min(var_12, (-32767 - 1)));
                    var_13 = (min((max((arr_9 [i_0 - 1]), (1283664240 <= var_7))), (((!(((var_3 ? var_1 : var_1))))))));
                }
            }
        }
    }
    var_14 = ((var_9 ? ((-(min(0, 11)))) : -15021));
    #pragma endscop
}
