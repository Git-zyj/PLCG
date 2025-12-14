/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = var_5;
                arr_7 [i_0] [i_0] = ((arr_2 [i_1 + 1] [i_1 - 3]) >= ((-(arr_2 [i_1 - 4] [i_1 - 3]))));
                var_15 = ((var_5 == (((arr_2 [i_1 - 3] [i_1 - 2]) ? var_2 : (arr_2 [i_1 - 2] [i_1 - 4])))));
            }
        }
    }
    var_16 = var_1;
    var_17 = (max((min(-6604687561399634243, ((max(var_5, var_1))))), var_2));
    #pragma endscop
}
