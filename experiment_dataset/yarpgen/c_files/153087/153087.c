/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_14;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            var_18 ^= (((((!((((arr_3 [i_0 - 1] [i_1 + 2] [i_1]) ? var_10 : (arr_3 [i_0 - 1] [i_1 + 1] [i_1 - 2]))))))) * ((((arr_3 [i_1 - 1] [i_1 + 2] [i_0 - 1]) != (min(7101204943999575973, 12319728067358849113)))))));
            var_19 = (max(var_19, (arr_4 [i_1 + 2])));
        }
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_20 = (min(var_20, 2370379462));
            var_21 = (min((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : 17752283281494621918)), (arr_1 [i_0 - 2])));

            /* vectorizable */
            for (int i_3 = 2; i_3 < 7;i_3 += 1)
            {
                arr_9 [i_2] [i_2] = -1;
                var_22 = (min(var_22, (((1 ? (arr_4 [i_2 + 1]) : var_13)))));
            }
            for (int i_4 = 1; i_4 < 7;i_4 += 1)
            {
                var_23 = (min(var_23, 1));
                var_24 = (max(var_24, (arr_7 [5] [i_2])));

                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    arr_14 [i_2] [6] [i_2] [i_2] [i_2 + 1] [i_2] = ((!(var_16 == var_1)));
                    var_25 = (((min(var_14, (arr_8 [i_0] [i_2 + 1] [i_2 + 1] [i_5])))));
                    var_26 = (arr_0 [i_2]);
                }
                arr_15 [i_0] |= ((((76 ? var_3 : 8866674670084927547))) ? ((var_13 << (3073113465754327627 - 3073113465754327600))) : (arr_10 [i_0 - 2] [i_2 + 1]));
            }
            for (int i_6 = 2; i_6 < 7;i_6 += 1)
            {
                var_27 = 25088;
                var_28 ^= (((-9308 / 36) != var_3));
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 7;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 9;i_9 += 1)
                {
                    {
                        var_29 *= ((!(((((~(arr_4 [i_0]))) * (arr_19 [i_0 - 1]))))));
                        arr_25 [i_9] [i_8] [i_7] [i_9] = (arr_24 [i_9 - 2] [i_9 + 1] [i_9 - 1] [i_8 - 1] [i_7 + 3]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 9;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 9;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 6;i_12 += 1)
                {
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_11] [i_11 - 1] [1] = (((((~(~var_11)))) ? ((max((arr_3 [i_12 + 3] [8] [i_10 - 1]), (arr_3 [i_12 + 3] [i_12 + 3] [i_10 - 1])))) : (((~var_14) | var_4))));
                        var_30 = (min(var_30, (!5060842976263417679)));
                    }
                }
            }
        }
        arr_33 [i_0 - 1] [i_0] |= ((((var_7 ? (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_12))) ? ((((min((arr_26 [i_0]), (arr_0 [i_0 + 1])))) ? (((arr_23 [i_0] [i_0]) ? -29781 : (arr_31 [i_0] [i_0] [i_0] [i_0 + 1] [i_0]))) : (min(7406751604571611167, var_15)))) : 25103);
        var_31 = 4160749568;
    }
    #pragma endscop
}
