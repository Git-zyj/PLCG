/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((!(var_2 == var_4)))));
    var_19 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((var_7 ^ (((arr_3 [i_0 + 1] [i_0 + 2]) ^ ((var_8 & (arr_4 [i_1])))))));
                var_20 ^= (((~4294967295) ? (((max(-2147483637, 8456559277693578167)) - var_9)) : (((((!(arr_4 [i_1]))))))));
                var_21 = ((((((max(var_12, var_7))) ? (((arr_0 [i_0]) ? 2147483628 : 68719476704)) : (max((arr_5 [i_0] [10] [i_1]), var_2)))) >> (((!var_0) >> (-1246766735 - 3048200537)))));
                var_22 = 0;
                arr_7 [i_0] [i_0] = var_1;
            }
        }
    }
    var_23 |= (var_5 | var_16);
    #pragma endscop
}
