/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((min((arr_0 [i_0]), (arr_0 [i_0])))) ? var_13 : (((((arr_0 [i_0]) || (arr_0 [i_0])))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] |= var_2;
            var_14 &= ((((-(arr_0 [i_0]))) <= 47));
            arr_8 [i_0] [i_0] = (~2221411228);
            arr_9 [i_0] |= ((14 ? 18446744073709551615 : 1));
            var_15 = (max((((65280 ? (arr_6 [i_0] [i_1]) : (arr_6 [i_0] [i_0])))), ((332 ? (arr_4 [i_1]) : -2273295003181321729))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_16 += var_2;
                var_17 ^= ((-912402706 ? 107 : -7991775994248086437));
            }
            var_18 |= ((-(arr_1 [i_0])));
            var_19 = ((var_6 ? var_0 : var_11));
        }
        var_20 = ((65200 ? (((~((var_3 << (var_3 - 23912)))))) : (((max((arr_11 [i_0] [i_0] [i_0]), 1003502240)) << ((((var_4 ? (arr_11 [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_0]))) - 4024475621229681312))))));
    }
    var_21 ^= var_10;
    var_22 |= 1;
    var_23 = (max(var_23, var_9));
    #pragma endscop
}
