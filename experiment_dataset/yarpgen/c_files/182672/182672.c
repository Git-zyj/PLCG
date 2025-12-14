/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max(-var_3, ((var_11 ? var_6 : var_0))))) ? var_4 : var_14);
    var_18 = var_14;
    var_19 = -1720946573;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3] [i_0] [i_2] [i_0] [i_0] [i_0] = min(((1284427886 ? (arr_6 [i_1 - 2] [i_3 + 1] [i_3] [i_4 - 2]) : 255)), (min((arr_6 [i_1 - 2] [i_3 + 1] [i_3] [i_4 - 2]), -1284427892)));
                                arr_13 [i_3] [i_1] [i_3] [i_0] = (min(((((min(var_6, var_10))))), (max((((var_14 ? (arr_6 [i_0] [i_1] [i_2] [i_4]) : var_1))), (min(var_7, var_12))))));
                            }
                        }
                    }
                    var_20 = (-(arr_3 [i_0]));
                    arr_14 [i_0] [i_0] = min((((!(arr_4 [i_0] [i_2])))), (min(1284427887, (arr_11 [i_1 + 2] [i_1 + 4] [i_2 + 2]))));
                    arr_15 [i_0] [i_2] [i_0] = (((var_0 ? (((var_0 ? -1284427888 : var_16))) : ((var_12 ? 18446744073709551615 : 11180771145434160674)))) * ((var_1 ? (~var_10) : ((var_14 ? var_2 : var_12)))));
                    arr_16 [i_1] [i_0] = (-(min(((var_7 ? (arr_1 [i_0] [i_0]) : var_1)), (arr_1 [i_2] [i_2]))));
                }
            }
        }
    }
    #pragma endscop
}
