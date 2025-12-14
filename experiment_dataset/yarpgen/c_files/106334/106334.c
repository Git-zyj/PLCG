/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 &= 979;
                    var_21 = (min(var_21, ((((((arr_3 [i_0] [i_1] [i_2]) ? ((((arr_3 [i_0] [i_0] [i_0]) > (arr_1 [i_2])))) : (min(2147483647, 9933)))) <= ((~(arr_1 [i_2]))))))));
                    var_22 = (min((arr_2 [i_0] [i_0]), 6));
                    var_23 += var_14;
                    arr_8 [i_0] [i_0] [i_0] = 49152;
                }
            }
        }
    }
    var_24 = ((2048 & (!-var_5)));
    var_25 = var_9;
    var_26 = ((((min(var_12, (~var_0)))) ? (65511 & 11) : (!-2751255003050162644)));
    #pragma endscop
}
