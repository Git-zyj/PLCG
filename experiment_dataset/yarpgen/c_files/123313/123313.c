/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 591;
    var_18 ^= var_1;
    var_19 = (min(var_19, var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = 64944;
                    arr_9 [i_0] [i_1] [10] [i_0] = (((arr_5 [i_0] [0]) * (((var_13 ? var_9 : (arr_7 [i_0] [i_0] [i_2] [1]))))));
                    var_21 &= ((-var_7 ? (max((arr_7 [i_0] [i_0] [i_0] [i_2]), (arr_8 [i_2] [16] [16] [i_0]))) : (((~((591 ? 679772213 : 64949)))))));
                    var_22 ^= ((2 & ((~((592 << (-679772225 + 679772241)))))));
                }
            }
        }
    }
    #pragma endscop
}
