/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 -= (max(var_0, ((-32 ? (((((arr_2 [i_0] [i_2]) < 54)))) : ((var_12 ? var_8 : 2418574743))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_16 += (((((var_9 - (arr_8 [i_2] [i_4])))) ? -var_4 : var_13));
                                var_17 = (max(var_17, var_9));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_30 [i_5] [i_7] [i_7] [i_6] [i_7] = ((-34 ? (arr_27 [i_8 + 1] [i_6] [i_7 - 1] [i_7]) : ((var_1 ? (arr_27 [i_8 + 1] [i_6] [i_7 + 1] [i_7]) : 119))));
                                arr_31 [9] [1] [i_7] [i_8] [i_9] = ((((((min(3568983823, (arr_3 [i_6] [i_9])))) != (var_4 | var_9))) ? ((((!(arr_25 [i_5] [i_8 + 1] [i_7]))))) : (((arr_17 [i_8 + 1]) ? -1 : 2418574746))));
                            }
                        }
                    }
                    var_18 *= var_5;
                }
            }
        }
    }
    var_19 = 1;
    #pragma endscop
}
