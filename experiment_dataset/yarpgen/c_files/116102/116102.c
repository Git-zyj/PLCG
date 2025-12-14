/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(-var_14, ((-var_14 ? var_14 : var_11))));
    var_17 = -1914;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            var_18 = (max(var_18, (((((var_1 >> (((arr_4 [i_0] [i_0] [i_0]) - 4134232849))))) && (arr_14 [i_2] [i_3 + 1] [i_4 + 1] [12])))));
                            var_19 = ((((arr_14 [i_0] [19] [i_4 + 2] [i_3 - 1]) - (arr_12 [i_0] [16] [i_4 + 1] [16] [i_3 + 1]))));
                        }
                        for (int i_5 = 1; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_5 + 2] [i_5 + 2] [i_3] [i_2] [i_3] [i_0] [i_0] = ((!((((arr_3 [i_3 + 2] [i_5 + 1]) ? ((0 ? 1914 : (arr_6 [i_0] [i_1] [i_0]))) : var_8)))));
                            var_20 = (min(var_20, (((var_15 ? var_12 : var_6)))));
                        }
                        for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_21 = (min(var_21, ((min(((((min(var_1, var_4))) ? (((var_10 ? 1933 : var_12))) : (min(var_10, var_0)))), var_1)))));
                            var_22 = (max((min(0, var_15)), (arr_5 [22] [i_6 - 1])));
                            arr_21 [i_0] [i_3] [i_0] [i_2] [0] [i_6] = ((((((min(1912, 1913))))) ? var_12 : var_13));
                        }
                        var_23 = (~((var_3 ? (((max(-1934, var_5)))) : ((-(arr_2 [22]))))));
                    }
                    arr_22 [i_0] [i_1] [i_2] [i_2] = (max((var_3 && 1933), var_1));
                    var_24 = (min(var_24, (arr_18 [i_2] [6] [4])));
                }
            }
        }
    }
    var_25 |= var_6;
    #pragma endscop
}
