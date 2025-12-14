/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((var_8 ? 254 : ((min(1, -31244))))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = arr_0 [i_0];
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) >= ((1 ? ((var_0 ? (arr_1 [3] [i_0]) : (arr_0 [i_0]))) : (((((arr_0 [i_0]) == 10738))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [1] [i_3] [i_4] |= ((((((arr_11 [i_0] [i_1] [i_1] [i_2] [i_1] [i_0] [i_4]) ? (min(var_11, (arr_11 [i_0] [i_1] [i_0] [i_3] [i_0] [i_4] [i_4]))) : (arr_4 [i_0])))) * ((((min(var_2, (arr_11 [i_4] [i_4] [i_3] [i_2] [i_1] [i_1] [1])))) * 0))));
                                arr_14 [i_0] [17] [i_1] [i_2] [i_2] [17] [i_2] = ((((31243 / (arr_10 [i_0] [i_3]))) <= (((((10740 ? 18446744073709551615 : 1))) ? -var_8 : ((var_1 ? (arr_4 [i_0]) : 2147483647))))));
                            }
                        }
                    }
                    var_15 = (arr_8 [19] [i_1] [18]);
                }
            }
        }
    }
    #pragma endscop
}
