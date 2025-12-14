/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_3 ? var_9 : 34627))) ? var_5 : -3475));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((((((0 / (arr_1 [i_0 - 3])))) ? (((((min((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1])))) && ((((arr_0 [i_0] [i_1]) ? var_5 : (arr_0 [i_0] [i_1]))))))) : var_4)))));
                var_14 = ((((((arr_0 [i_0 + 1] [i_1]) & (((arr_2 [i_0]) + -1))))) ? 1 : (arr_1 [i_0 - 3])));
            }
        }
    }
    #pragma endscop
}
