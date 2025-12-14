/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((~15320616861371086172) + 2147483647)) >> (((min((~var_0), ((var_8 ? var_5 : var_9)))) + 5210))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 ^= (min(((((!(arr_3 [i_0] [i_0] [14]))) || var_1)), ((((!(arr_0 [i_0] [i_0]))) && ((((arr_3 [i_0] [2] [i_1]) ? (-127 - 1) : var_3)))))));
                var_12 = (min(-123, -var_4));
            }
        }
    }
    #pragma endscop
}
