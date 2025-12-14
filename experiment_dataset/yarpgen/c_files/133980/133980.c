/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_4;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 -= ((+((-((max((arr_1 [i_0]), -113)))))));
        var_17 &= ((((var_2 ? 0 : (arr_1 [i_0]))) & (-127 - 1)));
        arr_4 [i_0] = 6391;
        var_18 *= var_11;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_19 = arr_6 [i_1] [i_1];
        arr_7 [i_1] = 4294967290;
        var_20 *= (4294967292 >= 4294967286);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = 0;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    {
                        var_21 = (min(var_21, 2083586429));

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_22 -= 1;
                            var_23 ^= ((var_3 ? (((arr_19 [i_2] [i_3] [i_3] [i_5 - 1] [i_6]) ? (arr_14 [i_2] [i_3] [i_4]) : 3752595251076633238)) : (arr_21 [i_3] [i_5 + 1] [16] [i_5 + 2] [5])));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_24 ^= -12349109130512263477;
                            arr_25 [2] [i_5] [i_7] = (((arr_19 [i_5 + 1] [i_5 - 1] [i_5 - 2] [i_5 + 3] [i_5 - 2]) && (arr_19 [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 + 1] [i_5 + 1])));
                            var_25 = -4294967292;
                        }
                        var_26 -= 4294967292;
                        arr_26 [i_2] [i_3] [i_4] [i_4] [i_4] [i_5] = (var_7 <= 30);
                    }
                }
            }
        }
        arr_27 [i_2] = (((-(arr_19 [i_2] [i_2] [2] [i_2] [i_2]))));
        arr_28 [i_2] [i_2] &= var_4;
        var_27 += ((var_13 ? ((1 ? 9 : 4410729381185155971)) : ((((12974930801167443334 && (arr_8 [i_2] [i_2])))))));
    }
    var_28 = (min(var_28, ((((min(var_2, var_6)))))));
    var_29 += (((min(3752595251076633238, ((var_1 ? var_7 : 1073739776)))) & ((((0 && ((max(4410729381185155981, 0)))))))));

    /* vectorizable */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        arr_31 [i_8] = ((-(arr_22 [i_8])));
        arr_32 [6] = 5;
        var_30 = (arr_8 [i_8] [i_8]);
        var_31 += ((((5471813272542108282 ? 99 : (arr_15 [i_8] [i_8] [i_8] [i_8]))) & -var_6));
    }
    #pragma endscop
}
