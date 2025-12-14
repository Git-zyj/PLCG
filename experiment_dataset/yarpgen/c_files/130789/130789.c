/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((var_0 ? var_5 : var_7))));
    var_11 = (var_2 >> ((var_8 ? ((min(var_7, var_7))) : var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((((549755813887 / (arr_0 [i_1 + 2] [i_1 + 2]))) < (((((arr_5 [i_1 + 2] [i_1 + 2]) || (arr_0 [i_1 + 2] [i_1 + 2]))))))))));
                arr_7 [i_0] [3] [i_0] = ((((31692 % (114 / 1)))) ? ((1 | (1 >> 1))) : 1);
            }
        }
    }
    #pragma endscop
}
