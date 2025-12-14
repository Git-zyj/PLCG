/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (max(var_3, (((!(((var_5 ? var_8 : var_4))))))));
                arr_7 [i_1] = 1;
            }
        }
    }
    var_10 = ((min(var_6, (var_2 < var_9))));
    #pragma endscop
}
