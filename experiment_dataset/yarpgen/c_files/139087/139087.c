/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(0, -41984));
    var_15 = ((((min((max(var_2, var_4)), 338103732141861514))) ? var_13 : var_10));
    var_16 = ((-10818 ? ((18446744073709551615 ? (((max(var_12, var_1)))) : (max(var_12, 18446744073709551599)))) : (-4727 + 19759)));
    var_17 = (min(var_17, 16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = ((((((246 >> (((arr_2 [i_0]) - 59714))))) & (min(21990, 10030092071100436905)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = 16;
                            var_19 = ((+((21990 ? (arr_7 [i_3] [i_3] [i_3 + 2] [i_3]) : 6765390401911446068))));

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_20 *= ((((0 ? var_7 : ((((arr_6 [i_1]) | 21990))))) & (((((arr_2 [i_0]) ? 0 : 73)) << (((arr_12 [i_4] [i_1] [i_1] [i_2] [i_3 + 2] [i_4]) - 31))))));
                                arr_13 [i_4] [i_1] [i_2] [i_1] [i_0] = ((var_9 <= (arr_12 [i_1] [i_1] [i_2] [i_3 + 2] [i_4] [i_1])));
                                var_21 += ((((((arr_6 [i_1 - 1]) ^ var_10))) ? (((min(19187, var_11)))) : ((((max(-13, 12875))) ? (min(127, (arr_0 [i_0] [i_2]))) : 65535))));
                                arr_14 [i_1] [i_1] [i_1] = (max(-21990, ((min(-66, (arr_11 [i_1]))))));
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                var_22 -= (min((arr_12 [i_5] [i_1] [i_1] [i_1] [i_1 - 2] [i_5]), (((!(arr_0 [i_0] [i_0]))))));
                                arr_17 [i_0] [i_1] [i_2] [i_3 + 2] [i_0] = 4611686018427387904;
                            }
                            for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                var_23 ^= ((max((max(8186247616933437212, 2216646261)), (~65535))));
                                var_24 = ((((max(-27, (((arr_16 [i_1]) ? 48 : 65535))))) ? (((16 - 1) + -66)) : var_3));
                            }
                            for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
                            {
                                arr_24 [i_0] [i_1 + 3] [i_1] [i_3] [i_0] [i_0] [i_2] = ((((max((arr_22 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7] [i_7]), (arr_22 [i_7 - 1] [i_7 - 1] [i_7] [i_7] [i_7] [i_7 - 1])))) ? ((((arr_22 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] [i_7]) - (arr_8 [i_7] [i_7 - 1] [i_1] [i_7 - 1] [i_7 - 1] [i_7 - 1])))) : (((arr_22 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1]) ? 5906098451762603064 : (arr_8 [i_7] [i_7 - 1] [i_1] [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
                                var_25 = (min(((((18446744073709551599 ? var_3 : (arr_23 [i_1] [i_1 + 1] [i_1] [i_1] [i_1]))))), (min(144, 0))));
                                var_26 = (max(var_26, (((((max(16176, 21990))) ? (arr_19 [i_0] [i_1] [i_0] [i_2] [i_3 + 1] [i_7 - 1]) : -var_11)))));
                            }
                        }
                    }
                }
                arr_25 [i_1] [i_1] = ((393216 + (arr_20 [i_0] [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
