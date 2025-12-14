/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_9 ? ((var_8 ? (max(15645898249151653229, var_4)) : (((-32767 ? 59256 : -18645))))) : var_2));
    var_13 = ((var_3 ? var_11 : (((((-1 ? -119 : 1)) != ((var_4 ? -2147483635 : var_3)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [11] = 288707352;
                    arr_9 [i_1] [i_2] = var_2;
                    var_14 = (min(((((((arr_6 [i_2] [i_2] [i_2] [i_0]) ? 4088 : var_3))) ? var_7 : (((arr_5 [i_2] [i_1] [i_2]) ? var_1 : 55058)))), var_5));
                    arr_10 [i_0] [i_2] [i_2 - 4] = (var_7 ? ((var_5 << ((((var_5 ? (arr_0 [i_0]) : (arr_7 [i_2] [i_2] [i_1] [i_0]))) - 6234726167121782703)))) : ((((((-(arr_1 [i_2]))) + 2147483647)) << (255 - 255))));
                }
            }
        }
    }
    var_15 |= -14762;
    #pragma endscop
}
