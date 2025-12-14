/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_0 + 24670);
    var_21 = min(var_19, ((((var_18 ? var_16 : -25752)) + (((var_11 ? var_13 : 63))))));
    var_22 = ((+((+(((var_4 + 2147483647) << (var_1 - 28388180)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_23 = (-((116 << (18446744073709551615 - 18446744073709551596))));

                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            var_24 = (arr_3 [i_0] [i_3 + 4]);
                            var_25 = var_14;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_26 = -44;
                            arr_14 [7] [i_1] [i_1] [i_2] [i_3 + 1] [i_1] = (-122 != var_12);
                            var_27 ^= (((arr_10 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1]) % (arr_11 [i_2 + 2] [i_2 + 2] [1] [i_2] [i_2 + 2] [i_2] [i_2 + 2])));
                            var_28 += (((arr_13 [i_2 - 1] [i_2 + 1] [i_2] [i_2] [i_3 + 2]) ? 18446744073709551615 : (arr_13 [i_2 + 2] [4] [i_2 - 1] [i_3] [i_3 - 2])));
                        }
                        var_29 = ((-1282925117 ? 0 : 32755));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        var_30 = (max(var_30, ((((-32755 != var_4) >= ((var_3 ? -3725835773743600933 : var_0)))))));
                        var_31 = (arr_12 [i_0] [i_0] [i_2 + 2] [i_6 + 1] [i_0]);
                    }
                    for (int i_7 = 2; i_7 < 7;i_7 += 1)
                    {
                        var_32 += (arr_8 [i_0] [i_0] [i_1] [i_2 + 1] [9] [i_7 + 2]);
                        var_33 = (max(var_33, (((-var_9 ? -32756 : 141)))));
                        var_34 = (((((-2570834404233870524 ? 2570834404233870521 : var_18)) <= (max(var_14, (arr_15 [i_0] [i_1] [i_1] [5] [i_0]))))));
                    }
                    var_35 = (((((var_5 ? var_0 : (arr_4 [i_2 - 1])))) ? ((((arr_4 [i_2 + 1]) > (arr_4 [i_2 + 1])))) : (arr_4 [i_2 + 1])));
                    arr_20 [i_0] = (~2570834404233870536);
                }
            }
        }
    }
    var_36 *= var_10;
    #pragma endscop
}
