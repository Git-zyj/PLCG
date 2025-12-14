/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (min(-4004994064349371268, (max(34, (max(5745689582784837132, var_3))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_9 [i_0] = (var_5 - -1);

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [2] = (((((0 ^ var_5) >> ((var_5 ? 0 : 14436352434432460419)))) & 1));
                            var_12 = (min((max((((var_2 ? var_9 : var_3))), -0)), (((!(arr_1 [i_0]))))));
                            var_13 |= (((~(65535 & 2))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_14 |= max(1, (!16383));
                            var_15 = (17508538591970340328 + 49152);
                            var_16 = (((((((arr_0 [i_3 + 1] [i_0]) <= 32764)))) ^ (min((max(var_8, (arr_2 [i_0]))), var_2))));
                        }
                        var_17 += ((~(min((((arr_3 [i_1] [i_1] [i_2]) ? 18446744073709551615 : (arr_16 [i_0] [i_0] [i_0] [i_0]))), ((((arr_11 [i_2] [i_2]) ^ 4095)))))));
                    }
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    var_18 |= (((arr_10 [i_1] [i_1] [i_6]) | (arr_18 [i_1] [i_1] [i_6 + 2])));
                    var_19 = ((-(arr_19 [i_0] [i_0] [i_0] [i_6])));
                    var_20 = (max(var_20, (!20027)));
                }
                var_21 += ((-(max(var_5, ((9 ? -2 : 0))))));
                var_22 = (~49152);
            }
        }
    }
    var_23 = (min(var_23, ((min(((var_10 ^ (max(var_0, var_4)))), (((-(var_6 ^ 114)))))))));
    #pragma endscop
}
