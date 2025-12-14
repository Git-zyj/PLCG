/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [1] = (max((((arr_2 [i_0 - 1] [i_0 - 1]) | (arr_0 [i_0 - 1]))), (max((arr_1 [i_0 - 1]), (((arr_1 [i_0 - 1]) ? 26476 : 0))))));
        var_10 &= var_6;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_10 [i_2] [i_1] [i_2] &= ((~((48913 ? 0 : 0))));
            arr_11 [i_1] = 94;
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            arr_14 [2] [i_1] = (((arr_12 [1]) < (((arr_5 [i_3] [2]) ? 4186112 : (arr_1 [i_1 - 1])))));
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 6;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_11 = ((53349 ? (~146) : -27));
                            arr_24 [i_1] [i_1] = var_7;
                            arr_25 [i_1] [i_1 - 1] [1] [i_1] [i_1] = 16624;
                            var_12 *= 22287;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            var_13 = 1;
            var_14 = (((arr_27 [i_1 - 1]) ? (arr_27 [i_1 - 1]) : 1066705661));
            arr_28 [i_7] [i_7] [i_7] &= (((arr_20 [i_7] [i_1] [i_1 - 1] [i_7]) ? (arr_20 [i_7] [i_1] [i_1 - 1] [i_7]) : (arr_20 [i_7] [i_1] [i_1 - 1] [i_7])));
            var_15 = (arr_6 [i_1]);
        }
        var_16 = (arr_12 [i_1]);
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
    {
        arr_32 [i_8] [i_8] &= 1;
        var_17 &= (12186 == 5862);
    }
    var_18 = ((-(((((1 ? var_4 : var_2))) ? -var_6 : -2852631285))));
    var_19 = (max(var_19, -var_7));
    #pragma endscop
}
