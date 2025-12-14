/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (((var_15 | ((((var_15 ? var_7 : var_6)) | (((-2147483647 - 1) ^ var_13)))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0 + 4] [i_0] = (((((((var_4 | 1) + 2147483647)) >> (((~19927) + 19955))))) ? 1 : -var_5);
                var_21 &= (((var_13 - 1) ? (max(45609, 2012515137)) : (min(31833, var_15))));
            }
        }
    }
    var_22 = 45623;
    #pragma endscop
}
