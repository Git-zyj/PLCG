/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((((var_1 ? var_9 : 233))) | var_8)), var_6));
    var_12 = ((((!(var_6 || 88))) ? (((1 ? var_8 : 6920877129789297064))) : var_10));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_13 = (min(var_13, 241));
        var_14 = 0;
        arr_2 [i_0 + 1] [i_0] = -1566327951;
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1 - 2] = 243;
        var_15 += (arr_3 [i_1]);
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_16 = (arr_4 [i_2]);

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                var_17 |= ((-(((arr_10 [i_2 - 1] [i_2 + 2] [i_2]) ? 7039 : (arr_12 [i_2 - 1] [i_2 + 2] [i_2 - 1])))));
                arr_14 [i_2] [i_2] [i_2 + 1] [i_2] = ((((max((arr_10 [i_2 - 1] [i_2] [i_2 - 1]), (arr_10 [3] [i_3] [i_4])))) ? (((arr_7 [i_2 + 2]) ? (arr_13 [i_2 + 1] [i_2] [i_2 - 1]) : (arr_13 [i_2 + 2] [i_2] [i_2 - 1]))) : ((25 ? 2 : 2740985330592547996))));
            }
            var_18 &= (max((max(15, var_5)), ((((219 * 241) || (arr_9 [12] [i_3]))))));
            var_19 *= (((1 < ((min(65530, 23))))));

            for (int i_5 = 3; i_5 < 16;i_5 += 1)
            {
                var_20 = ((-(arr_9 [i_2 + 1] [i_5 - 2])));
                arr_17 [i_2 - 1] [i_5] = ((((!(arr_11 [i_5 - 3] [i_5] [i_5] [i_5 - 3])))));
                var_21 = 19;
            }
            for (int i_6 = 3; i_6 < 17;i_6 += 1)
            {
                var_22 *= (min((max(0, var_4)), ((((arr_10 [i_2] [i_2] [i_2]) / (arr_18 [i_2] [14]))))));
                var_23 = (max(var_23, ((((~3) ? -102 : ((min(88, 0))))))));
                arr_20 [i_2 - 1] [i_2 + 2] [i_6] [i_6] = (~12);
            }
            var_24 = (arr_10 [i_2] [i_3] [i_3]);
        }
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            arr_24 [i_2] &= ((((arr_4 [i_7]) + ((var_1 ? (arr_18 [i_2] [12]) : 4077791752)))));
            var_25 = (min(var_25, (((!((((arr_8 [i_2] [i_7 + 1]) ? 50942 : ((max(var_9, (arr_4 [i_2]))))))))))));
        }
    }
    var_26 = ((-((65503 + (((35 ? var_2 : var_3)))))));
    var_27 = var_10;
    #pragma endscop
}
