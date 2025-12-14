/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(8403560368325156207, 72);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = 72;
                arr_5 [i_0] [i_0] = (((arr_3 [i_0] [i_0] [i_1]) ? (((max(72, 45)))) : var_11));
            }
        }
    }
    var_14 = (max(var_14, (((-var_9 ? ((var_6 ? 45 : 34889)) : -29)))));
    var_15 = (0 && 0);
    var_16 = var_2;
    #pragma endscop
}
