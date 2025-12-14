/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_3));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            arr_4 [i_1] [i_1] = ((((!(arr_2 [i_0] [i_1 - 1]))) ? 176934222 : (0 - 13993807309956782594)));

            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                var_17 = -1;
                arr_7 [i_1] [i_2] = var_15;
            }
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {

                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    var_18 -= (arr_10 [i_3 - 3] [i_1 - 1] [i_3] [i_4 + 1]);
                    var_19 -= var_5;
                    arr_14 [i_0] [i_1 + 1] [i_1 + 1] [i_1] [i_4 + 1] = 0;
                    arr_15 [i_1] = ((!var_9) ? var_6 : (((var_10 + 2147483647) >> (((arr_3 [7]) + 1171404539)))));
                    arr_16 [1] [1] [i_1] [1] [i_4 - 1] = (((arr_9 [i_4 + 1] [i_1] [i_3 + 1]) ^ (~-5303119669014051270)));
                }
                arr_17 [i_1] [i_1 + 2] [i_1] = (+(((((arr_8 [i_0] [i_0] [i_1 - 1] [i_1]) + 2147483647)) << (((var_6 + 944583605) - 20)))));
                arr_18 [i_1] = var_10;
            }
        }
        var_20 = (((arr_6 [4] [i_0] [i_0]) ^ (arr_1 [i_0 + 2] [i_0 - 2])));
        var_21 -= var_2;
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        var_22 = ((-((-692617219 ? (arr_20 [i_5 + 1] [i_5 + 1]) : (arr_21 [i_5 - 1])))));
        arr_22 [i_5] = ((((arr_21 [i_5 + 1]) & (arr_21 [i_5 + 1]))));
        var_23 = (max(var_23, (arr_21 [i_5 - 1])));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        var_24 = ((arr_23 [8]) ? (arr_23 [14]) : (arr_23 [14]));
        var_25 -= 6132620928090082606;
        arr_25 [i_6] = 385252696;
        var_26 = (((arr_23 [i_6]) ? var_11 : (arr_23 [i_6])));
        arr_26 [i_6] = (arr_24 [i_6] [i_6 + 1]);
    }
    var_27 = 13993807309956782584;
    #pragma endscop
}
