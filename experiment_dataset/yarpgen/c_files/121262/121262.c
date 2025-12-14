/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(((((min(var_7, 1050442454))) ? (!var_10) : ((var_9 ? var_5 : 1)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = (1 ^ 1275618189);
                        var_12 = ((14686 | (arr_10 [i_1 - 2] [i_2])));
                        var_13 ^= ((!(arr_6 [i_0] [i_1 + 4] [i_0])));
                        var_14 = (((arr_10 [i_1] [i_1 + 3]) ? 1 : 1275618179));
                    }
                }
            }
        }
        arr_12 [i_0] = var_4;
        var_15 = ((!(((1854443743047713162 % (arr_6 [i_0] [i_0] [i_0]))))));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_21 [i_5] = (arr_10 [i_6] [i_5]);
                    arr_22 [i_4] [3] [i_5] = var_2;
                    var_16 ^= (arr_18 [i_6] [i_5] [i_4]);
                }
            }
        }
        var_17 ^= ((((((1 ? 1275618189 : 1)) >= (arr_13 [8]))) ? (((arr_16 [i_4] [i_4]) - (1 >= var_10))) : ((min(32319, 1)))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {
                        var_18 = (((arr_30 [i_9] [i_9]) ? (arr_10 [i_7] [i_7]) : (arr_8 [3] [3] [3] [3])));
                        var_19 ^= 2193235846570699910;
                    }
                }
            }
        }
        var_20 = (arr_20 [i_7] [i_7] [i_7] [2]);
    }
    #pragma endscop
}
