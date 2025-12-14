/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(8, ((16 ? 0 : var_9))))) || (((1 & ((var_9 ? var_4 : var_1)))))));
    var_11 = (min(var_7, (((1 ? ((67 ? var_6 : var_8)) : ((14 ? var_1 : var_6)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 = (+((-2082701732 % (((arr_2 [i_0] [i_1]) >> (((arr_1 [i_2]) - 4957)))))));
                    var_13 -= var_4;
                    arr_7 [i_0] [i_0] [i_0] = (((((var_9 ? var_1 : (arr_1 [8]))) & (239 && 1))) == (((var_8 & ((max(157, (arr_5 [i_0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
