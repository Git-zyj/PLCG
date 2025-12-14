/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = ((((arr_4 [3] [i_1 - 2] [i_2]) & (arr_4 [6] [i_1 + 1] [11]))));
                    var_21 = (min((arr_1 [i_0 - 2] [i_0 - 1]), (arr_1 [i_0 - 2] [i_0 - 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_22 = 127;
                                var_23 = (arr_4 [i_1] [i_1 - 1] [i_1 + 1]);
                            }
                        }
                    }
                    var_24 = (arr_2 [i_0] [i_1 + 1] [i_0]);
                }
            }
        }
        var_25 -= 189;
        var_26 = (arr_10 [i_0 + 1] [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_27 = (((arr_11 [i_5] [i_5] [16] [i_5]) ^ (arr_11 [0] [6] [i_5] [i_5])));
        var_28 = (((arr_1 [i_5] [i_5]) < var_10));

        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            var_29 = (((arr_12 [i_5]) >= (arr_11 [i_6 + 2] [i_6 + 1] [i_6 + 2] [i_6])));
            var_30 = (arr_1 [i_5] [0]);
        }
    }
    var_31 = (var_3 & var_3);
    var_32 &= (((var_6 < ((-9 ? var_12 : -5)))) ? (((((9223372036854775807 ? 9 : 1))) ^ (max(var_3, -1339232377397899676)))) : (var_5 < var_11));
    #pragma endscop
}
