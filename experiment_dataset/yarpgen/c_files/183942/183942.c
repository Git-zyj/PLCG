/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = 2;
                var_14 += 0;
                var_15 = (max(var_15, (((((65509 <= (~65534))) ? 20371 : (min((((arr_3 [i_0] [i_0]) ? (arr_4 [i_0] [1] [17]) : -9223372036854775787)), (((26 % (arr_2 [i_0] [8] [i_0])))))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_16 = (min(65511, var_5));
        arr_7 [i_2] = ((((~(var_5 | var_5)))) ^ ((~(max(var_1, var_3)))));
        arr_8 [i_2] = (min((((~((min(65534, 65510)))))), (min(((((arr_2 [i_2] [i_2] [i_2]) <= var_10))), (8 | var_3)))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_17 = var_0;

        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_18 *= 2157280725;
            arr_15 [i_3] [i_3] [i_3] |= (arr_11 [i_3] [i_3] [i_3]);
            var_19 = 2080374784;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_20 = 8;
            arr_18 [1] = ((82 ? (arr_1 [i_5]) : (arr_9 [i_5] [i_5])));
            var_21 ^= 12;
            var_22 = var_5;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_23 = (min(var_23, (((1 <= 71) >= var_11))));
            var_24 = (~-var_4);
            arr_22 [i_3] [i_3] = var_3;
        }
        arr_23 [i_3] &= ((-var_2 <= ((-((71 ? 552740571691295518 : 2))))));
        var_25 *= var_3;
        arr_24 [i_3] = (~31847);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_26 = 33;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_27 += (~3);
                    var_28 = 7235258226724284960;
                }
            }
        }
        var_29 = (min(var_29, var_7));
        var_30 = var_4;
    }
    #pragma endscop
}
