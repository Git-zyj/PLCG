/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (arr_1 [i_0]);
        arr_2 [i_0] [i_0] = ((+(((((((arr_0 [7]) - -84))) && ((((-79 + 2147483647) << (((arr_1 [i_0]) - 248))))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = var_13;
        arr_7 [i_1] = ((((((!(arr_3 [i_1]))))) == var_4));
        var_15 = ((-var_0 > (((!(arr_3 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((((arr_9 [i_2]) ? (arr_9 [i_2]) : (arr_9 [3]))));
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_17 [i_4] [i_3] [i_4] = (((-(((var_2 > (arr_13 [i_2] [i_2] [i_2] [7])))))));
                    var_16 = ((!(((min((arr_13 [i_2] [i_3] [i_4] [i_4]), (arr_1 [5])))))));
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = (min((arr_19 [i_5]), ((((((!(arr_19 [i_5]))))) & (arr_18 [i_5])))));
        arr_21 [i_5] = (((129 ? (arr_1 [i_5]) : 18446744073709551615)) - ((((arr_19 [10]) >= (!var_9)))));
        var_17 = ((((!(arr_18 [i_5]))) ? -112 : (((arr_18 [i_5]) ? (arr_18 [i_5]) : -43))));
        arr_22 [i_5] = ((~(max((((arr_18 [i_5]) ? (arr_0 [i_5 + 2]) : (arr_19 [i_5]))), (arr_0 [8])))));
    }
    for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
    {
        arr_26 [i_6] [0] |= ((-(arr_18 [14])));
        arr_27 [0] &= (3289120957398405996 && 31);
    }
    #pragma endscop
}
