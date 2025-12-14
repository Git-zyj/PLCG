/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] &= (max((max(2583421040, (arr_1 [i_1]))), (149 < 112)));
                var_12 = (max((max(-31043, var_0)), var_0));
                var_13 |= var_5;
            }
        }
    }
    var_14 = ((((((31355 ? 6408548231557855366 : var_2)))) ? (min((~var_8), var_9)) : ((((min(1253006043, -106))) ? ((var_7 ? var_6 : var_4)) : 67))));
    var_15 *= ((var_11 ? var_7 : var_8));
    var_16 = (var_9 >= var_2);
    var_17 = ((~((4082418909969789818 ? ((-127 ? 67 : 84)) : -21562))));
    #pragma endscop
}
