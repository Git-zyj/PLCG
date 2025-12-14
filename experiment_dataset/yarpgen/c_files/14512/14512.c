/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_14 ^= (!3758096384);
                                arr_13 [i_0] [i_1] [i_2] [i_4] [i_4] [12] [i_0] = (min((max((((arr_4 [i_3] [7]) ^ var_7)), ((max(var_8, (arr_3 [i_0])))))), ((4778489551762886656 * (arr_2 [i_0])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_20 [i_5] [17] [1] [i_5] [i_6] = (((var_4 / var_12) ? (arr_10 [i_0] [i_1] [i_6]) : -19276));
                                var_15 = (((arr_14 [i_0] [i_1] [i_2] [16]) ? (((arr_6 [i_1] [i_5] [i_6]) ? ((max((arr_0 [i_1]), (arr_7 [i_1] [i_2] [i_5])))) : ((var_13 ? var_1 : var_3)))) : (((((-1791827540 - (arr_5 [i_0] [i_5] [i_6]))) / (arr_3 [17]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = max(((var_7 | (((var_7 ? var_8 : var_2))))), (~var_0));
    var_17 = ((4778489551762886656 ? (((max(var_5, ((min(var_1, var_12))))))) : var_7));
    var_18 *= var_3;
    #pragma endscop
}
