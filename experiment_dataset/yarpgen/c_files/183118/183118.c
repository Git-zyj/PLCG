/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((0 ? ((1914829811 ? 635246056950527495 : 65535)) : -9223372036854775802)) + 9223372036854775807)) >> (((((((109 ? var_0 : var_6))) ? var_3 : 635246056950527495)) - 37597))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] |= (arr_2 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 ^= ((((arr_0 [i_0 - 1] [i_0]) < -63)));
                            var_15 = (min((arr_5 [i_0] [3] [i_2]), 22718));
                            arr_9 [i_3] [i_2] [8] [8] = (arr_0 [10] [i_0 + 1]);
                            var_16 = (((((-((-(arr_0 [i_0] [i_1])))))) ? 70 : (min((var_6 || 9223372036854775802), -var_10))));
                            var_17 = ((15926 ? ((((((-15926 ? 123 : 9223372036854775801))) ? (29 + 66) : -74))) : (min((arr_5 [i_0] [i_3] [0]), ((((arr_7 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]) & (arr_1 [i_3]))))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, 1));
    var_19 = (-1 || -4893992819037087833);
    #pragma endscop
}
