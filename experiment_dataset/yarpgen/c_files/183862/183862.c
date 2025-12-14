/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (((arr_4 [i_1] [i_2 - 2]) ? 62321 : 7));
                    arr_8 [i_0] = ((((((arr_3 [i_0] [i_1] [i_0]) | (arr_4 [i_0] [i_1])))) ? ((var_3 ? 16690846109579674640 : var_7)) : var_10));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    arr_13 [i_4] [i_4] [i_0] = var_6;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = var_3;
                                arr_20 [i_0] [i_0] [i_4] [i_0] [i_0] [i_4] = (arr_5 [i_4]);
                                arr_21 [i_0] [i_5] [i_4] [i_3] [i_0] = (i_0 % 2 == 0) ? ((((((arr_10 [i_0]) + 2147483647)) << (((((arr_10 [i_0]) + 2131979716)) - 18))))) : ((((((((arr_10 [i_0]) - 2147483647)) + 2147483647)) << (((((((((arr_10 [i_0]) - 2131979716)) - 18)) + 964122704)) - 27)))));
                                arr_22 [0] [i_5] [i_0] [22] [i_0] = (~177);
                                arr_23 [5] [i_0] [i_0] [16] [16] [i_5] [i_5] = ((var_2 & ((var_2 ? var_2 : (arr_12 [i_0] [i_0] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = ((64 ? 24096 : -8));
    var_13 = (min(((((-33 ? var_1 : var_3)) | (((4217478608 >> (77488688 - 77488666)))))), ((min(((var_6 ? 32 : var_10)), ((var_2 ? -512 : var_8)))))));
    #pragma endscop
}
