/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((var_12 ? ((max(1, var_7))) : (((((var_7 ? var_5 : 3756666385))) ? var_9 : (max(538300910, var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = 255;
                    var_22 = (max(((((min((arr_0 [i_0] [i_0]), 3756666398))) ? (min(142, 3756666398)) : 114)), (max(538300897, (arr_4 [i_0] [i_1] [i_2])))));
                    var_23 = (min((max(-46854, ((18446744073709551615 ? (arr_0 [i_2] [i_2]) : 0)))), ((((arr_4 [i_0] [i_1] [i_2]) ? (arr_4 [i_2] [i_1] [i_0]) : (1 < 4294967295))))));
                    var_24 = ((!((((arr_0 [11] [i_2]) & (arr_0 [i_0] [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
