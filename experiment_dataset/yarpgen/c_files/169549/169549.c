/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((((max(var_3, 1))) | var_9));
                    var_15 = (min(var_15, ((((((1 ? var_11 : ((var_10 ? 1 : var_7))))) ? ((((((var_4 ? var_10 : var_13))) == (max(var_5, var_11))))) : (((var_6 <= ((var_13 ? var_7 : var_14))))))))));
                    var_16 -= var_13;
                }
            }
        }
    }
    var_17 = (max(var_17, (var_8 <= var_5)));
    var_18 = (min(((((min(var_5, var_8))) ? var_6 : (min(var_7, var_5)))), (((!(var_12 / var_5))))));
    #pragma endscop
}
