/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((min(-2, var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_13 *= 219;
                arr_7 [i_0] [10] = (arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                arr_14 [i_2] = ((!(((~(arr_8 [i_2] [i_3]))))));
                var_14 = (min(var_14, ((((((((3005384376 & (arr_11 [11] [8] [i_2])))) < (min((arr_8 [1] [1]), 3141559599701924966)))) ? (~-51) : ((((arr_2 [i_3]) ^ ((((arr_1 [i_2]) <= 1)))))))))));
                var_15 = (max(((min((arr_12 [1] [i_2] [i_2]), -1740523216))), (((arr_4 [i_2] [i_3] [i_3]) ? (~202) : ((~(arr_4 [i_2] [0] [i_3])))))));
            }
        }
    }
    #pragma endscop
}
