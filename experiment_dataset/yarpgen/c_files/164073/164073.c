/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((!((min((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [8]) : (arr_2 [i_0]))), 13568)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = var_0;
                    arr_9 [i_2] = ((!((((var_3 ? var_6 : var_4))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_12 = (max(var_12, ((((!22) ? (((!(((var_9 ? var_6 : var_0)))))) : ((min(-22, 32596))))))));
        arr_14 [i_3] = ((((((arr_8 [i_3] [i_3] [i_3]) + var_9))) ? (((arr_7 [i_3]) ? var_2 : (((arr_13 [i_3]) ^ (arr_5 [i_3] [i_3] [i_3]))))) : (!27)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_13 = var_5;
                    arr_20 [i_3] = ((((arr_7 [i_3]) ? var_3 : (((arr_15 [i_3] [i_4] [i_5]) ? var_7 : (arr_0 [i_3]))))));
                }
            }
        }
        arr_21 [i_3] [i_3] = ((((arr_16 [i_3] [i_3] [i_3]) ? (var_4 && var_0) : (((arr_2 [i_3]) ? (arr_10 [i_3]) : var_1)))));
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = (((var_2 ? (max((arr_7 [i_6]), var_1)) : var_5)));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_31 [i_6] [i_6] = (arr_30 [i_6] [i_7] [2]);
                    arr_32 [i_6] [i_6] = (arr_4 [i_8] [i_7] [i_6]);
                }
            }
        }
        arr_33 [9] [i_6] = ((((((arr_2 [i_6]) ? var_3 : var_7)))) ? (((32954 ? 1 : 5915417454390435558))) : (arr_12 [i_6]));
    }
    var_14 = var_2;
    var_15 = (!var_6);
    #pragma endscop
}
