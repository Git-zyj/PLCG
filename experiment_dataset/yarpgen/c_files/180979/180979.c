/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (arr_0 [i_0])));
                                arr_11 [i_2] [i_2] = ((((min((arr_10 [i_4] [9] [i_4] [i_4] [i_4] [i_4 + 4] [i_4 - 1]), (arr_10 [12] [i_4] [i_4] [i_4] [i_4] [i_4 + 4] [i_4 - 1])))) ? (~var_7) : ((9729886155570105013 ? 711 : 32767))));
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_3] = ((4294967295 ? 11 : 32767));
                                var_19 -= ((((((arr_10 [i_1] [i_1] [i_4 + 4] [i_4] [i_4 + 3] [i_4] [11]) / (((-32767 - 1) ? (arr_10 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : (arr_2 [i_4 + 2] [i_1] [i_0])))))) ? -21 : (((((var_5 - (arr_5 [i_0] [i_0] [i_0])))) + ((0 - (arr_2 [6] [0] [i_3])))))));
                            }
                        }
                    }
                    arr_13 [i_2] [i_1] [i_1] = (((arr_10 [i_1] [i_1] [i_2] [i_1] [i_2] [i_1] [6]) & ((((max((arr_4 [i_2] [i_2]), var_3))) ? (((var_4 ? 1 : var_10))) : (((arr_8 [i_2] [i_1]) ? (arr_4 [i_2] [i_1]) : -126))))));
                    var_20 = (max((((!((min(var_3, (arr_0 [i_0]))))))), ((~(~var_4)))));
                    var_21 = (((min(((max(var_2, var_2))), 16484606852497261239)) ^ var_13));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_22 = (min(var_22, var_2));
                        var_23 = (arr_9 [i_2] [i_1] [i_2] [1]);
                        var_24 = (arr_9 [2] [i_1] [i_2] [i_1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
