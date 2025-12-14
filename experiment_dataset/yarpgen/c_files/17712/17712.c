/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [3] = (max((min((arr_6 [i_0 + 3] [i_0 + 2] [i_0]), (0 + var_8))), (((arr_1 [i_0 + 2]) ? (arr_4 [i_0 + 3] [i_0 + 2]) : (arr_1 [i_0 + 2])))));
                var_21 ^= (max((var_6 < var_4), (max((arr_4 [i_0 + 3] [i_0 - 1]), (arr_4 [i_0 + 2] [i_0 - 1])))));
            }
        }
    }
    var_22 |= ((-(var_10 % var_14)));
    #pragma endscop
}
