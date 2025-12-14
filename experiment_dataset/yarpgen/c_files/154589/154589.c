/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (((+(((arr_4 [i_1] [i_0] [i_0]) - (max(-808138931081505677, (arr_3 [1] [i_1]))))))))));
                var_19 &= (max(-699553398687669704, ((min((arr_1 [i_0] [i_1]), (arr_1 [i_0] [11]))))));
                var_20 = (((-7338881339153929416 + 9223372036854775807) >> (-21900 + 21903)));
                var_21 = (min((3477320596 - var_0), 1));
                var_22 *= (((((var_5 ? 8587154851733621068 : 1))) - (((((6343 ? 42657 : 32763)))))));
            }
        }
    }
    var_23 = (max(((((1 ? -22414 : var_9)) > var_0)), ((max(var_0, 0)))));
    #pragma endscop
}
