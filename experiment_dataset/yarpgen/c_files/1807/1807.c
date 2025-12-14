/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = ((((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? ((((var_11 ? var_4 : var_2)) ^ (arr_5 [i_0]))) : (arr_0 [i_2])));

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        var_17 = (4294967293 ^ 927290423);
                        var_18 = (((arr_6 [i_0] [i_3 - 3] [0] [i_3 - 3]) ? (arr_6 [i_0] [i_3 - 1] [i_2] [i_3 - 1]) : (arr_6 [i_0] [i_3 - 3] [5] [5])));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_19 = 32103;
                        var_20 -= (var_7 > var_11);
                    }
                    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_21 = (((max((arr_1 [i_5 - 1]), (arr_12 [i_0]))) + (((arr_1 [i_5 - 1]) ? (arr_1 [i_5 + 1]) : (arr_12 [i_0])))));
                        var_22 = (max(((((~var_11) >= var_7))), (((arr_9 [i_5 + 1] [i_1] [i_2] [i_5 + 1]) ? (max((arr_6 [i_0] [i_1] [i_2] [i_5]), (arr_5 [i_0]))) : (~var_3)))));
                    }
                    for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            var_23 = (arr_5 [i_2]);
                            var_24 = ((var_8 & ((((arr_8 [i_0] [i_1] [i_2]) >= var_9)))));
                        }
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_25 = (arr_0 [i_1]);
                            var_26 = (((((((4718720235568286827 ? 3582447524 : 56531))) ? ((-1500923421 ? var_7 : var_2)) : ((((arr_6 [i_0] [i_1] [i_2] [i_6]) <= (arr_20 [i_6] [i_0] [i_2])))))) >= (max(((~(arr_8 [i_0] [i_1] [i_2]))), var_12))));
                            var_27 = (max(var_11, (arr_20 [i_0] [i_0] [i_2])));
                            var_28 = ((33553920 || ((((arr_2 [i_0]) ? ((((arr_4 [i_0]) && var_6))) : (((arr_18 [i_0] [i_0] [i_0] [i_2]) / (arr_9 [i_1] [i_2] [i_6] [i_8 - 1]))))))));
                        }
                        var_29 = ((((((arr_16 [16] [16] [i_2] [16] [i_6 + 1] [i_2]) & (arr_16 [1] [i_1] [i_2] [i_2] [i_6 - 1] [i_2])))) ? (!var_13) : (max((arr_16 [i_1] [21] [12] [19] [i_6 - 1] [i_6]), (arr_16 [i_0] [i_2] [i_2] [i_2] [i_6 - 1] [i_1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
