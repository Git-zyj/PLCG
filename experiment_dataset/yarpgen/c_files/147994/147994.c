/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (arr_3 [i_0 - 2] [i_1] [1])));
                var_18 = (1 <= var_5);
                var_19 -= (((!4294967295) * 1));
                var_20 = (((-0 / (((max(32767, var_2)))))));
                var_21 = (max(var_21, ((min((var_12 ^ 1), (arr_2 [i_0 - 1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 4; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_18 [i_6] [i_5] [i_5] [i_3] [5] = (arr_13 [i_6] [i_2]);
                                var_22 -= ((106 ? 116 : (arr_9 [i_4 - 3] [8] [i_5 + 1])));
                                var_23 = (((1485711675 | -32739) > (((var_15 > 3376364268559653149) ? 4535471260722639895 : 7873510587373732480))));
                            }
                        }
                    }
                }
                var_24 = ((((6673264320928264618 ? (arr_10 [i_2] [16] [i_2]) : (arr_5 [18])))) > ((9223372036854775807 ? 0 : -14500361342286628380)));
                var_25 = var_1;
            }
        }
    }
    var_26 = var_5;
    var_27 = var_12;
    #pragma endscop
}
