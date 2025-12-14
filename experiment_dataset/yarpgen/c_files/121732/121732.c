/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((((~((var_1 ? var_1 : var_6))))) ? (((var_5 & var_12) << (((~1) + 4)))) : (((1 >> ((((max(var_9, 1))) - 16573)))))));
    var_16 = (+(((~var_8) & ((1 ? var_6 : var_13)))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_17 ^= (((!-26704) ^ (max(((max(var_0, var_9))), (((arr_2 [i_0]) ? var_0 : 802046926))))));
        arr_3 [i_0] = ((-(((!((max(-7906, 268433408))))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 = (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]);
                                var_19 = ((143 ? (((3061942703 < var_11) ? ((max(var_2, 15728640))) : ((var_2 ? (arr_8 [i_3] [i_4]) : 255)))) : (((-(var_7 - 1))))));
                                var_20 |= (((((arr_7 [i_1 - 3] [i_1] [i_4] [i_0 - 3]) < (arr_10 [i_0 - 2] [i_0] [i_1 - 1] [i_2] [i_2]))) ? (max(0, 2202541332)) : (((((arr_10 [i_0 + 2] [i_1] [i_1 + 1] [i_1] [i_1]) >= var_12))))));
                                var_21 = (min(var_21, (((((max(22405, (15940694357007143237 ^ 8172)))) ? ((-120 ? 1935853008555180043 : 3703)) : var_13)))));
                            }
                        }
                    }
                    arr_13 [i_1] = (max((((arr_10 [i_2] [i_1] [i_2] [i_0 + 2] [i_1]) ? (arr_10 [i_0] [i_1] [i_1] [i_0 + 2] [i_2]) : var_13)), (((-(arr_10 [i_0] [i_1] [i_0] [i_0 - 1] [i_2]))))));
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 8;i_5 += 1) /* same iter space */
    {
        var_22 = (((-(arr_14 [i_5 - 1]))));
        var_23 = (var_10 | (!8218));
        arr_18 [i_5] [i_5] = ((18446744073709551615 ? (max((arr_5 [i_5] [i_5] [i_5]), 927495140695113301)) : (4062 / -42003190)));
        arr_19 [i_5] = ((((max((((242 || (arr_12 [i_5] [i_5] [i_5])))), var_1))) ? (~var_14) : (var_11 || 927495140695113316)));
        var_24 = (max(3061942711, 1));
    }
    #pragma endscop
}
