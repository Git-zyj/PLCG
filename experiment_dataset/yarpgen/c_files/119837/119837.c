/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [1] = (((-2147483647 - 1) * (((((var_4 ? var_1 : 149)) >= (arr_2 [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [i_0] = ((((arr_6 [i_0] [i_1 + 2] [i_3 + 1] [i_3 - 3]) ? (arr_6 [i_0] [i_1 + 3] [i_3 - 1] [i_3 - 3]) : (arr_6 [i_1] [i_1 + 1] [i_3 + 1] [i_3 - 1]))));
                            var_11 = (((((((var_10 ? (arr_2 [i_1]) : var_7)) > (arr_0 [i_0]))))) <= var_1);

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_4] = (((max((arr_8 [i_1 - 1]), (arr_8 [i_1 + 3])))) ? (min((arr_8 [i_1 + 2]), (arr_8 [i_1 + 1]))) : -42);
                                var_12 = (((arr_6 [i_0] [i_0] [i_0] [i_0]) < (~17899862794634265941)));
                                var_13 = var_4;
                                var_14 = var_3;
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                var_15 = (max(((217 ? 5341932414572392989 : (116 / 7641240555022892727))), ((((arr_3 [i_1] [i_1]) ? (arr_6 [i_3 - 3] [i_1 + 1] [i_1 - 1] [i_1 + 1]) : ((max((arr_18 [i_0]), var_9))))))));
                                arr_19 [i_0] [14] [i_0] [i_0] [i_0] [i_0] = ((!(~154988143)));
                            }
                        }
                    }
                }
                var_16 = ((((((((var_6 ? var_0 : var_0))) ? (arr_2 [i_1]) : (arr_3 [i_0] [i_0])))) ? 17893592805000418777 : ((((min(1886970888, (arr_10 [i_1] [i_1] [i_1 + 3] [i_1] [i_1 + 2] [i_1])))) ? ((var_2 ? var_3 : (arr_6 [i_0] [i_0] [i_1] [i_0]))) : (arr_7 [i_1 + 3] [i_1 - 1] [i_1 + 2] [i_1 + 1])))));
            }
        }
    }
    var_17 = 18446744073709551612;
    #pragma endscop
}
