/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 ^= ((1 ? 8439046861930054563 : 10007697211779497053));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_1] [i_1] [i_0] = (((((8439046861930054568 ? -32742 : var_8))) > (((var_10 & -6080112711326162954) / 8486892207308739495))));
                                var_16 &= (!176);
                                var_17 = (((var_7 ? 146 : 975819664265667684)));
                            }
                        }
                    }
                    arr_13 [i_1] [i_2] = ((((-9223039411471831873 ? 10007697211779497067 : var_13)) != (((var_12 ? var_6 : var_8)))));
                }
            }
        }
    }
    var_18 = (((-83 ^ var_4) ? var_0 : ((55816 ? var_1 : (-16879 || var_14)))));

    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        var_19 = ((var_4 ? 1500 : 182));
        var_20 -= var_10;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_21 [i_5] = (~27021597764222976);
                    arr_22 [i_5] &= ((15 ? ((var_11 ? var_4 : 570928966186722796)) : -570928966186722807));
                    var_21 = (((((1 ? 570928966186722796 : 255))) ? (34268 >> var_4) : (((1 != 10007697211779497038) ? var_5 : 0))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 14;i_8 += 1)
    {
        arr_25 [i_8] = (15 & 60517);
        var_22 = (((((8439046861930054566 ? var_14 : 187))) ^ var_13));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        arr_28 [i_9] [i_9] |= 31267;
        var_23 = (((((var_11 ? 187 : var_9))) ? ((-15 ? 54686 : var_2)) : 1));
        arr_29 [i_9] = ((((var_10 >= ((53868 ? var_9 : 28)))) ? ((11667 ? var_11 : 1)) : 21));
    }
    var_24 = var_9;

    for (int i_10 = 4; i_10 < 21;i_10 += 1)
    {
        var_25 += (((29933 >= 0) ? 3 : var_5));
        arr_33 [i_10] [i_10] = ((!(var_4 == var_4)));
        arr_34 [i_10] [i_10] = ((((((var_2 ? 31277 : -9223372036854775795))) ? var_9 : (((-2 ? 16 : -32752))))));
    }
    #pragma endscop
}
