/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = ((((((~(arr_4 [i_0 + 2] [i_0 + 2] [i_1]))) ? (((~(arr_2 [i_1])))) : ((~(arr_0 [i_0 + 1])))))));
                var_12 = ((3764664271453931062 ? (((-6134871477507525608 ? -0 : -1))) : 8796093022207));
            }
        }
    }
    var_13 = (((((~(~var_0)))) ? (((-1706400337 ? 87 : 127))) : (((((var_2 ? 705234976 : 1925756493))) ? -var_3 : var_9))));
    #pragma endscop
}
