/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = -var_11;
                var_15 = ((!(((~(!var_4))))));
                var_16 = (max(var_16, ((min((arr_2 [1]), (((!var_8) + ((min(var_7, (arr_0 [1] [i_0])))))))))));
            }
        }
    }
    var_17 = ((((var_10 ? var_9 : var_8)) > var_6));
    var_18 = (1 | 10124484132693541465);
    #pragma endscop
}
