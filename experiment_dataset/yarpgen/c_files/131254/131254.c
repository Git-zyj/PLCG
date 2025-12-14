/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [9] [9] = (min(((max((arr_1 [i_0 - 3] [i_0 - 1]), (arr_2 [i_0 + 1])))), ((((((arr_0 [i_0] [i_0]) >> (var_9 - 15046557955653249669)))) & ((4312025217171299147 << (15757884409642177939 - 15757884409642177901)))))));
                arr_5 [i_0] [i_0] [i_1] = (max((arr_1 [i_0 + 2] [i_0 - 2]), (((arr_1 [i_0 + 3] [i_0 - 3]) >> (3969251727 - 3969251673)))));
                arr_6 [i_0] = var_15;
            }
        }
    }
    var_19 |= (((((min(3969251737, 2688859664067373669)))) ? (~325715550) : -var_10));
    var_20 = (max(var_20, (max((((~((var_12 ? 43485 : var_1))))), (((((var_12 ? 3969251746 : var_6))) ? 13916575405369000093 : var_13))))));
    #pragma endscop
}
