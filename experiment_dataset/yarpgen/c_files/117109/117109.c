/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [8] = (arr_0 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_10 += (min((((max((-9223372036854775807 - 1), var_5)))), 9223372036854775807));
                            arr_11 [i_0] [i_0] [i_0] [i_0] = (-9223372036854775807 - 1);
                            arr_12 [i_0] [i_2] = (max((arr_5 [i_0] [i_1] [i_2] [i_3]), (((~(arr_6 [i_0] [i_0] [i_0] [i_3 + 1]))))));
                            var_11 += (((!(((var_2 ? (arr_0 [i_2]) : (arr_8 [i_0] [i_0] [i_1] [i_2] [15])))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [14] [i_4] [14] [i_5] = 29656;
                            var_12 = ((max(29656, (arr_10 [i_4 - 2] [i_4 + 3] [i_4 + 2]))));
                            arr_19 [i_4] [i_1] [i_1] [i_4] [i_4] &= (-2147483647 - 1);
                        }
                    }
                }
            }
        }
    }
    var_13 += (((((var_3 ? (-9223372036854775807 - 1) : ((max(var_3, var_6)))))) ? var_0 : var_3));
    var_14 &= var_2;
    var_15 += (min((var_8 < var_2), var_1));
    #pragma endscop
}
