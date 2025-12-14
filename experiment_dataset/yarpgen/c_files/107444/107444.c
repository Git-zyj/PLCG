/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max(65517, var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (max(((((!(arr_4 [i_0] [i_0]))) ? ((-5575574067998017925 ? (arr_5 [i_0] [i_1 - 1]) : var_4)) : (1 > var_8))), (((min(0, var_7))))));
                arr_7 [i_0] [i_0] [i_0] = ((var_4 ? var_8 : (((min(var_5, var_1)) | 1))));
                var_14 = (((var_5 ? var_6 : (arr_5 [i_1 + 1] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_15 = (min(var_15, (((((((1066774161 ? (arr_1 [i_0]) : -5575574067998017927))) % ((1 ? 18 : var_6))))))));
                            var_16 = (max(var_16, 17179869183));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_17 = ((+((((((arr_13 [i_1] [12] [i_0]) ^ var_2))) ? ((-107 ? 0 : (arr_0 [i_0]))) : (((arr_11 [i_0] [i_0] [i_0] [i_0]) & 6479))))));
                    var_18 = ((var_11 ? (arr_2 [i_0] [i_0]) : (((((11 ? var_9 : 32768))) ? (((2454983856133494507 ? (arr_4 [i_0] [i_0]) : 65520))) : (arr_3 [i_0])))));
                }
                for (int i_5 = 4; i_5 < 14;i_5 += 1)
                {
                    arr_16 [i_0] [i_1] [i_0] = ((((((!1) ? (arr_9 [i_0] [i_1]) : var_5))) ? 21 : (((!var_5) ? (min((arr_3 [i_5]), (arr_0 [i_0]))) : (-2474758247526236628 || var_6)))));
                    var_19 -= (max(((((arr_3 [i_1 + 2]) ? (((max(1, var_10)))) : var_11))), ((((((arr_3 [i_1]) & var_4))) ? var_4 : (max(16946, 10851349492103009265))))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_20 [i_0] [i_0] [i_6] [i_0] = ((((1 | (arr_18 [i_0] [i_1] [i_6]))) | (((var_6 & (236 | 1))))));
                    arr_21 [i_0] = (min((((4294967295 ? (((arr_19 [i_0]) ? var_8 : var_8)) : (((arr_12 [i_0] [i_0] [i_0]) ? -19504 : var_2))))), (min(((min(var_12, var_12))), (((arr_2 [i_0] [i_0]) - var_3))))));
                    arr_22 [i_0] [1] [i_0] = min(var_11, var_6);
                    var_20 = (((((((arr_12 [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : var_8))) ? ((65511 ? var_12 : (arr_14 [i_0] [i_1] [i_1] [i_0]))) : (((!(arr_1 [i_6])))))));
                }
            }
        }
    }
    #pragma endscop
}
