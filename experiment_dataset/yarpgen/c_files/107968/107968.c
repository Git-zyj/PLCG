/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_19 ^= ((-125 >= -1791953482) ? (((~(arr_5 [i_0 - 4] [i_0 + 2])))) : 7508056062694953366);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_16 [i_0] [i_0] [15] [i_0] [i_0 - 3] = ((((max((arr_4 [i_2 - 2] [4]), (arr_12 [i_2 - 2] [i_3 + 1] [1] [i_1 + 2])))) ? ((~(arr_12 [i_2 - 2] [10] [16] [i_1 + 2]))) : ((min((arr_12 [i_2 - 2] [i_1] [i_2] [i_1 + 2]), 31)))));
                            var_20 ^= var_2;
                        }
                    }
                }
            }
        }
    }
    var_21 = var_8;
    var_22 = var_7;
    var_23 &= (var_11 - var_8);
    #pragma endscop
}
