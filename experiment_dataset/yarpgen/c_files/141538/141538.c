/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((max(var_12, 245)))) ? ((-var_3 ? var_16 : (0 % var_10))) : ((((((~var_3) + 2147483647)) << ((((var_16 ? var_2 : var_5)) - 8916767856826903526)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] &= (max((((arr_5 [i_0] [i_0] [i_0]) | (arr_9 [i_2] [i_2 + 2] [i_1 + 3] [i_2]))), -34));
                            arr_12 [9] [i_3] [i_2] = (min(((var_5 && (arr_10 [i_1] [i_1 + 2] [i_3]))), (((arr_10 [i_1] [i_1 + 3] [i_3]) && (arr_10 [i_1] [i_1 + 3] [i_3])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            {
                                arr_19 [i_4] [i_4] = (max((max(var_0, (arr_18 [i_6] [i_6 - 1] [i_5 + 2] [i_1 + 2] [i_0]))), (((-34 ? 2943 : -1606660912)))));
                                arr_20 [i_4] [i_6] [i_6] [i_5 + 1] [i_6 - 1] [i_4] = (arr_8 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0]);
                                arr_21 [i_0] [i_0] [0] [i_0] [i_0] [i_0] [0] |= 9828;
                            }
                        }
                    }
                }

                for (int i_7 = 3; i_7 < 7;i_7 += 1)
                {
                    var_20 = (max(((-(-22461 % 16127518836160877964))), (((max(2147483647, 4236299851))))));
                    arr_24 [i_0] [i_0] [i_7 + 2] &= (((((((arr_18 [i_0] [i_0] [4] [4] [0]) % (arr_14 [6] [6]))) == var_0)) ? (arr_1 [i_0]) : (~26783)));
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    arr_29 [i_1 - 1] = (arr_22 [i_0] [i_1] [i_8] [i_8]);
                    arr_30 [i_0] [i_1 + 2] [i_1 + 2] = 4236299851;
                    arr_31 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0] = ((var_13 ? (~11) : (((~(arr_10 [i_0] [i_0] [4]))))));
                }
            }
        }
    }
    #pragma endscop
}
