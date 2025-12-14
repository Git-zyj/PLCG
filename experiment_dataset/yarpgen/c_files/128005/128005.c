/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 += var_11;
                                arr_12 [i_0] [i_1] = ((((((var_10 ? var_3 : 1)))) * (arr_2 [i_0])));
                            }
                        }
                    }
                }
                var_15 = ((((((arr_7 [i_0] [i_0] [i_0] [1]) ^ var_2))) ? var_4 : ((0 ? 0 : 1))));
                var_16 = ((((max(((1 ? (arr_7 [i_0] [i_0] [i_0] [i_1]) : (arr_3 [i_0] [i_1] [i_1]))), (((arr_3 [1] [i_0] [i_0]) ? 1 : var_0))))) ? (((1 >= var_12) ? var_3 : ((var_9 ? 0 : 1)))) : (((((var_12 ? (arr_8 [i_1] [i_0] [1] [i_1] [i_0] [i_0]) : var_5))) ? (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]) : (((var_13 > (arr_5 [i_0] [1] [1] [0]))))))));
                arr_13 [i_0] [i_1] = ((((arr_9 [i_0] [i_0]) ? ((var_3 ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 1)) : (var_13 | var_4))) > (1 >= var_0));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_17 = -1;
                    arr_23 [i_5] [i_6] [i_6] [i_5] = min(((min((arr_16 [1]), var_8))), (var_0 / var_4));
                    var_18 = var_8;
                    var_19 ^= arr_18 [1] [i_6] [i_7];
                    var_20 = (((arr_16 [i_5]) ? (((((var_13 ? var_9 : var_10))) ? (arr_17 [i_5]) : ((var_3 ? var_8 : var_3)))) : (((((arr_20 [i_5] [i_6 - 1] [i_7]) > (arr_20 [1] [i_6] [i_5])))))));
                }
            }
        }
    }
    var_21 = var_10;
    #pragma endscop
}
