/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = (arr_0 [i_0] [i_0]);
        arr_2 [i_0] = var_6;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_15 -= ((100 ? ((((((164 ? -112 : 215065737))) ? var_3 : (!104)))) : ((~(arr_3 [11])))));
        arr_5 [i_1] [i_1] = -721203772;
        arr_6 [i_1 - 1] = min((arr_4 [i_1 - 1] [i_1 - 1]), (((var_11 + 2147483647) >> (((arr_3 [i_1]) - 518736983)))));
        var_16 = 10945416908213549134;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        arr_10 [i_2 - 2] = (arr_7 [i_2]);
        var_17 = (arr_7 [9]);
        arr_11 [10] [i_2] = 721203771;
        arr_12 [0] [i_2] = var_4;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {

        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            arr_19 [i_4] = -721203771;
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            var_18 = ((~(arr_14 [14])));
                            var_19 = ((((((arr_26 [i_4 - 1] [i_4 - 2] [i_5 + 1]) ? ((4294967295 ? -112 : 11017450892567655601)) : -721203772))) ? ((var_0 ^ (arr_16 [i_6] [4]))) : 10));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
        {
            arr_30 [i_8] = (((arr_28 [i_3] [i_3] [i_8]) ? (arr_28 [i_3] [i_8] [i_8]) : var_8));
            var_20 = ((71 ? 0 : 56407));
        }
        for (int i_9 = 1; i_9 < 15;i_9 += 1) /* same iter space */
        {
            arr_34 [i_9 + 1] [i_3] [i_3] = ((!(!var_13)));
            arr_35 [i_3] [i_3] [14] = (((((max(511, 93))) ? -var_0 : ((max((arr_26 [i_3] [i_3] [i_9]), var_12))))));
            var_21 = (((var_10 ? (max(-1898708204, (arr_13 [i_3])) : (((var_7 ? -52 : var_5)))))));
            arr_36 [i_9] = var_8;
        }
        var_22 = (max(-778853654, ((-215065737 ? -38 : (1299609491 ^ var_9)))));
        var_23 = ((var_8 ? var_12 : ((6025171601117593318 ? (arr_20 [i_3] [i_3] [i_3]) : 16464101202805177817))));
        var_24 -= var_1;
    }
    var_25 += (212 ? (((((1898708203 ? var_0 : var_5))) ? (max(var_11, var_4)) : var_8)) : 172);
    #pragma endscop
}
