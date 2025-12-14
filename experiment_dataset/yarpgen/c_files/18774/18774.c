/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 = (min(var_15, (arr_0 [i_0 + 1])));
                arr_8 [i_0] [i_0 + 1] [i_1] &= (min(((max(var_12, (arr_6 [i_0 + 1])))), ((1919271902 ? 2872834674 : -1325297687))));
            }
        }
    }

    for (int i_2 = 4; i_2 < 8;i_2 += 1)
    {
        var_22 = (max(var_22, (((~((-var_17 ? (var_7 - var_19) : (var_17 & 18103))))))));
        var_23 = (min(var_23, ((((arr_6 [i_2 - 1]) ? (((arr_6 [i_2 - 4]) ? (arr_6 [i_2 + 1]) : (arr_6 [i_2 - 3]))) : (((!(arr_6 [i_2 - 4])))))))));
        arr_12 [i_2] [i_2] = (max(((((min(var_14, (arr_6 [i_2])))) && (arr_4 [2] [2]))), ((!(((~(arr_3 [i_2] [i_2 - 1]))))))));
        var_24 = (max(var_24, (((((var_17 && ((((arr_3 [i_2] [i_2]) & var_7))))) ? ((((((arr_9 [i_2]) ? (arr_4 [i_2] [i_2 + 4]) : 62))) ? ((((arr_7 [i_2] [i_2]) - 255))) : (var_15 - var_10))) : ((((arr_4 [i_2] [i_2]) ? (arr_5 [9] [i_2] [15]) : (((arr_6 [i_2 + 4]) ? 88 : 7750))))))))));
    }
    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        var_25 = min(var_14, ((((((arr_2 [i_3]) ^ var_5)) == (1422132627 | 0)))));
        var_26 = (min((((+((var_11 ? (arr_0 [i_3 - 2]) : var_7))))), ((((min(var_7, var_10))) ? (~var_18) : (arr_4 [i_3] [14])))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_27 -= (arr_3 [i_3] [i_4]);
            arr_17 [i_3] [i_3] = (((arr_7 [i_3] [i_4]) >> (((arr_14 [i_3 - 1] [i_4]) - 171))));
            var_28 = (((arr_4 [i_3] [i_3]) + 181590488));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_20 [1] = (((((!4294967274) && (arr_6 [i_3]))) ? (min((var_16 ^ var_9), (min(var_19, (arr_15 [i_3]))))) : ((min((arr_4 [i_3] [i_3]), (((arr_0 [i_5]) ? (arr_19 [i_5] [i_5] [i_3]) : (arr_2 [i_5]))))))));
            var_29 = (max(var_29, (arr_19 [i_3] [i_3] [i_5])));
            var_30 = (((((((!(arr_5 [i_5] [i_5] [i_5]))) ? ((((arr_6 [i_3]) == var_9))) : (((arr_6 [i_3]) ? (arr_1 [i_3]) : (arr_6 [i_5])))))) - (arr_18 [i_3] [i_5])));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_31 = var_0;
            var_32 = (max(var_32, (arr_0 [i_3])));
        }
    }
    var_33 = ((((min((((var_17 << (((-1 + 24) - 16))))), ((var_16 ? var_3 : var_6))))) ? (((var_6 & var_14) ? (!var_0) : (11333550512340425305 | var_9))) : var_4));
    #pragma endscop
}
