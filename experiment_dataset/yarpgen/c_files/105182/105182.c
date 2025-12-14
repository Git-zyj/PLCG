/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (min((-2796 || var_4), (max(((var_0 ? -125 : var_17)), (!199)))));
    var_19 = (max(((((-8501 >= var_16) == (1 >= 1)))), var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2] [i_1] = -41;
                    var_20 += ((1 > (arr_3 [i_0] [i_0] [i_0])));
                    arr_8 [i_0] = (min(var_12, (((arr_1 [i_0]) ? (((arr_1 [i_0]) ? 17 : var_17)) : var_1))));
                    var_21 -= (((arr_6 [i_0] [i_1] [i_2] [i_0]) >> ((((arr_6 [i_0] [i_0] [6] [i_0]) < (arr_6 [i_0] [i_2] [i_0] [i_1]))))));
                }
                arr_9 [i_0] [i_1] &= 7680;
                var_22 = (max(21954, 43582));

                for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
                {
                    var_23 = ((var_7 % (((((max(0, (arr_2 [i_3])))) || (arr_0 [i_0]))))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_14 [i_0] [6] [4] [i_4] = ((-2538437095744206928 ? 190772483 : 43571));
                        var_24 = (min(var_24, ((((186 ? 1 : 17269))))));
                    }
                    arr_15 [i_0] [i_0] [i_0] [i_3] = (((6 << (-17266 + 17281))));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 8;i_5 += 1) /* same iter space */
                {
                    var_25 |= (arr_0 [i_0]);
                    arr_19 [i_0] [i_1] [i_1] [i_1] |= (((-(arr_17 [i_5] [i_1] [i_0]))));
                    arr_20 [i_0] [i_1] [6] = (arr_4 [i_0] [i_1] [i_0]);
                    arr_21 [i_0] [i_1] [i_5] = var_4;
                }
                for (int i_6 = 3; i_6 < 8;i_6 += 1)
                {
                    var_26 = (max(var_26, (((var_13 - ((min(124, (min(7676, var_1))))))))));
                    arr_26 [i_0] [i_1] = ((((max(var_14, (~var_3)))) ? var_6 : (max((var_4 > var_0), var_17))));
                }
            }
        }
    }
    var_27 = ((((((!((max(var_3, var_2))))))) % var_11));
    #pragma endscop
}
