/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((var_7 ? var_3 : var_1))) ? 249 : var_5)) < ((var_3 ^ ((max(18, 1)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_12 = (((arr_0 [i_0]) % (~10)));
        var_13 = (1101648983900617265 >> (19275 - 63));
        var_14 = (max(var_14, (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_15 *= ((~((-34 ? (arr_10 [i_3 + 1] [i_3] [i_3] [i_3 - 1]) : 6424291358455039740))));
                            var_16 = ((var_3 ? var_1 : var_1));
                            arr_18 [i_2] [i_2 + 1] [i_2] [i_2] [i_2] [i_2] = ((var_0 ^ (((((((arr_4 [i_1] [i_2]) ? var_2 : 18446744073709551615))) || var_1)))));
                            var_17 = (max(var_17, (((((((~18446744073709551615) ^ (((var_5 ? 1 : var_1)))))) ? ((((max(255, var_4))) ^ (max(170, 1048512)))) : -23311)))));
                            arr_19 [i_1] [i_2] [i_3] [i_4] [i_5] = ((25 ? (((!(arr_2 [i_2 - 1])))) : (arr_3 [i_1])));
                        }
                        arr_20 [i_2] [i_2] [1] = (min(((((-6243926540798866797 ? 38969 : 25)))), 122));
                        arr_21 [i_2] [i_3 - 2] = var_8;
                        var_18 ^= var_9;
                    }
                }
            }
        }
        var_19 = var_7;
    }
    #pragma endscop
}
