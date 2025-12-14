/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 10;
    var_17 &= (((((~(653822115 < 0)))) ? (3126230609327111476 / 10231938780073184378) : (((min((min(20, 1)), 0))))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_18 = (min(var_18, ((((((-((1 ? 1 : -1083301308))))) ? -10 : (arr_0 [i_0 + 2]))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            arr_7 [i_0 + 2] = 0;
            var_19 *= 0;
            var_20 = (max(var_20, (((1 ? (arr_2 [i_0] [i_0]) : 92)))));
        }
        arr_8 [i_0] &= (~var_1);

        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            var_21 = (max(var_21, (((1 ? (1200252136 / var_12) : 656230014)))));
            var_22 = (10968802843390679832 > -649796475);
            var_23 = (~516805861);
        }
        for (int i_3 = 3; i_3 < 7;i_3 += 1)
        {
            arr_15 [i_0] [i_0 + 1] [i_3] = (!0);
            var_24 = (max(var_24, ((((90 ? 0 : 72)) & 572799327))));
            var_25 = (min(1200252136, 179));
        }
        arr_16 [i_0] = (~245);
    }

    for (int i_4 = 4; i_4 < 12;i_4 += 1)
    {
        var_26 = (-25 > 63);
        var_27 = (((((-((1 - (arr_17 [i_4 - 3])))))) ? -34 : (0 > 9105)));
        var_28 = (min(var_28, ((max(17682, (max(((1 ? 17799 : 27398)), (!-1212513738))))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_29 = (min(var_29, (((0 ? 1 : -76)))));
        var_30 = -1478331959;
        arr_21 [i_5] = (0 - -83);
    }
    #pragma endscop
}
