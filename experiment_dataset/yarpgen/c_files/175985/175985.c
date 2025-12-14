/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_10 = (min(var_10, ((min((((!((max((arr_1 [i_0] [3]), (arr_0 [i_0]))))))), (max((max(var_8, var_8)), var_8)))))));
        var_11 ^= ((+(((arr_0 [i_0 - 2]) ? 3590457752 : 3127511659024728607))));
        var_12 += (max(var_6, (max(var_3, (min(var_5, 0))))));
        var_13 += (((((704509543 ? var_3 : 0))) ? ((max(((var_7 << (11554810960212392808 - 11554810960212392800))), ((min((arr_0 [i_0]), (arr_0 [i_0]))))))) : ((var_8 ? 222 : var_3))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_14 = (((~(arr_1 [i_1] [i_1]))));
        var_15 ^= (min((arr_0 [i_1 - 1]), 0));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_16 = (arr_5 [i_2]);
        var_17 += (~((((arr_5 [0]) < var_1))));
        var_18 = ((((max(16620018515308475065, 1583583570315650321))) ? (((arr_4 [i_2]) ? (min(var_1, 0)) : (arr_4 [i_2]))) : ((0 ? var_6 : 0))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_19 = var_9;

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_12 [i_3] = -71;
            var_20 = (max(var_20, (arr_10 [2] [i_4])));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_21 &= -var_7;
            arr_15 [i_3] [i_3] [i_5] = (arr_5 [i_3]);
            arr_16 [i_3] = (arr_11 [i_3] [i_3] [i_3]);
            var_22 += (arr_10 [i_3] [14]);
        }
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_23 = (min(var_23, ((((arr_10 [i_3] [i_9]) * (((var_2 ? 0 : var_0))))))));
                            var_24 = (((4367869552062784058 ? 9223372036854775807 : 1317290340)));
                        }
                    }
                }
            }
            var_25 ^= (((((var_8 + (arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] [i_6])))) ? (~147) : 19));
            var_26 = (((arr_10 [i_3] [i_3]) ? (arr_10 [i_3] [i_3]) : var_0));
            arr_28 [i_3] = (arr_22 [i_3] [i_6 + 3]);
        }
        var_27 = (((!73) ? ((1826725558401076545 ? 31425 : 217)) : (!var_1)));
    }
    var_28 = (((-9223372036854775807 - 1) % var_7));
    var_29 = (~(min((~var_2), (max(9007164895002624, var_3)))));

    /* vectorizable */
    for (int i_10 = 2; i_10 < 11;i_10 += 1)
    {
        var_30 = ((-8194272747028039632 <= (((0 ? (arr_6 [i_10]) : var_9)))));
        var_31 = var_3;
        var_32 = 7;
        var_33 = (~var_4);
    }
    #pragma endscop
}
