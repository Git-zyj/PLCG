/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_8;
    var_19 ^= ((var_1 ? var_1 : var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (max(((12 & (((49660080 <= (arr_0 [i_1])))))), (max((-25201 & 29101), var_2))));
                var_21 = (min(var_21, ((!((((arr_0 [i_0 + 1]) ? (arr_3 [i_0] [i_0 - 1] [i_1 + 3]) : (arr_0 [i_0 + 1]))))))));
            }
        }
    }
    var_22 = (min(var_22, (((~var_3) && ((((~6949286550732758067) ? (max(var_1, var_17)) : 28)))))));
    #pragma endscop
}
