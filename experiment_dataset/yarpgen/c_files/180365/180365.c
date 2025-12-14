/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = ((304226334 ? 304226334 : 17895));
        var_11 = (max(var_11, (~var_9)));
        var_12 = (((var_5 ? -127 : (((var_3 + 2147483647) << 0)))));
    }

    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_13 ^= var_4;
        var_14 = ((((((arr_1 [i_1]) + var_5))) ? (arr_1 [i_1]) : 1));
        var_15 = ((!(arr_2 [1])));
        var_16 ^= ((-((((~(arr_2 [23])))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = 127;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    {
                        var_17 = (max(var_17, (((662154902 ? (arr_10 [i_2] [i_2]) : -128)))));
                        arr_16 [i_2] [i_4] [i_4 - 1] [i_4] [i_5] = var_0;
                        var_18 = ((-((~(arr_14 [i_3] [10] [i_3] [i_5])))));
                        arr_17 [i_4] [i_4] [i_4] [i_4] = (((arr_13 [i_5] [i_5] [i_5 + 2] [i_5 + 3]) ? (arr_13 [i_5] [i_5] [i_5 + 3] [i_5 + 1]) : (arr_13 [i_5] [i_5] [i_5 + 3] [i_5 + 3])));
                        var_19 = (((((var_7 ? (arr_3 [i_2]) : var_8))) ? (((6352856187906833064 ? -735117251847328529 : -735117251847328529))) : var_0));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        var_20 = var_3;
        var_21 = ((-(!var_7)));
    }
    #pragma endscop
}
