/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_11));
    var_13 = var_0;
    var_14 = (min(var_14, var_10));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = ((var_0 ? (arr_0 [i_0]) : ((((-7790473592252361818 <= (arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_15 = (arr_9 [i_3] [11] [i_0]);
                        arr_14 [i_3] [13] [i_1] [i_0] = (((arr_13 [i_0] [i_1] [i_0] [i_0]) ? (arr_8 [i_0] [i_1] [i_2]) : (arr_8 [i_0] [i_1] [i_3])));
                        var_16 = (min(var_16, (((arr_9 [i_0] [i_2] [i_2]) < (((((arr_9 [2] [i_3] [1]) + 2147483647)) << (16 - 16)))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_22 [i_0] [i_6] [i_5] [i_5] = -var_11;
                        var_17 = (~var_0);
                        arr_23 [1] [4] [i_5] [4] = ((((var_6 ? (arr_17 [i_6] [i_5] [i_0]) : var_6)) >= -var_8));
                    }
                }
            }
        }
        var_18 = (min(var_18, ((((arr_13 [i_0] [i_0] [i_0] [i_0]) ? (arr_13 [i_0] [i_0] [14] [i_0]) : (arr_13 [18] [i_0] [i_0] [4]))))));
        arr_24 [i_0] [i_0] = (arr_11 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_7 = 4; i_7 < 10;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 7;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    var_19 = (min(var_19, ((((arr_18 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_7]) && (arr_21 [i_7 - 2] [i_7 - 2] [i_9] [i_9]))))));
                    var_20 = (((((var_0 ? (((((arr_33 [2] [7] [i_7]) != var_4)))) : (arr_29 [i_7 - 3] [i_7 - 1] [i_7 - 2])))) ? var_1 : ((-(arr_15 [i_7] [i_8 + 3])))));
                    var_21 = -var_5;
                }
            }
        }
        arr_34 [i_7] [i_7] = (((min((arr_9 [i_7 - 3] [8] [i_7 - 4]), (arr_9 [i_7 - 3] [i_7] [i_7 - 3]))) <= (min((arr_9 [i_7 + 1] [i_7] [i_7 - 2]), (arr_9 [i_7 - 2] [i_7 - 2] [i_7 - 2])))));
    }
    #pragma endscop
}
