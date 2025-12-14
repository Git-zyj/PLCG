/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((((min(var_5, (arr_0 [i_1] [i_1 - 1])))) ? ((((var_0 ? var_2 : var_8)))) : (((arr_4 [0] [i_1 - 1] [i_1 - 1]) ? 36028796482093056 : (arr_1 [i_1])))));
                arr_7 [i_1] = (arr_2 [i_1] [4] [i_0]);
            }
        }
    }
    var_12 = ((!((max(var_10, (!var_3))))));
    var_13 = ((((-9223372036854775804 / (~1))) ^ ((max(((var_10 ? var_10 : var_4)), (max(var_6, var_10)))))));
    #pragma endscop
}
