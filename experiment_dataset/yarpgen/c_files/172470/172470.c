/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = ((((((((645652259 ? var_10 : var_9))) ? (arr_11 [i_0] [i_0] [i_1 - 1] [i_0] [i_3] [i_4 + 1]) : -645652265))) && (arr_3 [i_2])));
                                var_13 += ((min((var_6 == 508), ((!(arr_8 [i_1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] = ((((((arr_16 [i_0] [i_6 - 1]) ? 4025197277 : (arr_16 [i_0] [i_6 - 2])))) ? (((arr_16 [i_0] [i_6 - 2]) ? (arr_16 [i_0] [i_6 - 1]) : (arr_16 [2] [i_6 - 3]))) : (((arr_16 [i_0] [i_6 + 1]) + (arr_16 [i_0] [i_6 - 1])))));
                                var_14 = ((arr_17 [i_0] [i_0] [i_2] [i_0] [i_0]) % var_11);
                            }
                        }
                    }
                    arr_20 [i_0] [i_0] [i_0] = (min(((min(((-1777329409 ? 4194288638 : -645652259)), (((-(arr_9 [i_2] [i_1] [i_0] [i_1 + 1] [i_0]))))))), (((arr_8 [i_0]) ? (arr_14 [9] [i_1] [i_1] [i_0]) : -1777329409))));
                }
            }
        }
    }
    var_15 = ((55183 ? 645652262 : -1777329409));
    var_16 = -var_7;
    var_17 -= (min(var_7, ((((!var_4) || var_10)))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            {
                var_18 = (max(var_18, (max(13, (arr_24 [i_7] [6])))));
                var_19 ^= (max((!8106829971151037803), (((((43467 ? (arr_22 [i_7]) : (arr_22 [i_7]))) != (((71 || (arr_21 [1])))))))));
                var_20 = (((var_8 && 22061) ? (min((arr_24 [i_7] [i_7]), (arr_23 [i_7]))) : (((arr_23 [i_7]) ? (arr_23 [i_8 + 1]) : (arr_24 [i_7] [i_7])))));
            }
        }
    }
    #pragma endscop
}
