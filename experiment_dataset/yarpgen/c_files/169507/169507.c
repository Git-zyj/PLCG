/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = ((!(arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_12 += (var_4 ? (arr_1 [i_0]) : (arr_2 [i_0] [i_1] [i_1]));
            var_13 = ((((39269 ? 5628 : var_7)) << (((-5628 + 5655) - 10))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 = (arr_1 [i_2]);
            var_15 += (((-5626 + var_2) ^ (0 || var_3)));
            var_16 = (((arr_6 [i_2]) ? ((1 ? -1 : 34902897112121344)) : (arr_2 [i_0] [i_0] [12])));
        }
        for (int i_3 = 2; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_17 = ((((-5130240845015011784 ? 1 : (arr_6 [i_0]))) ^ (((((arr_10 [i_0] [i_0] [i_3]) < (arr_9 [1])))))));
            var_18 = ((!(((var_4 ? (arr_12 [i_0] [i_0]) : (arr_1 [i_3]))))));
            var_19 = (((arr_0 [i_0]) ? 1 : -3074034600133006277));
            var_20 |= ((((((arr_10 [i_0] [i_3] [i_3]) ? (arr_4 [i_0]) : (arr_0 [i_0])))) ? (arr_11 [i_3 + 4] [i_3 + 1]) : (((arr_3 [i_3]) ? (arr_6 [i_0]) : var_3))));
        }
        for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_21 = (-30 / 26);
            var_22 = (arr_9 [11]);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_20 [i_4] [i_4 + 1] [i_5] [i_4 + 1] = ((~(arr_18 [i_0] [i_4] [i_4] [i_5] [i_6])));
                        var_23 = (min(var_23, (arr_10 [i_4] [i_5] [i_4])));
                    }
                }
            }
            arr_21 [i_4] = 1;
        }
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 9;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_24 = (min(4294967288, (max((min((arr_29 [i_9] [i_9] [i_9] [i_9]), var_0)), (arr_16 [i_10 - 1] [i_10] [i_10] [i_10 - 1])))));
                            var_25 *= (arr_4 [i_7]);
                            var_26 = (arr_8 [i_10 - 1] [i_10 - 1]);
                        }
                        var_27 = 16384;
                    }
                }
            }
        }
        var_28 = ((((~(arr_28 [i_7] [i_7] [i_7] [i_7])))) ? (((min((arr_28 [i_7] [i_7] [i_7] [i_7]), (arr_28 [i_7] [i_7] [i_7] [i_7]))))) : (max(var_0, (arr_28 [i_7] [i_7] [i_7] [i_7]))));
    }
    /* LoopNest 2 */
    for (int i_12 = 2; i_12 < 10;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            {
                var_29 += ((((((arr_41 [i_12] [i_12 + 1]) ^ (min(1, (arr_6 [i_13])))))) ? (arr_14 [i_13]) : (((((-127 - 1) ? -1196094674 : 16140901064495857664)) >> (0 >= 166)))));
                var_30 += (!((max((var_0 >> 0), (max((arr_2 [i_13] [1] [i_12]), (arr_15 [i_13] [i_12] [i_12])))))));
                var_31 ^= min((max(17, (arr_7 [i_12 - 2] [i_12 + 3]))), (((!(arr_7 [i_12 + 2] [i_12 + 2])))));
                var_32 = (!var_8);
            }
        }
    }
    var_33 = var_3;
    var_34 = 18446744073709551615;
    #pragma endscop
}
