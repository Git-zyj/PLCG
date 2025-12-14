/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((var_11 / -517880614668028438) / var_3)))));
    var_21 = ((var_14 <= (((!(-127 - 1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] [i_4 + 3] = (max((-127 - 1), 117));
                                var_22 = ((!((((arr_7 [21] [i_4] [i_1] [i_3] [i_3] [i_4 + 3]) ? var_3 : (var_5 & var_6))))));
                                var_23 = ((((((max(31, 1))))) ^ (arr_10 [i_0] [i_0] [i_0] [i_4])));
                            }
                        }
                    }
                    var_24 = ((192 >> (((((((((arr_7 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) || -6702440003200102396)))) ^ (min(192, var_16)))) + 1209065509898913148))));
                    arr_14 [i_0] [i_1] [i_1] = (min(((min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_1 [i_1])))), (((((767159697 ? 109 : 0))) ? (arr_10 [i_0] [i_0] [i_1] [i_2]) : (arr_3 [i_1])))));
                    var_25 |= ((((((arr_6 [i_0] [i_0] [20]) * (min(1330219783, 104))))) ? (min(((var_17 ? (arr_4 [0] [0]) : var_15)), var_4)) : (min((arr_12 [12] [i_2] [12] [12] [i_2]), (((arr_5 [i_0] [i_0]) - 80))))));
                }
            }
        }
    }
    var_26 = var_14;
    #pragma endscop
}
