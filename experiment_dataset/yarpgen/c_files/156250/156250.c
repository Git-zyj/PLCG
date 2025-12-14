/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 7572316883695620787;
    var_17 = (min((!-7572316883695620788), ((7572316883695620774 ? 11088883213224112288 : -7572316883695620778))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = var_6;
                arr_6 [i_0] [i_0] = (-7572316883695620774 ? 2618727159622133408 : 8796093022207);
                arr_7 [9] [9] [9] = var_12;
            }
        }
    }
    var_18 = ((((-20432 ? 1 : 1))) ? (((((7572316883695620777 ? var_0 : var_10))) ? ((0 ? var_1 : -1153924883417577422)) : (((max(var_5, var_9)))))) : ((max(-1621401315, -247382204))));
    #pragma endscop
}
