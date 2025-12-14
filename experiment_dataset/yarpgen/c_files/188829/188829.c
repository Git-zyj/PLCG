/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((((((!((max(var_1, var_9))))))) >= (max(-var_0, (var_5 <= var_2))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = ((var_8 ? ((-(var_7 <= var_8))) : (((((var_6 ? var_8 : var_4)) <= (var_2 / var_6))))));
                arr_5 [i_1] = var_6;
            }
        }
    }
    #pragma endscop
}
