/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= 3298;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = ((~((((!var_12) && (((1714458893928931137 ? -6250984051577249878 : 96497421092870486))))))));
                var_22 = (min(var_22, var_13));
                var_23 = ((3808 ? (((((!(arr_6 [i_0] [9])))))) : (min(-var_16, 96497421092870489))));
            }
        }
    }
    #pragma endscop
}
