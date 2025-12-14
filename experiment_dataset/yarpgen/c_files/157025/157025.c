/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_10, ((((11092489880179267561 ? 1828766226 : var_9))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] &= ((((max((arr_1 [i_0]), (arr_0 [i_0] [i_1])))) ? var_9 : (((((arr_4 [i_1]) >= 243)) ? ((max((arr_1 [i_0]), -101))) : (arr_3 [i_1] [i_0] [i_0])))));
                arr_6 [i_1] &= ((-((min((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_1] [i_1]))))));
                var_16 &= (11 % 14140687520259568277);
            }
        }
    }
    #pragma endscop
}
