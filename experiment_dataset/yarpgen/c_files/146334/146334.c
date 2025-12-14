/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_11;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [5] = (((((12582 ? (min(var_5, var_8)) : (arr_1 [i_0] [i_0])))) ? ((36774 ? (arr_1 [i_0] [i_0]) : (var_9 == var_1))) : ((max(16320, var_10)))));
        var_16 = -611167603;
        arr_5 [i_0] = var_4;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_17 += (((((min(var_4, var_3))) ? (arr_7 [0]) : ((((-127 - 1) | 611167602))))));

        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            var_18 *= (((-(((arr_3 [i_2 + 1]) / -611167602)))));
            var_19 = (((arr_6 [i_1]) ? (7163589788466411252 & 611167602) : (min(-0, ((max(28023, var_1)))))));
            arr_12 [i_1] = 9125729755117834777;
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_17 [i_1] = (((max(var_4, (arr_3 [i_1]))) - (arr_14 [i_1] [i_3])));
            var_20 = (min(((((arr_2 [i_1]) == (arr_0 [i_1])))), (arr_0 [i_3])));
            var_21 = var_10;
            arr_18 [i_1] = (((min(1, (((-8656863806485985108 + 9223372036854775807) << (((-611167603 + 611167663) - 59))))))) ? 0 : 611167602);
        }
        for (int i_4 = 4; i_4 < 9;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 7;i_6 += 1)
                {
                    {
                        arr_27 [i_1] [i_1] = (min((((0 + (arr_10 [i_4 - 3] [i_6 - 1])))), (max((((1 ? 1 : 49433))), 244))));
                        var_22 = (max(((-((0 ? var_12 : 6237114440189276921)))), (-127 - 1)));
                    }
                }
            }
            arr_28 [i_1] [i_4] |= (((arr_7 [i_4]) ? 0 : (max(161, 13774166496150154078))));
        }
        var_23 += -27709;
        var_24 = ((min((arr_7 [i_1]), 3)));
    }
    #pragma endscop
}
