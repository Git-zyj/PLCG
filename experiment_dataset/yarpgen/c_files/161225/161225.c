/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_8 || 10401991690881078288) & var_6));
    var_19 *= (min(((((((var_5 ? var_11 : -4771993378386915586))) ? var_17 : -21662))), var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = 0;
                arr_5 [i_0] [2] &= var_2;
            }
        }
    }
    #pragma endscop
}
