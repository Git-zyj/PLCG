/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (((((var_2 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((-((min(25, 1)))))) : var_14));
        var_17 = min(-343600918106281610, 1);
    }
    for (int i_1 = 3; i_1 < 7;i_1 += 1)
    {
        arr_4 [i_1] = min((((3607862770200758162 % var_3) - 1)), 3607862770200758162);
        var_18 = 5010784380974334393;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_19 = (-1 == var_2);
            var_20 = (((arr_5 [i_1 - 2]) ? (!var_0) : (arr_6 [i_2])));
            var_21 = ((arr_0 [1]) ? (arr_5 [i_1 - 3]) : -var_4);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
        {
            var_22 = (((((var_8 ? (arr_0 [i_3]) : var_11))) ? (arr_9 [i_1 + 2]) : (arr_8 [i_3])));
            var_23 = (arr_8 [i_3]);
            var_24 = (arr_8 [i_3]);
        }
        var_25 = (((min(1, (arr_5 [i_1]))) << ((((arr_8 [10]) && var_3)))));
        var_26 = ((((max((arr_2 [i_1 + 3] [i_1 - 3]), (arr_2 [i_1 - 2] [i_1 + 2])))) ? (!751253895353500367) : (max((arr_9 [i_1 - 3]), (arr_9 [i_1 - 1])))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_27 = var_5;
        arr_13 [4] |= var_1;
        var_28 = (((((var_6 ? ((var_14 ? 751253895353500367 : (arr_11 [i_4]))) : (((arr_0 [i_4]) ? 20 : (arr_12 [i_4])))))) ? (((!((max(var_15, var_15)))))) : (((!(arr_1 [i_4]))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_29 = (((arr_11 [i_5]) ^ var_2));
        var_30 = (1034361153941468704 << 1);
        var_31 &= 1;
    }
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    var_32 = (min((max(var_4, (arr_18 [i_6]))), var_15));
                    var_33 += ((14007614571384798854 ? 18250710016727322592 : 17695490178356051248));
                }
            }
        }
    }
    #pragma endscop
}
