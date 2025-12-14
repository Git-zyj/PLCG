/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= 0;
    var_21 = var_3;
    var_22 = ((-((-var_14 ? (((-127 - 1) ? var_17 : var_9)) : -1))));
    var_23 -= (((((~(~var_16)))) ? ((var_8 ? (((9 ? 1121501860331520 : var_18))) : ((0 ? var_10 : var_6)))) : -var_10));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_24 = (((-(min(var_10, 1064919359)))));
        var_25 = var_9;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_26 = var_12;
        var_27 *= -1064919349;
        arr_7 [i_1] = -6805;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    var_28 = (max(var_28, (((32768 ? ((min(581608109, ((-(arr_4 [0])))))) : ((((((arr_10 [i_1]) ? -5325303994038082895 : (arr_10 [i_1])))) & ((var_10 ? var_6 : (arr_9 [6]))))))))));
                    var_29 = (max(var_29, (((((((((255 ? 62 : var_13))) ? var_15 : 65535))) ? ((5325303994038082894 ? (arr_11 [i_1]) : (arr_8 [i_3 + 2] [i_2] [4]))) : ((min((((arr_5 [i_1]) + var_3)), -var_13))))))));
                }
            }
        }
        arr_12 [10] &= (~-1064919349);
    }
    #pragma endscop
}
