/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_1 ^ var_9);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_21 = ((18446744073709551589 ? var_18 : (~4294967295)));
        var_22 = (4294967284 - ((var_14 * (arr_0 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    {
                        var_23 = (arr_9 [i_4 - 2] [i_4 - 2] [i_1]);
                        var_24 ^= ((12 ? var_14 : 4063847723));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_25 = (1646307427512597150 < 0);
                            var_26 = 4294967284;
                            var_27 = ((-197145596206020250 ? var_18 : (arr_0 [i_4 - 3])));
                            var_28 = (arr_2 [i_5]);
                        }
                    }
                }
            }
        }
        var_29 = (max(var_29, (arr_4 [i_1])));
        var_30 = ((4294967282 ? (arr_15 [i_1] [i_1] [9] [i_1]) : (arr_15 [i_1] [i_1] [i_1] [i_1])));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_22 [6] = ((-(arr_2 [i_6])));
            var_31 -= var_16;
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
        {
            var_32 = ((~(max(((var_0 ? 1 : (arr_0 [i_6]))), (arr_24 [i_8] [i_8] [i_8])))));
            var_33 = (!var_9);
            var_34 = var_16;
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
        {
            var_35 = ((((min(var_10, ((~(arr_6 [i_6] [i_6])))))) != (arr_13 [3] [i_9] [i_9] [i_9] [3] [i_9])));
            arr_28 [1] [i_9] = min(-1, 4260878421);
        }
        arr_29 [i_6] [i_6] = (max((((min(4260878421, (arr_20 [0] [i_6]))) ^ var_3)), ((((arr_2 [i_6]) ? (arr_23 [1]) : ((16901221200590808266 ? 1 : 4294967283)))))));
        var_36 = ((!((((arr_13 [i_6] [2] [i_6] [6] [i_6] [i_6]) ? -208405133 : 9)))));
        var_37 *= (((~var_8) >= 0));
        var_38 ^= ((((((!(arr_13 [i_6] [i_6] [i_6] [0] [i_6] [i_6]))))) ^ (max(var_8, var_5))));
    }
    #pragma endscop
}
