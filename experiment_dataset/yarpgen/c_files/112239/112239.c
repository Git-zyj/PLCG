/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = ((-(max((arr_1 [i_1 + 1]), (((var_12 || (arr_4 [i_0] [i_1] [i_0]))))))));
                arr_6 [i_0] [i_1 - 2] [i_1 + 1] = (((((arr_3 [i_1 - 2]) || (arr_3 [i_1 - 2]))) ? ((max(((3959964876 * (arr_0 [i_0] [i_0]))), 2))) : (((!32767) ? (((arr_3 [i_0]) ? (arr_1 [18]) : var_4)) : 15))));
            }
        }
    }
    var_20 = var_2;
    var_21 ^= var_4;
    #pragma endscop
}
