/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_13 &= ((~((-(arr_2 [i_0 - 2] [i_0 - 3])))));
        arr_3 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = 18446744073709551615;
        var_14 = (((arr_5 [i_1 - 2]) ? ((-48 - (arr_7 [i_1 - 3]))) : (arr_4 [i_1 - 1])));
        var_15 = (min(var_15, -118));
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_16 = (~3523957474922262262);
                var_17 = arr_1 [i_2 + 2];
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 8;i_5 += 1)
                    {
                        {
                            arr_21 [i_5] = (((((var_6 ? 3194026950612121349 : (arr_20 [i_2 + 3])))) == 1));
                            var_18 = (arr_12 [i_2 - 1] [2]);
                            arr_22 [i_2 + 2] [9] [i_3] [i_2 + 2] [4] = -var_6;
                            var_19 = 17359;
                        }
                    }
                }
                arr_23 [i_3] [i_3] [i_2 - 2] = 19929;
                var_20 = 172;
            }
        }
    }
    #pragma endscop
}
