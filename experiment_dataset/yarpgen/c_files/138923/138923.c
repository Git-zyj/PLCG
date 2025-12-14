/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] &= var_12;
                arr_6 [i_0] [i_0] [i_0] = (((arr_2 [4] [i_0] [i_1]) ? (arr_4 [i_0] [i_0] [i_1]) : ((((arr_1 [i_0]) ? (arr_2 [i_0] [i_0] [i_1]) : (arr_2 [i_0] [i_0] [i_1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {
                var_15 += var_1;
                var_16 ^= (arr_10 [i_3 + 1] [i_3 + 2] [i_3 + 2]);

                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    var_17 &= (min(var_0, ((((arr_8 [10]) != (arr_8 [8]))))));
                    arr_17 [i_2] [7] [7] [i_2] = (min(var_7, ((~(arr_10 [i_2] [i_3 + 1] [11])))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_18 = ((!(arr_8 [i_2])));

                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        arr_23 [i_2] [i_2] [i_2] [4] &= ((((((arr_14 [i_6 + 1] [8] [i_6 - 1] [i_6 + 1]) ? ((3007939959845924045 / (arr_7 [i_3]))) : var_11))) ? (min((((arr_10 [i_2] [10] [i_6 + 2]) ^ var_3)), 40)) : (((var_13 * var_1) & -93))));
                        var_19 = 14336;
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            arr_32 [i_2] [i_3] [9] [i_2] [i_8] = var_3;
                            var_20 ^= (arr_29 [i_5] [i_8 + 1] [i_8] [i_8] [i_8]);
                        }
                        arr_33 [i_7] [i_7] [i_2] = (6 ? ((-90 ? 216172782113783808 : 144)) : 112);
                        var_21 |= (min(0, (arr_24 [i_2] [14] [14] [i_7])));
                        var_22 = (arr_12 [i_3]);
                        arr_34 [i_2] [i_3] [i_2] [i_2] [10] = var_2;
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                    {
                        arr_38 [i_2] [i_3] [i_2] = -95;
                        arr_39 [i_2] [i_3] [4] [1] [i_5] [i_2] = (!((((min(var_2, 14838444224814580082))) || ((min(10748700951833289733, 3055908662))))));
                        var_23 = ((!(((var_6 / (((-75 ? -87 : 15924))))))));
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                    {
                        arr_43 [i_2] [i_3] [4] [i_10] = (((arr_13 [i_2] [1]) + ((max((arr_26 [i_3 + 3] [i_3 + 1] [i_3 + 3] [i_3 - 1] [i_2] [i_3 + 3]), (arr_26 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 + 1] [i_2] [i_3 + 2]))))));
                        var_24 = (min(var_24, (((((((((arr_21 [i_2] [9] [i_5] [i_3] [i_10]) <= -81))) >> ((((1239058646 ? 3608299848894971534 : 3608299848894971537)) - 3608299848894971505)))) % var_0)))));
                        var_25 |= 108;
                        arr_44 [i_2] [i_2] [i_2] [i_5] [i_10] = ((124 ? 97 : ((((arr_14 [i_2] [i_2] [i_10] [i_10]) != var_11)))));
                        arr_45 [i_2] [i_2] [i_2] [i_2] = (arr_10 [i_3] [i_3] [i_10]);
                    }
                }
            }
        }
    }
    var_26 = var_2;
    var_27 = (var_2 % -1);
    #pragma endscop
}
