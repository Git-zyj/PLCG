/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((137438953471 ? var_0 : 8585586373460468168))) < var_9));
    var_19 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = ((-(min((arr_5 [6] [12] [2]), (min(var_14, var_8))))));
                var_21 = ((((max(((min((arr_1 [i_1]), (arr_1 [i_1])))), (min(var_6, var_11))))) && ((min((max(var_0, var_15)), (arr_0 [i_0 + 1]))))));
            }
        }
    }
    #pragma endscop
}
