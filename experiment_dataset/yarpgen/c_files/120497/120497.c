/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (min(((16727014353357333261 ? (arr_3 [i_0]) : (arr_2 [i_0]))), (min((arr_0 [i_0] [i_0]), (arr_3 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_12 = (max(var_12, (-598813853505195392 < -4802971375499838277)));
                        var_13 = ((1 ? (((((((arr_12 [i_3] [i_0] [i_2] [i_0] [i_0]) + 1719729720352218354)) <= (((0 ? 598813853505195391 : var_7))))))) : var_6));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_17 [i_0] [i_2] [i_0] [i_4] = ((var_7 ? ((var_0 ^ (arr_3 [i_0]))) : -var_8));
                            arr_18 [i_0] [i_0] [i_2] [i_3] [i_3] = (4095 ? (arr_9 [i_0] [i_1]) : (arr_9 [i_1] [i_2]));
                            arr_19 [i_3 - 1] [i_0] [i_3 - 1] [13] [i_3 - 1] = ((var_11 ? var_7 : (arr_12 [i_4] [i_3 - 1] [i_2] [i_1] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_14 = (var_0 ? (max((8585740288 / var_1), var_11)) : (min(((max(1764031475663655832, var_4))), 18446744073709551615)));
    var_15 += ((+((min((2314354160 != var_4), 8585740304)))));
    var_16 |= ((var_2 ? (((((!var_5) || 2011)))) : var_2));
    #pragma endscop
}
