/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_18 = var_5;
        arr_3 [2] = (arr_2 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (!var_15);
                    arr_9 [i_0] [i_0] [i_2] [i_2] = (((max((arr_4 [i_1 + 1] [i_0 + 2] [i_2 - 1]), 47)) >> (((((arr_4 [i_1 - 1] [i_0 + 2] [i_2 - 1]) ? var_9 : -8)) + 2071874651452786259))));
                    arr_10 [i_2 - 1] [i_1] [i_1] [i_0 + 1] = ((((!(((var_0 ? 16013 : var_16)))))) > ((1757627153 ? 49516 : 49521)));
                }
            }
        }
        var_20 = (min(var_20, (((((((max(var_2, 3284102440004585358))) ? ((65504 ^ (arr_6 [i_0] [i_0]))) : ((2 ? var_8 : (arr_1 [3]))))) | ((((!(((-7614698698195655380 ? var_11 : var_1))))))))))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_13 [i_3] = ((7 ? (max(2487957058761724257, 18446744073709551615)) : (49535 ^ 65528)));
        var_21 = ((~((var_11 << ((((2792302237 ? 16124977466993220488 : var_13)) - 16124977466993220480))))));
    }
    var_22 = ((-var_10 < ((((var_14 + 9223372036854775807) << (((9223372036854775807 / 13510798882111488) - 682)))))));
    var_23 = var_1;
    #pragma endscop
}
