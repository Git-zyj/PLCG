/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = var_5;
                    arr_7 [i_0] = -272287515706302472;
                    arr_8 [2] [i_1] [2] &= ((~(arr_2 [2] [i_2 - 1])));
                }
            }
        }
    }
    var_16 = min((-var_8 ^ var_2), var_7);
    var_17 *= var_13;
    var_18 = (((((min(var_0, var_0))))) / ((((18446744073709551592 ? var_6 : var_4)) / var_12)));
    #pragma endscop
}
