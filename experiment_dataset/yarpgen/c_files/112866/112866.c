/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_16 = (min(var_16, ((((((-(max(12209106941668692169, -2183))))) ? (6237637132040859432 <= 253) : 6237637132040859418)))));
        var_17 -= ((11 ? (((~((3446937228 >> (var_15 - 14879226617831608616)))))) : ((3446937198 ? ((var_7 ? 12223579510139904471 : 4294967287)) : var_3))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1] = ((~(~var_2)));
        var_18 -= ((((max((1978444187 + var_0), (((576381709 ? 9 : var_5)))))) ? (((-16 ? 70 : ((2182 ? var_12 : 1))))) : (((arr_2 [i_1 - 3]) ? 1229232786 : 10846477177441745716))));

        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            var_19 = ((!(arr_7 [i_1 - 3])));
            var_20 = (min(var_20, 10));
            var_21 -= ((((!(var_6 * 1))) ? ((var_5 ? (arr_4 [i_1 + 1] [i_1 + 1]) : var_1)) : 1));
            var_22 = (!var_2);
        }
    }
    var_23 = (max(var_23, var_7));
    var_24 = (((((!var_14) ? (max(11095963836768372396, var_8)) : 0)) <= (((var_10 ? var_6 : ((var_14 ? 3065734510 : -4)))))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            {
                var_25 = ((((((var_2 ? var_8 : 3)) <= (((1229232780 ? var_8 : var_14))))) ? ((((arr_10 [i_3 + 1]) * var_5))) : ((1 ? (~19) : ((44 ? 15820419975028941272 : 10846477177441745716))))));
                arr_13 [12] [i_3] [i_4] = (~1767412706);
                arr_14 [i_3] [i_3] = (arr_10 [i_3]);
            }
        }
    }
    var_26 = ((((((var_10 | 0) ? (var_13 ^ 178) : ((464881304752755395 ? var_7 : var_1))))) ? (1037091686 - -464881304752755409) : (((var_9 < ((max(var_2, var_9))))))));
    #pragma endscop
}
