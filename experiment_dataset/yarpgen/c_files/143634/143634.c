/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = var_7;
                arr_5 [i_1] [i_0] [i_1] = ((((((arr_1 [6] [i_1 + 2]) ? 225 : (arr_1 [i_1] [i_1 - 1])))) ? (arr_0 [1]) : ((271990722 ? 65535 : var_2))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = ((((max((arr_11 [i_4 - 2] [i_3] [i_3] [i_2] [0] [i_0]), (arr_11 [i_0] [i_1 + 2] [i_2] [i_1] [i_4 - 3] [i_3])))) ? (((var_3 && (arr_11 [i_0] [i_0] [4] [i_2] [i_3] [i_4 + 1])))) : ((max((arr_11 [i_0] [i_1] [i_2] [i_4 - 3] [5] [i_1]), (arr_11 [i_0] [i_0] [i_1 + 2] [i_2] [i_3] [i_4]))))));
                                arr_16 [i_1] [i_1] = var_4;
                            }
                        }
                    }
                    var_13 = ((((((arr_13 [i_1 + 2] [i_2]) ? 1160763448 : 1160763471))) ^ (((arr_13 [i_1 + 1] [i_1]) ? var_2 : (arr_13 [i_1 + 1] [i_1])))));
                }
                for (int i_5 = 4; i_5 < 16;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1] [i_7] [i_1] [4] [i_5] = (((((-1160763448 ? (arr_11 [i_5 + 1] [i_1 + 2] [i_1] [11] [i_1] [i_1]) : var_7))) * ((var_8 + (arr_1 [i_6 - 1] [i_7])))));
                                var_14 = (min(var_14, 1160763448));
                                arr_26 [8] [i_1] [i_1] [i_5 - 3] [i_6] [17] = (-(min(-1160763448, (arr_8 [i_1 + 2] [i_1 + 1]))));
                            }
                        }
                    }
                    var_15 = (((arr_3 [i_1] [i_5]) ? (arr_19 [i_1 + 2]) : -1884743142112772390));
                }
                var_16 = (max((arr_13 [i_1] [i_1 - 1]), (((-(arr_15 [i_1] [i_1 - 1] [i_1] [i_1]))))));
            }
        }
    }
    var_17 = var_2;
    #pragma endscop
}
