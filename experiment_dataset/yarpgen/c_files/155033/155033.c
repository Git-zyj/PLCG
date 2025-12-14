/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~((var_1 ? var_11 : (var_9 || var_14)))));
    var_19 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (11174956223558967590 ^ var_6)));
                    var_21 *= (((max((arr_3 [4] [i_2] [i_2]), (arr_0 [i_2] [0])))));
                    var_22 = (max(var_22, (((((!(arr_1 [i_0]))) && -18446744073709551615)))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = (max(67108863, 46539));
                }
            }
        }
    }
    var_23 = var_6;
    #pragma endscop
}
