/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max(9223372036854775807, 3288346484))) ? (((min(181, 202)))) : 1006620826));
    var_13 &= ((((((!-19) ? ((max(22, var_10))) : var_4))) + ((536991712 ? var_10 : -5281815690100828739))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, 1006620790));
                    arr_8 [i_0] [i_0 + 1] [i_0] [i_0] = (((min((((!(arr_5 [8] [i_1] [i_1])))), (((arr_0 [i_0] [i_0]) ? (arr_7 [i_0] [i_1 - 1] [11]) : (arr_1 [i_1])))))) ? (((arr_5 [i_0] [i_1] [i_2 + 3]) ? (arr_3 [i_0] [i_1 - 1] [i_2]) : (arr_2 [i_2 - 1] [15] [i_0]))) : 1165220813);
                    arr_9 [i_0] [i_0] [i_0] = (((!0) - (arr_4 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 - 1] [i_1 + 1] [i_0] [i_3] [i_4] = (((arr_13 [i_0]) >= (min(var_6, (arr_4 [i_0] [i_2])))));
                                var_15 = (i_0 % 2 == zero) ? ((min((((15507 << ((((var_2 ? (arr_3 [i_0] [i_0] [i_2 - 3]) : (arr_5 [i_1] [i_2] [i_3]))) + 27147))))), (((17894204280481604480 | -9) * (arr_4 [i_0] [i_3])))))) : ((min((((15507 << ((((((var_2 ? (arr_3 [i_0] [i_0] [i_2 - 3]) : (arr_5 [i_1] [i_2] [i_3]))) + 27147)) - 12183))))), (((17894204280481604480 | -9) * (arr_4 [i_0] [i_3]))))));
                                var_16 = (min(var_16, 1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 -= (max(var_3, (~var_10)));
    var_18 = 26772;
    #pragma endscop
}
