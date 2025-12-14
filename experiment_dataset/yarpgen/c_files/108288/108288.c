/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((199 || (~-var_11))))));
    var_13 &= ((!(((var_6 & var_1) || var_4))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [2] = (min((~var_10), (max((7116282933914948211 / var_10), ((min((arr_0 [i_0]), var_4)))))));
        arr_5 [i_0] = ((-(((arr_1 [i_0] [i_0]) | ((((arr_0 [i_0]) ? var_11 : (arr_2 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_9 [i_1] = ((((((arr_7 [i_1]) * (arr_6 [i_1])))) ? (~var_8) : (arr_7 [i_1])));
        arr_10 [i_1] &= var_9;
        arr_11 [i_1] [i_1] = ((!(((max(var_6, (arr_8 [10])))))));
    }

    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_14 *= (~-var_10);
                        var_15 = (max(var_15, (arr_17 [i_2 + 1] [i_2] [i_2] [i_2 - 2])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        var_16 = (min((max(var_6, (min(var_8, (arr_21 [i_8] [i_6] [i_6] [i_2]))))), (max(((var_8 ? var_1 : 16)), (((var_6 ? (arr_25 [i_6] [i_8]) : (arr_13 [i_2 + 1] [2]))))))));
                        var_17 = (arr_22 [i_2] [i_8]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_18 = (var_7 | var_3);
        var_19 *= var_9;
        var_20 ^= ((~((((arr_27 [i_9] [i_9]) >= var_7)))));
        arr_32 [i_9] = (arr_15 [i_9] [i_9]);
    }
    #pragma endscop
}
