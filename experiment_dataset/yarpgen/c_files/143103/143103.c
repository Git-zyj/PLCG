/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (max(-3, 1));
                arr_5 [20] [i_0] [i_0] = (arr_2 [5]);
                arr_6 [13] = -var_14;
            }
        }
    }
    var_21 = (((--56893) - var_11));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            {
                var_22 = (max(var_22, 8188));
                arr_13 [i_3] [i_3] [i_2] = ((((min(((-(arr_7 [16]))), (arr_7 [i_2])))) ? 33550336 : ((-(arr_1 [i_3 - 1] [i_3 + 2])))));
                var_23 ^= -33550315;
            }
        }
    }
    #pragma endscop
}
