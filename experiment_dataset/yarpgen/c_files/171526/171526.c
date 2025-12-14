/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((min(((min((var_12 ^ var_11), (!1921932384)))), (min((var_9 / var_7), (var_6 ^ var_12))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = ((!((((arr_5 [i_0] [i_1]) ? var_0 : (arr_2 [i_0]))))));
                var_15 *= (min((((1921932384 && 1624020588) ? (min(2373034921, var_6)) : (arr_0 [0]))), (arr_0 [14])));
                var_16 -= (((((-(arr_5 [10] [2])))) ? 9223372036854775807 : ((((!((min(var_2, var_12)))))))));
            }
        }
    }
    #pragma endscop
}
