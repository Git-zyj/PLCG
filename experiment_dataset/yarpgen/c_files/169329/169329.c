/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((max(var_4, (35 << 1)))) ? var_6 : ((var_9 ? 3645257588 : (((max(var_3, var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = (var_11 - var_12);
                var_15 = ((((max((arr_2 [i_0 + 1] [i_0 + 2]), var_0))) ? (arr_2 [i_1 + 4] [i_0 + 2]) : (((((arr_2 [i_0] [i_0 - 1]) && var_11))))));
                var_16 = ((var_4 * ((var_0 & (arr_1 [i_0 + 1] [i_1 + 2])))));
            }
        }
    }
    var_17 = (max(((var_2 ? var_7 : var_7)), (var_7 != var_4)));
    var_18 = (((((max(753000764, 1070791244)))) ? var_1 : (!var_10)));
    var_19 = var_4;
    #pragma endscop
}
