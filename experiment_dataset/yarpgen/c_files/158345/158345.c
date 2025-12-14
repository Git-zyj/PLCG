/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (var_7 - 4191086838884980233);
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((max(4191086838884980232, -var_12))) ? var_8 : (((var_5 ? var_3 : -4191086838884980212))));
                var_15 ^= -6291041522309691000;
                arr_7 [i_1] [i_1] [i_1] = 1020;
            }
        }
    }
    #pragma endscop
}
