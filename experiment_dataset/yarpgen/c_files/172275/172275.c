/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (min((max(((var_0 ? 4294967295 : var_0)), var_3)), ((min(7, var_2)))));
    var_11 = (min(((min(1, -7))), (((var_2 ? ((min(4294967295, 4294967295))) : var_5)))));
    var_12 = ((var_0 * (((var_8 / var_8) + ((var_3 ? var_1 : var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_2 [i_0 + 2]);
                var_13 = (min(((-(arr_2 [i_1 - 1]))), ((~(arr_2 [i_1 - 2])))));
                var_14 ^= (((var_0 > ((var_5 ? var_6 : var_4)))));
            }
        }
    }
    #pragma endscop
}
