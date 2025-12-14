/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 16;i_4 += 1)
                            {
                                arr_11 [i_0] [i_2] [11] [i_2] [i_4] = (max((((var_10 | 0) ? ((var_3 ? var_7 : var_9)) : var_9)), 18501));
                                arr_12 [i_2] [i_0] [i_2 + 2] [i_4] = var_2;
                                var_11 = var_3;
                                var_12 += ((var_2 + var_3) + var_7);
                                var_13 ^= ((((6141589278878868094 ? 89 : 56))) ? -5726152146817610059 : ((var_8 ? (~var_4) : ((89 ? 1496189135 : 10629706274393122216)))));
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_14 = var_10;
                                var_15 &= min(var_4, (10254258054792319709 + 1));
                                arr_15 [i_2] = ((1 ? (((~(min(var_1, 2147483647))))) : (max(-196255757, 9223372036854775807))));
                                var_16 = (((-127 - 1) ? (2044 >= var_5) : (((((4095 ? var_5 : var_1))) ? 39562 : (~var_6)))));
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                arr_18 [i_2] [i_1] [i_1] [i_3] [i_3] [i_3] [i_2] = (((208 ? var_0 : 54468)));
                                arr_19 [i_2] = (max(((min(0, 1))), 183));
                                var_17 += (((1814430472 && (!var_0))) ? -1650819254 : (((min(6858663932091619578, var_0)) * (((89 ? var_6 : 0))))));
                                var_18 = (min(-0, ((var_3 ? var_5 : var_8))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 17;i_7 += 1)
                            {
                                arr_23 [i_0] [i_1] [14] [i_2] [i_7] = ((-1762906487 ? (13971799543369545338 == -18165) : 2044));
                                arr_24 [i_0] [i_2] [i_0] [i_2] [i_2] = var_6;
                                arr_25 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_7] = ((0 > ((24931 ? 6319676667735472384 : var_9))));
                            }
                            var_19 ^= (18005 <= 0);
                        }
                    }
                }
                var_20 -= ((17113044233576052599 ? (-32767 - 1) : (~21374)));
                arr_26 [i_0] [i_1] = 2147483647;
            }
        }
    }
    var_21 = ((-(max((max(12131, 9223372036854775807)), (~0)))));
    var_22 = (min(9223372036854775802, 9223372036854775807));

    for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_23 += var_8;
        var_24 = ((var_5 ? 0 : (((((max(var_6, var_7))) ? 484397486 : 24931)))));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 14;i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 16;i_11 += 1)
            {
                {

                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        var_25 ^= (~246);
                        var_26 = var_6;
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 2; i_14 < 15;i_14 += 1)
                        {
                            {
                                var_27 |= var_6;
                                var_28 *= var_8;
                            }
                        }
                    }
                }
            }
        }
        var_29 = -23343;
        var_30 = var_2;
        arr_47 [i_9] = 1;
    }
    var_31 += var_7;
    #pragma endscop
}
