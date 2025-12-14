/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_10);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_16 += var_10;
        arr_2 [i_0] = var_7;
        var_17 ^= var_12;
    }
    for (int i_1 = 4; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_18 |= (min(1, (min(16283528197224493279, ((var_7 ? var_7 : var_4))))));
        var_19 += (((((var_12 ? var_14 : 24576))) ? (((arr_3 [i_1 - 2]) ? 50681 : var_0)) : (((max(var_8, (arr_3 [i_1 - 2])))))));
        arr_5 [i_1] [1] = (((((-(((arr_3 [i_1]) ? 1263 : var_4))))) ? (max((((var_13 ? (arr_4 [9]) : (arr_3 [i_1 - 3])))), var_10)) : ((max(-1249, (arr_4 [i_1 + 1]))))));
    }
    for (int i_2 = 4; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2] = ((((max(((var_12 + (arr_7 [i_2]))), ((-1639936984035150307 ? 14827 : var_12))))) ? (33133 >> 0) : (((!(!18446744073709551608))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_20 = ((~(max(((var_8 ? var_14 : var_7)), (max(var_13, var_7))))));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_15 [i_4] [i_3] = (!var_5);
                        arr_16 [i_2 - 4] [1] [4] [1] [4] [i_4] = (((max((max(1015808, var_10)), 8145)) != (~var_8)));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_21 = (min(var_21, ((min(var_4, (1 == var_6))))));
                        var_22 = ((!(((var_2 ? var_13 : var_10)))));

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_23 *= ((!(((((var_9 ? var_12 : var_13)) % 1)))));
                            var_24 = ((min((((31468260 ? 27150 : -8655))), (var_2 ^ var_9))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_25 = (((var_11 ? (arr_21 [i_3]) : 1)));
                            var_26 -= ((~(var_5 == 8961)));
                            var_27 = 31468260;
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            arr_30 [0] [i_2] [i_4] [i_3] [i_4] [22] [i_4] = ((!(!var_14)));
                            var_28 = (((-(arr_24 [i_6] [21] [i_2 - 3] [i_6] [20]))));
                        }
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_29 = (((min((~24604), (var_6 + -666217883))) << (1263 - 1258)));
                        var_30 = ((-(var_3 / -69)));
                    }
                    var_31 = 455185186415407201;
                    arr_34 [i_2] [i_4] [20] = var_10;
                    var_32 = (((((-0 ? (arr_6 [i_2 + 1]) : -109))) ? var_7 : ((min(((var_4 ? 0 : var_4)), -var_4)))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        arr_38 [9] = ((12011114482475651427 ? (-32767 - 1) : var_14));

        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            arr_41 [i_11] = (~(arr_28 [i_12] [i_12 - 1] [i_12 - 1] [i_12] [i_12 + 1]));
            var_33 *= (var_10 & 1);
            var_34 = ((0 ? var_10 : (arr_13 [i_11] [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_11])));
        }
    }
    #pragma endscop
}
