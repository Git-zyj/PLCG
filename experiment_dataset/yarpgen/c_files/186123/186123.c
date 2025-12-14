/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_4 ? (((-635261672 ? 2259456725 : 635261671))) : ((((max(var_2, var_8))) ? (min(var_10, var_10)) : var_11))));
    var_13 = var_1;
    var_14 = ((~(var_2 + -635261651)));
    var_15 = (min((!var_9), 635261649));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = ((~((~(((arr_2 [i_0]) ? -635261672 : -635261672))))));
                    var_16 -= (min(((min(((-635261672 ? 8917982731811003491 : -9130)), 635261671))), (max((((arr_7 [6] [i_1 + 1] [i_0] [6]) ? var_10 : var_1)), (arr_0 [i_0] [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
