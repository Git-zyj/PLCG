/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, -1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] = (((max((((var_8 / (arr_0 [i_0])))), ((2746750432 ? 1024611518 : 65535)))) | 65535));
                    arr_9 [i_1] = (arr_1 [0]);
                    var_21 = (((((65527 ? 65528 : (arr_6 [i_2] [i_1] [6] [2])))) ? (((var_1 ? (((var_5 < (arr_3 [i_0] [i_1] [i_2])))) : (!7548858449690575449)))) : ((((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? 3585844971 : var_13))) ? ((var_0 ? (arr_3 [i_2] [i_2] [i_2]) : 38)) : (arr_0 [i_1 + 4])))));
                    var_22 = (max(var_22, (-7548858449690575449 / 709122325)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [7] [i_1] [i_2] [i_3] [i_1] [i_0] = ((var_1 / (arr_1 [i_3])));
                                arr_15 [i_4] [i_1] [i_1] [i_0] = (arr_10 [i_0] [i_1] [i_1] [i_1] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, (((!((((var_2 / 65535) ? (var_1 + var_2) : (var_3 && 1)))))))));
    var_24 = (((~7548858449690575449) ? ((-1225471144 + (((2948633411 ? 1346333885 : 2948633424))))) : 709122322));
    #pragma endscop
}
