/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_15 = (max(38995, 4194303));
        var_16 = (arr_1 [i_0 - 2] [i_0]);
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            var_17 ^= (max((((!(arr_7 [i_2 + 2] [i_1 + 1] [i_1 + 1])))), (arr_7 [i_2 - 1] [i_1 - 1] [i_1 + 1])));

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_18 = (arr_3 [i_1]);
                arr_12 [i_1] [i_1] [i_1] [i_3] &= (min((arr_3 [i_1]), 4194296));
                arr_13 [i_3] [i_3] = (arr_1 [i_1] [i_2 + 1]);
                var_19 += (min((min((arr_11 [i_1 + 2] [i_2] [9]), (arr_11 [i_1] [i_1] [i_1]))), (arr_6 [6] [i_2] [i_1])));
                var_20 = ((-(max((min((arr_11 [i_1] [i_1] [i_1]), (arr_6 [i_1] [i_1] [i_3]))), (((-(arr_5 [3] [3] [i_3]))))))));
            }
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                var_21 = (max(((max((min((arr_5 [i_4] [i_2] [i_1]), (arr_0 [9] [i_2]))), (arr_4 [i_4])))), (min((arr_15 [i_1 + 1] [i_1 + 1]), (((!(arr_10 [i_1] [i_2]))))))));
                arr_16 [i_1] [3] [i_4] = ((!(min((arr_9 [i_2 + 2] [i_2 + 1] [i_2 - 2]), (arr_9 [i_2 + 3] [i_2 + 3] [i_2 + 3])))));
            }
            arr_17 [i_1] [i_1] = ((+((min((arr_10 [i_1 + 1] [i_1 - 1]), (arr_10 [i_1 + 2] [i_2 + 2]))))));
        }
        var_22 = (min(var_22, (arr_14 [i_1] [i_1] [i_1 - 2] [i_1])));
        var_23 = ((+(max((arr_2 [i_1 + 1]), (arr_2 [i_1 + 1])))));
    }
    var_24 = ((-(max(((min(var_11, var_6))), (~26540)))));
    #pragma endscop
}
