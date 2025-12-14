/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((-((-9223372036854775795 ? var_13 : -9223372036854775795)))), ((((var_14 ? var_5 : var_8))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = 9223372036854775803;
                                arr_11 [i_0] [i_0] [i_0] [8] [i_4] [i_4] = ((-9223372036854775804 ? 25 : (!var_6)));
                                var_19 &= (((((var_14 ? -11130 : var_8))) * var_13));
                                var_20 += (min((((3664557746 ? (var_5 * 120) : 21631))), (((min(var_13, 9223372036854775804)) | ((((arr_1 [i_4]) ? 127 : -21012)))))));
                            }
                        }
                    }
                    var_21 = 6;
                    var_22 = (min(var_22, ((((((-84 ? (((1 != (arr_5 [i_0] [i_1] [i_2] [i_2 - 3])))) : var_8))) ? (arr_2 [i_0 + 2]) : (((230 & 4294967289) ? ((((!(arr_4 [i_0] [i_1] [i_2]))))) : (arr_7 [i_0] [i_0] [2] [i_0]))))))));
                    var_23 = (arr_4 [i_0] [i_1] [i_2]);
                    var_24 = (min(var_24, ((((arr_9 [i_0] [i_1] [i_1] [2]) ? (min((arr_9 [i_0 - 1] [i_0 + 1] [i_1] [0]), -91186976)) : (((arr_9 [i_0 + 3] [i_1] [i_1] [2]) ? var_0 : (arr_9 [i_0 - 1] [i_0 + 3] [i_1] [0]))))))));
                }
            }
        }
    }
    #pragma endscop
}
