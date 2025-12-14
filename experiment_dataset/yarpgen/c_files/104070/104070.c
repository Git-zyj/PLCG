/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((4294967295 ? (~var_10) : ((var_12 ? var_3 : var_1)))) << (((((min(var_0, 18446744073709551615)) ^ (var_5 * var_3))) - 573507615))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (((((max((arr_4 [i_1 - 1] [i_1]), (arr_4 [i_0] [i_0]))) | (((2831438513 ? 168 : -31))))) & (max(((max(893174965, var_12))), (arr_4 [i_1 + 2] [i_1 + 2])))));
                var_15 = (((((var_2 * (arr_2 [i_0] [i_1 - 2])))) ? (min(var_5, -var_11)) : (((var_12 * (arr_1 [i_1 + 2]))))));
                arr_5 [i_0] = var_2;
            }
        }
    }
    #pragma endscop
}
