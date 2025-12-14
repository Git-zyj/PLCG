/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0 + 1] = var_1;
        arr_4 [12] [9] = ((((var_13 << (((arr_1 [i_0 + 1]) - 2352191723)))) % (arr_0 [i_0 + 1])));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        var_16 = ((var_8 ^ (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1 - 1])));
                        var_17 = (min((var_2 & 7936), ((((arr_14 [i_1] [i_3 + 1] [i_1] [i_3] [i_3 - 1]) >> (2238350559 - 2238350557))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_18 = (((var_3 > 1) << ((var_10 ? (arr_2 [i_1]) : var_13))));
                        arr_18 [i_1] [9] = (((((-7915 + 2147483647) << (((arr_0 [i_1]) - 31162)))) - (arr_9 [8])));

                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            var_19 = var_11;
                            var_20 &= (arr_20 [i_6] [i_6 - 1] [i_6 - 1] [10] [i_6 - 1] [i_6]);
                            var_21 = (arr_2 [i_1]);
                        }
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            var_22 = (min(var_22, var_15));
                            var_23 = (((arr_17 [13] [i_3 - 1] [i_3] [i_2] [i_2]) << 7));
                        }
                    }
                    arr_24 [i_3] [i_1] [i_1] = (((min(var_8, 287540435758030002)) >> ((((~(arr_16 [i_1 + 1] [i_3] [12] [i_3 - 1] [i_3 - 1]))) + 135))));
                }
            }
        }
    }
    #pragma endscop
}
