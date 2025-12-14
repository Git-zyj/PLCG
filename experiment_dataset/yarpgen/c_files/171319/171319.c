/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] = (-var_7 + (arr_5 [i_1] [i_1 - 1]));
                arr_8 [i_0] [i_0] = ((~((~(~var_14)))));
                var_20 = ((((!(arr_0 [i_1 + 2] [i_1 + 3]))) && ((!(!9007199254740991)))));
                var_21 = var_18;
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_22 *= (!1340715356);
        var_23 |= ((!((((arr_11 [i_2] [i_2]) & 9007199254740983)))));
        var_24 = (min(var_24, (((-var_12 > ((((!(!4294967295))))))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_14 [i_2] [i_3] [i_3] = ((var_9 & (arr_11 [i_2] [i_3])));
            arr_15 [i_2] = -var_8;
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_24 [i_2] [i_2] [i_2] [i_5] [i_2] = -var_11;
                        var_25 |= ((arr_20 [i_5 + 1] [i_5 + 1]) / ((-(arr_20 [i_5 + 1] [i_5 + 1]))));
                        var_26 ^= var_5;
                        var_27 = (((var_17 | var_5) >> ((((~(arr_12 [i_5 - 1] [i_5 + 1] [i_5 - 1]))) + 31765))));
                        var_28 = (!((2 && (arr_12 [i_2] [i_2] [i_2]))));
                    }
                }
            }
            arr_25 [i_2] = -10;
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_29 = ((~((var_13 << (84 - 67)))));
                            arr_35 [i_2] [i_7] [i_9] [i_7] [i_7] [i_2] [i_8 + 2] |= 65521;
                            arr_36 [i_10] [i_9] [i_9] [i_8 + 2] [i_8] [i_9] [i_2] = -1538479731;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_30 = ((!(((~(!-1340715368))))));
                            var_31 = (!(~var_4));
                            var_32 ^= ((-(var_2 || var_16)));
                        }
                    }
                }
                arr_42 [i_2] [i_7] [11] = ((-(!10)));
            }
            var_33 ^= ((((((arr_10 [i_7] [i_2]) < var_4))) != (!2357)));
            var_34 = (min(var_34, (--18437736874454810596)));
        }
    }
    var_35 = -var_11;
    #pragma endscop
}
