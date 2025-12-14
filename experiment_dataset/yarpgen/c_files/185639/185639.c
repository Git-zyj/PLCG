/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = ((((1 ? var_5 : (arr_4 [i_0] [1] [i_0]))) % ((27 & (arr_1 [i_0] [i_0])))));
                    arr_8 [i_0] [i_1] [13] = (max(14142528320267067491, ((((max(var_13, var_12))) ? (arr_6 [i_0] [i_0]) : (18014398509481983 % var_14)))));
                }
            }
        }
    }
    var_17 = (((((((15057 ? 1 : var_8))) ? var_9 : (max(var_4, var_9)))) == (((-((var_0 ? 115 : var_5)))))));
    var_18 = var_10;
    var_19 = ((!(((((var_14 ? var_2 : var_8)) % 2577867727)))));
    #pragma endscop
}
