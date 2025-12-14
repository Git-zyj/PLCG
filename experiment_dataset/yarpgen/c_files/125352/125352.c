/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_1] = 1;
            var_20 -= ((~(0 << var_7)));
            var_21 = (min(var_21, (((var_4 ? (arr_0 [i_0] [i_1]) : (arr_0 [i_1] [i_1]))))));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_22 |= (((arr_17 [i_0] [i_2] [i_3] [i_4] [i_4]) * var_12));
                            var_23 *= (arr_1 [i_5]);
                        }
                    }
                }
            }
            var_24 -= var_1;
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_25 += -19;
            var_26 ^= ((var_2 % (0 != 1)));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            var_27 ^= (arr_3 [i_7]);
            arr_23 [i_0] [i_7] [i_7] = (arr_20 [i_7]);
            arr_24 [i_0] [i_7] = ((1428102092129440183 - (6969520959490684537 + 1)));
            arr_25 [i_7] = (arr_10 [i_7]);
        }
        arr_26 [i_0] [i_0] = 1;
        arr_27 [i_0] [i_0] = (!((((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ var_4))));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 24;i_8 += 1)
    {
        var_28 = (min(var_28, (var_16 + 0)));
        arr_30 [i_8] [i_8 - 1] = ((((var_13 ? 5467959204069721082 : 1))) ? 1 : var_15);
        arr_31 [i_8] = (((arr_28 [i_8]) == (arr_29 [i_8])));
    }
    var_29 = (1 ? (~-1) : ((((1 ? var_5 : var_3)) ^ (1693 > 4611686001247518720))));
    #pragma endscop
}
