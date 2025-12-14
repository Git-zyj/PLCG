/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_10 = ((((var_1 ? var_2 : var_0)) < var_3));
                    arr_7 [18] [i_1] [i_1] &= var_2;
                    var_11 = (min((((arr_3 [16] [i_1] [i_2 + 1]) ? var_9 : (arr_3 [3] [i_2] [i_2 - 1]))), (((((~65535) + 2147483647)) >> -13944))));
                }
            }
        }
    }
    var_12 ^= var_6;
    var_13 &= ((((-(min(var_5, 6557716408382270735)))) >= -86));
    var_14 ^= (min(69, -13947));
    #pragma endscop
}
