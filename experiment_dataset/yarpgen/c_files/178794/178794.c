/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = 6353228111869363488;
                    arr_8 [i_0] [1] = (1278117903 & -2368720093355711830);

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_0] [i_3] = var_17;
                        var_22 = 2249484511;
                        var_23 -= ((((min((6353228111869363493 | 0), -8184117133004856303))) ? 0 : ((((!((max(8184117133004856318, -6353228111869363512)))))))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_24 *= ((((max(8184117133004856280, 19154))) ? (max(((var_6 ^ (arr_14 [3] [i_4] [i_2] [i_4] [i_4] [i_2]))), (arr_4 [i_0] [i_1] [7]))) : ((((((-(arr_12 [i_4] [i_1] [i_1])))) ? (max((arr_3 [i_0] [i_0] [i_0]), -2)) : 1261)))));
                        var_25 = (min(((((arr_10 [i_0 + 1] [i_0] [i_0] [i_0] [10]) | (((max(-2289, 47))))))), 5382433095330661679));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_18 [i_5] [i_4] [i_2] [1] [i_0] = (arr_17 [i_1] [i_0 + 1] [i_0] [i_0 + 1] [i_0]);
                            arr_19 [i_4] [18] [18] [i_4] [i_1] [i_0] = (arr_16 [i_2] [i_2] [i_2] [i_2] [i_2]);
                        }
                        arr_20 [i_2] [i_1] [i_1] [i_1] = (!1);
                        arr_21 [i_4] = 8184117133004856334;
                    }
                }
            }
        }
    }
    #pragma endscop
}
