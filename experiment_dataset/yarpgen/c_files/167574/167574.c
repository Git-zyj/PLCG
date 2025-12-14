/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 -= (var_14 ? (max((arr_2 [i_0]), (arr_2 [i_0]))) : var_6);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((!((!(arr_5 [i_0] [i_1] [i_2])))));
                    var_19 = (((min(var_5, 53))));

                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            arr_14 [i_4 - 1] [i_0] [i_0] [i_0] = -12831;
                            var_20 = (max((arr_13 [i_3 + 1] [i_3 - 1] [i_0] [i_3 - 1] [i_3 + 2] [i_3 + 1]), (((!(arr_11 [i_0] [i_1] [i_2] [i_4 - 1]))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] = (max(1, (arr_1 [i_0])));
                            var_21 = (arr_13 [i_0] [i_0] [i_0] [i_2] [i_3 - 2] [i_4 - 1]);
                            var_22 ^= (((-(arr_13 [i_0] [i_1] [i_1] [i_3 - 2] [i_4 + 1] [i_1]))));
                        }
                        arr_16 [i_0] [i_1] [i_1] [i_3 + 1] &= (((((-(arr_2 [i_3 + 2])))) ? 97 : ((((max(3160100257, 30972))) ? -var_5 : var_2))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_19 [i_0] [i_2] [i_0] = var_12;
                        var_23 = (((var_10 + var_13) < (!-18)));
                        var_24 = (((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_13 [i_0] [i_0] [i_0] [i_2] [i_5] [i_5])));
                    }
                }
            }
        }
        var_25 = var_12;
    }
    var_26 = var_9;
    #pragma endscop
}
