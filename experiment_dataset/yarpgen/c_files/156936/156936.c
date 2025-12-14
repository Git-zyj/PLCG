/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = (i_0 % 2 == 0) ? (((((((max(var_2, var_8)) << (((((var_4 + 2147483647) >> (((arr_5 [i_0]) - 61392)))) - 268433604))))) ? var_5 : ((var_4 ? (arr_6 [i_2 - 2] [i_0] [i_0] [i_0]) : (arr_6 [i_2 - 2] [i_0] [i_0] [i_1])))))) : (((((((max(var_2, var_8)) << (((((((var_4 + 2147483647) >> (((((arr_5 [i_0]) - 61392)) + 21916)))) - 268433604)) + 268433617))))) ? var_5 : ((var_4 ? (arr_6 [i_2 - 2] [i_0] [i_0] [i_0]) : (arr_6 [i_2 - 2] [i_0] [i_0] [i_1]))))));
                    arr_10 [i_0] [i_0] [i_0] = (min(((((~var_11) <= (~var_7)))), ((65525 ? 1 : 1))));

                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_13 -= ((var_5 != (arr_13 [i_1] [14])));
                            arr_16 [i_0] [4] [9] [i_2 + 1] [19] [i_0] [21] = var_2;
                            var_14 = (!var_4);
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_21 [16] [6] [i_1 + 2] [0] [i_0] [15] = var_11;
                            var_15 &= ((~(arr_6 [i_0] [4] [i_5] [i_5])));
                        }

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_16 = ((~(~233)));
                            arr_24 [16] [i_1] [i_0] [i_3 - 3] = (((min(((var_3 >> (var_2 - 17864512255295604141))), (!var_7)))) * ((min((arr_6 [i_1] [i_0] [i_0] [17]), var_0))));
                        }
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            var_17 = (min(var_17, ((((~(arr_1 [i_3])))))));
                            var_18 = (max(((var_9 ? (arr_6 [i_1 - 2] [i_2 + 1] [i_0] [i_7 + 1]) : (arr_6 [i_1 - 1] [i_2 + 1] [i_0] [i_7 - 2]))), (min((min(var_7, (arr_9 [i_0] [17] [17] [i_7]))), -var_7))));
                            var_19 = var_9;
                        }
                        arr_27 [i_0] [i_0] [1] [i_0] = ((((var_3 >= (arr_12 [i_1 + 2] [i_1 - 1] [i_1] [0]))) ? (arr_12 [i_1 + 1] [11] [1] [i_1 + 1]) : (((((arr_12 [i_1 + 3] [0] [i_1] [i_1]) > var_9))))));
                        var_20 = ((+(((1 - 18446744073709551615) * 11))));
                    }
                    arr_28 [i_0] [i_1 - 3] [i_1 - 1] = (arr_3 [1]);
                    var_21 = (arr_13 [i_1] [i_1]);
                }
            }
        }
    }
    var_22 = (min((((var_9 ? var_5 : var_10))), ((min(((var_11 ? var_8 : var_9)), var_0)))));
    var_23 = (min(var_23, (((((var_8 ? (var_5 != var_6) : var_3)) < ((((max(128, 1))) ? (max(var_5, var_8)) : (var_7 & var_3))))))));
    var_24 = ((!((min((var_0 < var_9), (max(var_0, var_9)))))));
    #pragma endscop
}
