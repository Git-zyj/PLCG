/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((-7192120544730240272 - 31680), var_3));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 *= (((min(((min(-31681, -31660))), var_4)) >= var_16));
                                var_21 = (arr_8 [i_0] [1] [1]);
                                var_22 &= ((((((((max((arr_1 [i_4]), (arr_8 [i_0] [i_1] [i_1]))))) / (max(var_13, 0))))) ? (((arr_9 [i_4 + 1] [i_1] [i_4] [i_4] [i_1] [i_2]) + var_6)) : (((min((arr_4 [i_4 - 1] [i_4 - 1]), var_14))))));
                                var_23 = 1;
                                var_24 = (7192120544730240289 / 3210588023291230374);
                            }
                        }
                    }
                    var_25 = (arr_2 [i_0] [i_2]);
                    var_26 ^= ((((max(var_16, var_16))) ? var_16 : (((((3210588023291230395 ? (arr_7 [i_0] [i_1]) : var_2)) >= var_2)))));
                    var_27 = (((-(arr_4 [i_1] [0]))));
                    var_28 = 776007916;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        var_29 = ((0 & (((!(arr_19 [i_0] [i_0] [i_6] [i_7]))))));

                        for (int i_8 = 4; i_8 < 21;i_8 += 1)
                        {
                            var_30 = 15236156050418321257;
                            var_31 *= (min((15236156050418321221 >= var_15), ((((-6063508085217206144 ? 15236156050418321226 : -2512713528091925195)) >= (arr_0 [i_7])))));
                            var_32 = (max(var_32, (((((0 ? var_0 : -119)))))));
                        }
                        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            var_33 &= ((max(1044480, ((0 ? 15236156050418321256 : var_5)))));
                            var_34 = ((2512713528091925195 << (((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]) - 1499038275))));
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                        {
                            var_35 = (min(-2512713528091925195, (max((arr_16 [i_7] [i_6] [i_5]), (arr_19 [i_0] [i_6] [i_7] [i_10])))));
                            var_36 = (min(var_36, (((max((max(3210588023291230340, 18446744073709551615)), var_4))))));
                            var_37 *= ((((max((arr_8 [i_0] [i_5] [i_7]), (((arr_28 [i_0] [i_5] [i_6] [i_7] [i_10]) ^ var_18))))) && ((min(31680, 4293922793)))));
                        }
                        var_38 = (arr_29 [i_7] [i_5] [i_6] [i_5] [1] [1] [i_0]);
                    }
                }
            }
        }
        var_39 = (max((((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]) >> (var_6 + 1570577565))), (max((1 > var_16), var_1))));
        var_40 = (min((var_15 * var_6), var_15));
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        var_41 = (arr_33 [21] [21]);
        var_42 ^= 513562025632964706;
    }
    #pragma endscop
}
