/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_10 >= (((var_14 || 0) * (var_0 < -2147483627)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] = ((var_11 * (arr_7 [i_3 - 2] [i_3 - 2] [3])));
                        var_16 = ((7680 >> (var_4 - 25230)));

                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            var_17 = (~var_5);
                            var_18 = ((((var_2 << (2147483647 - 2147483647))) / (arr_11 [i_0 + 2] [i_0 + 2] [i_4 - 1] [i_3 - 1] [i_0])));
                            var_19 = (((arr_6 [i_3] [i_3] [i_3 + 2] [8]) - 1));
                            arr_12 [i_4 + 1] [i_1] [i_0] [i_3] [i_3 + 1] = var_10;
                        }
                        for (int i_5 = 3; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            arr_16 [7] [7] [i_1] [7] [i_0] [i_1] [i_2] = (1473976958751060860 <= 16426723523468719049);
                            var_20 = (1332360192 <= 1228200638);
                            arr_17 [i_0] [i_1] [i_2] [i_1] [i_2] = (((arr_7 [i_5 + 1] [i_3 + 1] [i_0 + 1]) >> (16307058337702822144 - 16307058337702822108)));
                            var_21 = ((2020020550240832566 * (((((arr_15 [i_0] [i_0] [i_2] [i_1] [3] [i_2]) != 2716208077))))));
                        }
                        for (int i_6 = 3; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_22 = ((3486850961526980892 * (arr_9 [i_0] [i_0 + 4] [i_3 + 1])));
                            var_23 ^= 0;
                            var_24 = ((~(arr_11 [i_0] [i_6] [i_6 - 3] [i_6] [i_0])));
                            arr_20 [i_0] [i_1] [i_2] [i_2] [i_0] = (var_5 > 64);
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_25 = (((var_5 + 2147483647) << (8444249301319680 - 8444249301319680)));
                            var_26 -= (arr_6 [i_0] [8] [i_0 + 1] [i_0 - 1]);
                            var_27 = (((-709205843 + 2147483647) << (21823 - 21823)));
                            var_28 = (((882819036 % 1) <= var_3));
                        }
                        var_29 = (var_5 / 2147483647);
                    }
                }
            }
        }
        var_30 = ((~(2211046686 || -76)));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        arr_25 [i_8] = ((arr_23 [i_8] [i_8]) == var_1);
        var_31 = ((((-(arr_23 [i_8] [i_8]))) >> (!var_10)));
        var_32 = (((arr_23 [i_8] [i_8]) - -5702153980171312481));
    }
    var_33 = (max(var_33, ((((((!16426723523468719036) * (14959893112182570739 != 1174399951))) == (var_10 * var_1))))));
    var_34 = (((var_11 / 3079714295) != var_7));
    var_35 += var_14;
    #pragma endscop
}
