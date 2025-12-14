/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(4294967295, -9699));
    var_13 = var_7;
    var_14 = (((~var_10) ? var_4 : (17 && 9698)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_15 += ((((((arr_3 [i_1 - 2] [i_2 - 1] [i_3]) ? (arr_6 [i_0 - 1] [i_1 - 1] [i_3 + 2]) : (arr_6 [i_0 - 2] [i_1 - 2] [i_0 - 2])))) >= (((arr_3 [i_0] [i_1 - 2] [i_1 - 2]) / (arr_6 [i_0] [i_0] [i_2])))));
                            arr_10 [i_0] [i_1 + 1] [i_2] [i_2] [i_2] [i_1 + 1] = 4294967295;
                            arr_11 [i_0 - 2] [i_1] [i_3] [i_2] = ((min((max(-1907429882, var_4), (arr_7 [i_0 - 2] [i_1 - 1] [i_3] [i_3 - 1])))));
                            var_16 += ((!((((114 ? 9699 : -118))))));
                            arr_12 [i_2] [i_2] [i_2] = ((((((arr_1 [i_0 - 2]) >= (((-114 > (arr_1 [i_0 - 3]))))))) / (arr_6 [i_1] [i_3] [i_2 + 1])));
                        }
                    }
                }
                arr_13 [i_0] = ((((((((arr_8 [i_0] [i_0] [i_0] [i_1 - 1] [i_1] [i_1]) / (arr_8 [i_0] [i_1] [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 1])))) ? (min((arr_6 [i_0] [i_0] [i_1 + 1]), (arr_5 [i_1 - 2]))) : ((var_4 ? (arr_1 [i_0]) : var_2)))) > var_4));
            }
        }
    }
    #pragma endscop
}
