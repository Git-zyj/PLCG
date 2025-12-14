/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(((!(((var_3 ? var_2 : -2138344232))))), (-2138344232 && var_5));
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (!24948);
                var_18 = (min((((arr_3 [i_0] [i_0 - 1]) ? var_0 : 15907153100192308489)), (((!(arr_0 [i_0 + 1] [i_0 + 1]))))));
                arr_7 [i_0] = (arr_4 [i_0 - 1]);
            }
        }
    }
    var_19 = ((((!(((-2138344251 ? var_9 : var_5))))) ? ((var_11 ? var_9 : var_3)) : var_1));
    #pragma endscop
}
