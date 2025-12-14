/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 = ((var_6 & (min(-3610, (255 - 426147681)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_4] |= 18446744073709551614;
                                arr_13 [i_0] [i_0 - 1] [i_1] [i_2] [i_3] [i_3] [i_4] = var_1;
                            }
                        }
                    }
                    var_11 *= (!var_3);
                }
            }
        }
    }
    var_12 = ((((((max(var_0, var_0))) ? 25 : (var_2 >= 25))) | (min((var_2 != var_9), 490692602))));
    var_13 = max(((var_3 & (((var_6 ? var_2 : 58090))))), (((((min(var_9, var_4))) || var_4))));

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = 1;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_26 [i_7] [i_7] &= ((~(arr_22 [i_5] [i_5] [0] [i_8 - 3] [i_8 + 1] [i_6])));
                        var_14 += var_4;
                    }
                }
            }
        }
        var_15 &= (arr_21 [i_5] [i_5] [i_5] [i_5]);
        var_16 = ((((255 ? 6708180092957003993 : 243)) - ((max((arr_19 [i_5]), (arr_15 [i_5]))))));
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        arr_29 [i_9] [i_9] &= ((((((arr_27 [i_9]) ? var_9 : (arr_15 [i_9])))) ? 175 : ((-((var_5 ? var_1 : 15303689682958295821))))));
        var_17 = (min(((max(var_5, (arr_28 [i_9])))), (max(16988303672543684477, var_4))));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                {
                    arr_35 [i_11] [i_10] [i_9] = ((24896 ? ((((max(31161, 11353010176609812456))) ? (((arr_18 [i_9] [i_10] [10]) ? 129 : 19)) : ((min(var_0, var_5))))) : var_0));
                    arr_36 [i_11] [i_10] [i_9] = (arr_31 [i_11]);
                    arr_37 [i_9] [i_9] = (((((arr_31 [i_9]) % (arr_31 [i_11]))) >> (((min(var_4, 18446744073709551615)) - 570230210))));
                    var_18 = (min(var_18, 1));
                }
            }
        }
    }
    #pragma endscop
}
