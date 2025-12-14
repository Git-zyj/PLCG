/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_6 >= var_14);
    var_16 = (max(var_16, (((var_1 ? var_10 : (min((((3862100312141109550 ? var_5 : var_2))), (max(5102820656476144537, var_8)))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] [i_2] [i_0] = ((-(arr_0 [i_0 + 1])));
                    arr_11 [i_0] [i_1] [i_0] = (2420148667 ? (((((((arr_1 [i_1]) ? -333824610 : (arr_5 [9]))) <= 1)))) : (arr_9 [i_2] [i_0]));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                var_17 = 5102820656476144544;

                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {
                    var_18 = (arr_13 [i_3] [i_5]);
                    var_19 *= (arr_21 [i_3] [i_4] [i_5] [i_6] [i_3] [i_6 - 1]);
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_24 [i_7] = ((arr_16 [i_3] [i_3] [i_7]) + (arr_14 [i_3] [i_3] [i_7]));
                    var_20 = ((var_11 << (var_12 - 8830761846652007535)));
                    var_21 = arr_23 [i_3] [i_4] [i_4] [i_4] [i_7] [i_7];
                }
                var_22 = (arr_23 [i_3] [i_4] [i_4] [i_3] [i_4] [i_3]);
                var_23 = (arr_17 [i_3] [i_4] [i_5]);
                var_24 &= ((var_4 ? (arr_20 [i_3] [i_3] [i_3] [i_3] [i_3]) : 8828));
            }
            var_25 = var_5;
            var_26 = ((((((arr_16 [i_3] [14] [14]) ? (max(-333824607, 196363619956966381)) : -1376334471))) ? (arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : ((((var_8 && 894) + ((197 ? 2147483626 : var_5)))))));
            arr_25 [i_3] = 3202572459;
        }
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            var_27 = (min(var_27, var_2));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    {
                        var_28 = (max(var_28, (!var_8)));
                        var_29 = (min((197 << 1), var_12));
                    }
                }
            }
            arr_33 [i_3] |= 0;
            var_30 ^= ((((((arr_15 [i_3]) ? ((max((arr_26 [i_3] [i_3]), var_11))) : (((arr_26 [i_3] [i_3]) ? (arr_27 [i_3] [i_8] [i_8]) : var_6))))) ? var_10 : (((!var_1) ^ -0))));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_31 |= (arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]);
            var_32 = (max(var_32, (((-(min(0, (arr_19 [i_3] [i_3] [i_11]))))))));
        }
        var_33 = (((var_7 && ((max((arr_31 [6]), -2147483627))))));
    }
    var_34 = (((+-0) ? var_3 : (max(var_2, 1))));
    #pragma endscop
}
