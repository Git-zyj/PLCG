/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_14 = (+((+((3082618591789439877 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_5 [i_0] = (arr_1 [i_0] [i_0]);
            arr_6 [i_0] = arr_2 [i_0] [i_1] [i_1];
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = ((arr_4 [i_2] [i_2]) ? (arr_2 [i_2] [i_2] [i_2]) : 1814848679385938392);
        arr_12 [i_2] [i_2] = (arr_2 [i_2] [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = ((~((max((290651042991121010 && 2112546657385049661), ((!(arr_14 [i_3]))))))));
        var_15 -= ((!(!123145302310912)));

        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            var_16 = (min(var_16, (arr_8 [i_3])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        arr_24 [i_5] = min((min((arr_0 [i_6]), ((((arr_1 [i_3] [i_4]) || (arr_0 [i_6])))))), (((!(((11957399411435829079 ? 16041593671109119806 : (arr_17 [i_4]))))))));
                        arr_25 [i_3] [7] [7] [i_3] [i_3] = arr_20 [i_6] [i_3];
                        var_17 |= ((arr_3 [i_6] [i_3]) ? ((((min((arr_22 [i_3] [i_3] [i_3] [i_3]), 8083474809506212820))) ? (arr_14 [i_6]) : (((arr_22 [i_3] [i_3] [i_3] [i_3]) ? (arr_7 [i_4 + 1]) : 10363269264203338819)))) : -9781004713934851472);
                        arr_26 [i_3] [i_4 - 2] [i_5] [i_6] = arr_14 [i_5];
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            var_18 = ((arr_21 [i_7] [i_3]) ? (~427022633751071937) : (((((arr_7 [i_7 + 2]) && (arr_7 [i_7 + 1]))))));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        var_19 = ((!(!6803043321739575022)));
                        var_20 = ((!((!(arr_34 [i_9])))));
                    }
                }
            }
            arr_35 [i_7] = ((arr_33 [i_3] [i_3] [i_3] [i_3]) - (arr_8 [i_7]));
        }
    }
    var_21 -= 7;
    #pragma endscop
}
