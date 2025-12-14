/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max(((var_0 ? var_10 : var_7)), var_3)) * var_10));
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    var_15 = min(((((arr_0 [i_0]) == (arr_0 [i_0])))), ((+((min((arr_6 [15] [i_0 + 1] [i_1] [i_2]), var_9))))));
                    var_16 = (max((max(((-5835131436675048120 ? var_11 : -94)), (arr_6 [i_2] [i_1] [i_0 - 1] [i_0 + 1]))), ((max((min(var_2, var_6)), (var_10 || var_11))))));
                    var_17 += var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 *= (arr_12 [i_0] [i_0] [18] [4] [i_1]);
                                arr_13 [i_2] [i_1] [2] [i_0] [i_4] [i_1] = (max((arr_11 [i_0] [i_0]), var_8));
                                arr_14 [i_0] [i_0] [i_0] [5] [i_0 - 1] = ((((((arr_8 [i_0] [i_0] [i_2] [i_0]) ? ((-(arr_12 [16] [16] [i_2] [i_2] [i_0]))) : var_0))) || ((var_12 || ((max(var_6, var_10)))))));
                                var_19 = (((arr_3 [i_0] [i_1]) + (min(var_8, (arr_7 [i_0 - 1] [i_0])))));
                            }
                        }
                    }
                }
                var_20 = var_1;
                arr_15 [i_1] [i_0] [i_1] |= ((var_3 || (arr_12 [i_0 - 1] [i_0] [i_0] [i_0] [i_1])));
                var_21 = (max((((~1) ? (arr_0 [i_0]) : (((arr_10 [12] [i_1] [i_0] [10] [10]) | var_6)))), (((arr_0 [i_0]) ? var_1 : (arr_0 [i_0])))));
            }
        }
    }
    var_22 = var_2;
    #pragma endscop
}
