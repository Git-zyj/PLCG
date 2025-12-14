/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (((((var_13 ? 31537 : (max(-848033449, 72))))) ? var_1 : ((65531 ? var_9 : 12))));
    var_21 = var_15;
    var_22 = -931300732;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_23 += (min((323492796437569515 * 17876319370274333471), ((max(var_13, ((var_9 ? (arr_4 [i_1] [i_0 + 2] [i_0]) : 65521)))))));
                var_24 = (!(~var_16));
            }
        }
    }
    #pragma endscop
}
