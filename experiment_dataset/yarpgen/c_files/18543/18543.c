/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_0;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 7;i_3 += 1) /* same iter space */
                    {
                        var_14 = var_12;
                        arr_11 [i_0] [6] [i_0] [i_0] [i_0 - 2] [i_0 - 3] = ((!(!var_3)));
                        var_15 = (arr_5 [1] [i_0]);
                    }
                    for (int i_4 = 2; i_4 < 7;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_1] [1] [i_0] = (max(((var_7 * (max(1, var_0)))), ((((var_11 / 65535) ? 1 : (max(1, 4070893775)))))));
                        arr_16 [0] [i_0] [0] [6] = ((1 / (((arr_6 [i_1 - 1] [i_2 + 1]) ? (arr_1 [i_1 + 2] [i_0 + 2]) : (arr_6 [i_1 + 1] [i_2 - 1])))));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            arr_20 [i_0] [i_4] [i_0] = (-5 & var_0);
                            arr_21 [8] [6] |= var_8;
                        }
                    }
                    for (int i_6 = 2; i_6 < 7;i_6 += 1) /* same iter space */
                    {
                        var_16 = (~var_12);
                        arr_25 [i_0] [i_1] [i_2 - 3] [1] = ((((max(var_4, (((!(arr_3 [i_1] [i_0]))))))) * (!-9094765865476955452)));
                    }
                    var_17 = (max(var_17, var_4));
                    var_18 = var_1;
                    var_19 |= (max((~31), (arr_6 [i_2] [i_0])));
                }
            }
        }
    }
    var_20 = var_10;
    var_21 = ((!((max(var_7, var_10)))));
    #pragma endscop
}
