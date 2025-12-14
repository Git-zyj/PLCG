/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((max((-127 - 1), ((49212 ? var_0 : var_6)))), ((((!var_10) ? var_6 : 0)))));
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((min(49208, (arr_2 [i_0] [i_0])))) ? (((max(((1 > (arr_1 [i_0]))), (var_0 > 49194))))) : -5163139084209410664));
                arr_5 [i_0] = (((4653553467810634709 && 116) ? 49212 : (16324 > 1829000320984517900)));
            }
        }
    }
    #pragma endscop
}
