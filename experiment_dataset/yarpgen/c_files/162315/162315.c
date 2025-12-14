/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(-6554596897012186273, 14221055409207824992)) * (((((((1 >> (100 - 88)))) && (!var_6)))))));
    var_16 = (max((6 == 0), var_8));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (min(var_17, ((((((((var_1 ? var_0 : 255))) ? 231084318 : var_2)) < (((~(!-7)))))))));
        var_18 = var_11;
        var_19 |= var_7;
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_20 = (min(var_20, 0));
                        arr_11 [i_0] [i_1] [i_1] = ((((((-6 + 9223372036854775807) >> (3461091224 - 3461091186)))) ? (4063882978 > 0) : (max(var_4, ((min(var_6, var_1)))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 24;i_6 += 1)
            {
                {
                    arr_21 [10] [i_4] = ((var_6 == ((((14 <= -5908033753030795686) == 32768)))));
                    var_21 &= var_11;
                    var_22 = 0;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_23 -= -10;
                                var_24 = (max(var_24, ((((40980 ? (32786 == var_5) : (14254300490129504815 < var_6))) <= (82 == 0)))));
                                var_25 = (min(-22, var_5));
                                var_26 -= ((114 >> (-116 + 135)));
                                var_27 |= (max((((var_9 ? var_9 : ((min(39399, var_3)))))), ((4063882968 ? (((14516 ? var_0 : var_3))) : (var_1 + var_12)))));
                            }
                        }
                    }
                    arr_27 [i_4] = 13777;
                }
            }
        }
        var_28 = (min((~23256), (((~31509) | (var_7 ^ var_10)))));
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        var_29 = (max(var_29, (((((var_10 ? var_0 : var_0)) >= var_9)))));
        var_30 = (min(var_30, var_7));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 15;i_11 += 1)
            {
                {
                    var_31 = ((-(165 > -7311594705766732925)));
                    arr_39 [i_9] [i_10] [i_9] = (min(var_2, (((0 == 1650939651) ? ((((var_14 + 2147483647) >> (var_13 + 47)))) : -231084311))));
                    arr_40 [i_9] [14] [i_11] [i_11] = (((4203328985 && (var_10 && var_11))) ? (((var_8 ? var_3 : var_9))) : (((!(var_14 >= var_3)))));
                    var_32 = ((-(((!(var_0 / var_3))))));
                    arr_41 [i_11] [i_9] [i_9] = (((var_9 || 231084309) ? (((((1 ? 1 : var_3)) <= (var_12 || var_2)))) : ((-2 ? var_8 : 44550))));
                }
            }
        }
        arr_42 [1] [i_9] = (!27);
    }
    var_33 = var_5;
    #pragma endscop
}
