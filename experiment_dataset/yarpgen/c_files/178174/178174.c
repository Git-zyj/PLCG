/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = max(((-(~1))), 1);
                arr_4 [i_1] [1] = (1 * 1);
            }
        }
    }
    var_17 = -1;
    var_18 = ((min((!255), 11896059717538314985)) ? (((((1 || 22590) && 6550684356171236630)))) : ((((max(0, 1))) ? (max(98, 11896059717538314985)) : (!-5445346281971863387))));
    var_19 = -291049446;
    #pragma endscop
}
