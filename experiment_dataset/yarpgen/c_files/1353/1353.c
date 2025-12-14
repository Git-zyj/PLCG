/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = (arr_0 [8]);
            var_15 = ((((min(0, 1)))));
            var_16 = (((((arr_0 [0]) * 0))) ? ((~(arr_0 [i_0]))) : (arr_0 [17]));
        }
        var_17 = min(((((arr_2 [i_0]) / (arr_2 [i_0])))), (arr_0 [19]));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_7 [7] = (max((arr_4 [12]), (arr_4 [1])));
        arr_8 [7] [1] = ((((max((arr_1 [20]), (arr_0 [10])))) ? (min(((~(arr_4 [0]))), (arr_0 [12]))) : (min((arr_1 [14]), (min((arr_0 [3]), (arr_1 [14])))))));
    }

    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_18 = ((((min((~1761109939), 0))) ? ((((arr_1 [i_3]) * ((max((arr_1 [i_3]), (arr_1 [i_3]))))))) : ((((max(var_3, 1))) ? (min(62955, 8679934966194462474)) : (arr_3 [4] [3] [6])))));
        var_19 = arr_0 [1];
        var_20 = ((~((((arr_11 [11]) && ((((arr_3 [7] [18] [1]) ? (arr_9 [1] [17]) : var_3))))))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_21 = 2580;
        var_22 = ((((arr_3 [1] [14] [13]) ? (arr_9 [9] [20]) : (arr_0 [20]))));
        arr_14 [21] = (max((max((((-(arr_13 [1])))), (max((arr_11 [1]), var_13)))), (arr_1 [i_4])));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        var_23 = 2729660054466014430;
        var_24 = 62937;
        arr_17 [16] = arr_15 [12];

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_25 = 18319983609456677253;
            var_26 = (((arr_15 [i_5 + 1]) ? (arr_15 [i_5 + 1]) : (arr_15 [i_5 + 1])));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_23 [i_7] = 62955;
            var_27 = (((arr_3 [8] [i_7] [i_7]) <= (!var_3)));
        }
        arr_24 [19] = (~1);
    }
    #pragma endscop
}
