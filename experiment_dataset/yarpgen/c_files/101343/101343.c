/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = (((((-9223372036854775807 - 1) ^ ((~(-9223372036854775807 - 1))))) > -9223372036854775801));
                var_19 = (((arr_0 [i_0 - 1] [i_1 - 1]) * 9412924371589614262));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_20 = -9223372036854775801;
                var_21 = (min(var_21, (arr_11 [i_2] [i_2] [i_2])));
                arr_14 [i_3] = 185;
            }
        }
    }
    #pragma endscop
}
