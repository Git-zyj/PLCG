/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 -= ((2147483647 ? var_0 : (((-2147483647 ? (arr_4 [i_2] [i_1] [i_0]) : var_12)))));
                    var_16 *= ((((((min(2147483647, (arr_0 [i_1] [i_1])))) ? 17281 : 17277))) ? ((var_10 ? ((((-2147483644 && (arr_4 [i_2] [i_2] [i_2]))))) : ((-17275 ? 26655 : 123145302310912)))) : var_2);
                }
            }
        }
    }
    var_17 = (min(var_17, (((((((max(-17275, var_1))) ? ((19897 ? -6293 : 16)) : (((-1478 ? var_13 : var_7))))) + (((var_9 - var_4) ? var_6 : (14805 + 2090418221009358971))))))));
    var_18 ^= (min(((((var_0 ? var_3 : var_2)))), ((((var_5 ? (-32767 - 1) : var_4)) + (var_5 & -8421)))));
    var_19 = var_6;
    #pragma endscop
}
