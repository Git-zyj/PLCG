/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [3] [i_1] [i_1] = (max((((arr_0 [i_0]) ? (arr_0 [i_0]) : -3)), ((var_4 ? (arr_0 [i_0]) : var_9))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((((arr_9 [0] [i_1] [i_2] [i_3] [i_4]) < 2687981226483984412)) ? ((((((var_1 ? 65535 : (arr_6 [i_0])))) ? -672576156 : var_11))) : (((arr_11 [i_0] [i_0] [i_0] [6] [i_0]) ? (arr_11 [i_0] [i_1] [i_2] [i_3] [5]) : 1604329689892585812))))));
                                var_19 = var_2;
                                var_20 = (max((((var_15 <= (arr_9 [i_4] [10] [i_2] [i_1] [i_0])))), (((!672576156) >> (((arr_5 [i_4] [i_2] [i_1] [i_0]) + 8539032752297823238))))));
                            }
                        }
                    }
                    var_21 = (((min((arr_1 [3]), (arr_1 [i_1]))) ? 1 : ((((((arr_6 [i_1]) ? var_10 : 1921998920))) ? (((127 << (3622391139 - 3622391132)))) : ((25042 ? 24 : 35030))))));
                    arr_12 [i_2] [i_1] [i_0] = (max(var_8, var_15));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_22 [i_7] [i_0] = 4;
                                arr_23 [i_6 + 2] [i_1] [1] [i_6] = 3468837143;
                                var_22 += 62;
                                var_23 = var_10;
                            }
                        }
                    }
                    arr_24 [i_0] = var_12;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_24 = (((arr_19 [i_8] [6] [i_0] [i_0]) ? (((arr_16 [1] [i_1] [i_1] [i_0]) / (arr_6 [i_0]))) : 62));
                    arr_27 [9] = (arr_9 [i_0] [1] [i_1] [i_1] [i_8]);
                }
            }
        }
    }
    var_25 = var_4;
    var_26 = (((((~((var_2 ? var_2 : 113))))) >= (max(((32767 ? var_2 : var_0)), ((min(var_13, var_13)))))));
    var_27 &= var_17;
    #pragma endscop
}
