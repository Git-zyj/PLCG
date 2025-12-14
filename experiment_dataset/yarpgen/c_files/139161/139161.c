/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = ((((((var_6 ? var_7 : 9223372036854775807)) ^ (-9223372036854775807 - 1))) > var_3));
    var_14 = (9115306215306142428 * (var_6 * var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 6;i_4 += 1)
                        {
                            {
                                var_15 += (var_0 >= (((9223372036854775803 && 3494085024084036143) ? 9223372036854775807 : (((max(var_7, var_0)))))));
                                var_16 = min((min((min(var_6, var_6)), (arr_1 [i_0]))), ((min((((arr_3 [i_0 - 1] [i_0 - 1] [i_0]) | 9223372036854775807)), (arr_7 [i_2])))));
                                arr_13 [2] [i_1] [3] [i_1] [i_2] [1] = (max((arr_8 [i_0 - 1] [i_0 - 1] [7] [i_3 - 1] [7]), ((min(var_8, var_7)))));
                                var_17 = (max(var_17, ((((((~(arr_11 [i_0 + 1] [i_1] [i_4 + 4])))) & (max(var_4, (var_10 * var_2))))))));
                            }
                        }
                    }
                }
                var_18 = (min(var_18, (arr_7 [i_1])));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        {
                            var_19 = var_4;
                            var_20 = (max(var_20, (arr_15 [i_0] [i_5] [i_6])));
                            var_21 -= ((-(arr_14 [i_0] [i_1] [i_0] [i_6])));
                            var_22 = var_10;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
