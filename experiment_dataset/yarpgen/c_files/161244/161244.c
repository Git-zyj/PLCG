/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((max((var_9 + -84253412), var_6))) ? (((max(var_10, (var_8 == var_1))))) : var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [8] [8] = (arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0]);
                            var_13 = ((32767 ? ((((!-32767) << ((((-(arr_1 [i_0] [i_1]))) + 35))))) : (min((max(var_4, (arr_7 [i_2]))), (arr_6 [i_0])))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [7] [i_0] = ((min((~1), 1)));
                            var_14 = var_7;
                            arr_12 [i_2] = (arr_2 [i_3] [i_3] [i_3]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_18 [1] [i_4 - 1] [1] [i_4] [i_4] = (max(((-(((-2147483647 - 1) ? var_6 : 18446744073709551615)))), ((((32766 - (arr_4 [i_0] [0] [i_5])))))));
                            var_15 = (max(((-(((arr_5 [i_0]) / (arr_17 [i_0] [i_0] [i_1] [0] [i_5]))))), (arr_16 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1])));
                        }
                    }
                }
                arr_19 [i_0] [i_0] [i_1] = var_11;
            }
        }
    }
    var_16 = 32765;
    #pragma endscop
}
