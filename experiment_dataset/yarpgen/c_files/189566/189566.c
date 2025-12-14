/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (min((((-(arr_2 [i_1])))), (((!(arr_3 [i_0] [i_0]))))));
                arr_6 [i_1] = 2147483647;
            }
        }
    }
    var_16 ^= var_5;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_16 [i_4] [i_3] [i_3] = (arr_8 [i_4] [i_3]);
                    arr_17 [i_3] [i_4] = var_0;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_17 = ((96 >> (max(-97, (min(var_3, 0))))));
                                var_18 *= min(var_3, 3256761742);
                                var_19 = (min(-1, (!var_11)));
                                arr_25 [i_2] [i_3 + 1] [i_3 - 1] [i_5] [i_3] = (((((arr_21 [i_2]) ? (arr_14 [i_3] [i_3 + 1] [i_3] [i_3]) : var_0)) | (var_11 & -607684394)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((max((arr_27 [5] [8] [8] [i_7]), (arr_30 [i_3 + 1] [i_4]))))));
                                var_21 = ((((2 << (var_11 - 4090319867))) & (arr_26 [i_2] [4] [i_2] [i_2] [i_2] [i_2])));
                                var_22 = 112;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
