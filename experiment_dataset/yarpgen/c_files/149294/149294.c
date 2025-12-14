/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    var_20 = (((((-(min(8171091526107740260, var_17))))) ? (((!((max(504750284, 4999318056809807233)))))) : var_10));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (~0);
                    var_21 ^= (min(127, 504750265));
                    var_22 += (max(((-(arr_0 [16] [i_0 - 1]))), (arr_0 [i_0] [i_0 - 1])));
                    arr_9 [i_0 - 1] [1] [i_2] = max((!102), ((~(arr_0 [i_0 - 1] [i_0]))));
                }
            }
        }
    }
    var_23 = ((~(((var_17 || ((max(3790217011, var_13))))))));
    #pragma endscop
}
