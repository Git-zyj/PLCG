/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_13 = (~var_12);
            arr_4 [i_1] [i_1] = 60;
            arr_5 [i_1] [i_1] = ((((!(arr_3 [i_1] [i_1 + 2] [i_1])))));
            arr_6 [i_1] = 17447194165279818476;
        }
        var_14 = (((arr_0 [i_0 + 1] [i_0 - 1]) ? (arr_3 [i_0 + 4] [i_0 + 4] [i_0]) : (arr_0 [i_0 - 1] [i_0 - 4])));
        var_15 = ((167 / ((var_8 ? var_1 : 1))));
        var_16 = ((507520687 ? 5882163063711498644 : 4347404306720259142));
    }
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            arr_13 [i_2] [i_3] = (arr_7 [i_2] [i_3]);
            arr_14 [i_2] [i_3] = ((max(1, var_0)));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            var_17 += 1023649928;

            for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
            {
                var_18 = var_11;
                var_19 = ((var_0 ? var_4 : (arr_9 [i_4])));
            }
            for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
            {
                var_20 = (560565010 < 45217);
                arr_21 [i_6] [i_4] [i_2] [i_2] &= 98;
            }
        }
        var_21 = ((((arr_20 [i_2 - 3] [i_2]) || (arr_18 [i_2] [i_2 + 1] [i_2 + 2]))));
        arr_22 [i_2] = 7147762345372136915;
        var_22 = (max(var_22, -7147762345372136915));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_23 += 5919;
        var_24 = ((((!(arr_24 [i_7])))) * (((0 > 14651339202651695160) ? (27716 > 241) : (2406364231116482082 > 7147762345372136937))));
        var_25 = (~(arr_12 [i_7] [20]));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        var_26 = (min(var_26, (arr_23 [i_8])));
        arr_28 [i_8] = (~24);
    }
    var_27 = 1;
    #pragma endscop
}
