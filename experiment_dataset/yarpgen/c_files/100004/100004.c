/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = 1;

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = ((arr_4 [i_0] [i_0 + 1] [i_0]) ? (((arr_0 [i_0]) ^ (arr_4 [i_0] [i_0 + 2] [i_0]))) : (((arr_4 [i_0] [i_0 - 1] [i_0]) ? (arr_4 [i_0] [i_0 - 1] [i_0]) : (arr_0 [i_0]))));

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_10 [i_0 - 3] [i_1] [i_1] [i_0] = (arr_2 [i_0]);
                arr_11 [i_0] [i_0] = ((((((arr_0 [i_0]) ? var_5 : (arr_5 [i_0] [i_0])))) && var_0));
                arr_12 [i_0 + 2] [i_0] [i_0] = (max(((((((arr_1 [i_0] [i_0 + 1]) ? (arr_4 [i_0] [10] [i_0]) : (arr_7 [i_0])))) ? ((var_7 ? (arr_7 [i_0]) : 15979083147585124309)) : ((((arr_1 [i_2] [i_0]) ? 1953461901 : (arr_1 [i_0] [i_0])))))), ((((((arr_0 [i_0]) ? (arr_5 [i_0] [i_1]) : (arr_2 [i_0])))) ? (max((arr_1 [9] [i_2]), (arr_7 [i_0]))) : (arr_0 [i_0])))));

                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    arr_15 [i_3] [i_0] [i_2] [i_0] [i_0 - 2] = ((!(((min(1035773406, 1))))));
                    arr_16 [i_0] = -725630283;

                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        arr_19 [i_0] [i_0] [5] [i_3] [i_1] = (min(((1 ? 25036 : (arr_7 [i_0]))), ((-(arr_7 [i_0])))));
                        arr_20 [i_0] [i_1] [i_2] [i_3 + 1] [i_0] = (arr_18 [i_0] [4] [i_3 + 1] [i_3] [i_0]);
                        arr_21 [i_0] [i_0] [i_0] [10] [i_0] = (arr_17 [10] [10] [i_0 - 2] [i_0] [i_0]);
                        arr_22 [i_0] [i_1] [i_2] [i_3 + 1] [10] = (max((min(368920424, (arr_9 [i_3] [i_1] [i_0 - 3]))), (((arr_9 [i_4] [i_1] [i_4]) + ((0 ? (arr_17 [7] [i_2] [i_2] [i_2] [i_2]) : (arr_14 [i_0])))))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_25 [i_0 + 1] [i_0] [2] [i_0] [i_0 - 3] = 1;
                        var_14 = ((-(arr_8 [i_3 + 1] [i_3 + 1] [i_0 + 1])));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                arr_31 [i_0] [i_6] [i_0] = 1;
                arr_32 [i_0] = (((arr_14 [i_0 + 2]) ? (max((arr_5 [i_0] [i_0]), (arr_23 [i_0 - 3] [i_0] [i_6] [i_6] [i_7]))) : ((max((arr_9 [i_0] [i_0] [i_0]), (arr_14 [i_0 - 1]))))));
            }
            var_15 = (min((((arr_23 [i_0] [i_6] [i_6] [i_0 - 1] [4]) ? (arr_23 [i_6] [1] [1] [i_0 - 3] [i_0]) : (arr_23 [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_6] [i_6]))), (((arr_17 [i_0] [i_0] [i_0 + 1] [i_0 - 3] [i_6]) << (8815440547865544873 - 8815440547865544866)))));
        }
    }
    for (int i_8 = 1; i_8 < 20;i_8 += 1)
    {
        var_16 = arr_33 [i_8 + 3] [i_8];
        arr_37 [i_8] [i_8] = (~356202306);
        var_17 = (((((-((2147483648 * (arr_35 [5] [i_8])))))) ? (((((arr_34 [i_8] [i_8 + 2]) ? (arr_33 [i_8] [i_8]) : 27626)) * 1)) : ((((arr_34 [i_8] [i_8 + 2]) ? (min(922158704, 10830)) : -725630283)))));
    }
    var_18 = var_6;
    #pragma endscop
}
