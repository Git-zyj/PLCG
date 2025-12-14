/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min(var_13, 1))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] = (((((var_4 ? var_5 : (min(15, var_10))))) ? 128 : (((arr_5 [i_2] [i_1]) | ((min(117, (arr_5 [i_2] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 *= ((((min(var_9, var_11)))));
                                var_21 = (max(var_21, (((min(194, -28))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_2] = (min(((var_17 >> (((var_15 < (arr_10 [0])))))), (((((~(arr_16 [i_6] [i_5 + 2] [i_2] [i_1])))) ? 27039 : (((var_15 || (arr_10 [i_5]))))))));
                                arr_20 [i_0] [i_1] [i_2 + 1] [i_2] [i_6] = var_15;
                                var_22 = ((min(((var_12 ? var_8 : var_4)), -17113)));
                                var_23 = (min((((var_9 ^ var_1) ? (arr_13 [i_0] [i_5 - 2]) : (((1 ? var_6 : var_15))))), (((-(((42 || (-32767 - 1)))))))));
                                var_24 = (((arr_6 [i_5 + 1] [i_2 + 1] [i_1 + 1] [i_0 - 2]) && ((((arr_6 [i_0] [i_0] [i_2] [i_6]) <= -17114)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
