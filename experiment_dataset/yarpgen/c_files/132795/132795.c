/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 828712372;
    var_20 = var_3;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_21 = 1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 = (arr_4 [i_2] [i_1]);
                    arr_6 [i_2] [i_1] [i_2] = var_5;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_23 = (504403158265495552 + 2147483638);

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            var_24 += (arr_12 [i_0] [i_0] [i_2 - 1]);
                            var_25 = ((((((arr_2 [i_1] [i_3] [i_4]) == (18 - var_9)))) ^ var_1));
                            var_26 = (arr_1 [i_0 + 2]);
                            var_27 = ((var_16 >= (-504403158265495561 | 54819)));
                        }
                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            var_28 = var_4;
                            var_29 = 23;
                            var_30 = (((((var_4 >= var_2) >> (-3 + 16))) * (var_15 != var_7)));
                        }
                    }
                }
            }
        }
        var_31 = ((171 != ((((var_17 ? (arr_10 [i_0] [22] [i_0]) : (arr_4 [1] [8]))) / var_6))));
    }
    #pragma endscop
}
