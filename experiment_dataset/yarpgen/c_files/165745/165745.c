/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_7, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = -32755;
                arr_5 [i_0] = ((103 ? 32765 : (-127 - 1)));
                var_13 -= ((((((!(arr_2 [i_0] [i_0] [i_0]))) ? (!-119) : (((arr_1 [i_1]) ? var_6 : var_0))))) ? (!8012) : ((var_8 ? ((min(var_9, (-127 - 1)))) : (min(122, var_3)))));
            }
        }
    }
    var_14 = var_2;
    #pragma endscop
}
