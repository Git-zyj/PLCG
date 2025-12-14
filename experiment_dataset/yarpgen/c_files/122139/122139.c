/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_4 ? var_7 : ((((min(var_1, var_7))) ? (!203) : (var_9 && var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = ((-(((3726018244 > (arr_0 [14]))))));
                var_14 = ((((((arr_4 [i_0 + 1] [i_1 - 3] [i_0 + 1]) | var_2))) ? var_9 : 8685038157279154091));
                var_15 = (min(0, 6036229378996203444));
                var_16 = var_3;
                arr_5 [i_0] [i_0] = ((var_2 <= (max(var_5, 3268453909))));
            }
        }
    }
    var_17 = (!14802);
    #pragma endscop
}
