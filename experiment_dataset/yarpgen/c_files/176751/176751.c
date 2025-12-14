/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((((46206 == 19333) < -5988)) || (((var_7 ? -4398046511104 : (((max(var_4, 19341))))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (~0);
                var_14 = (min(var_14, ((((arr_2 [i_1 + 1]) ? ((-(arr_2 [i_1 - 1]))) : -62398)))));
                var_15 *= (max((var_11 / -15), (((!((min(var_10, var_11))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (((max(((~(arr_0 [i_0] [i_0]))), var_4)) ^ ((5971 ? (max(2147483647, -1)) : (arr_5 [i_0] [i_0] [i_3] [i_4])))));
                                var_17 = (min(var_17, (((+((((arr_9 [i_0] [i_0] [i_2]) || (((1422502305 ? var_5 : (arr_1 [i_0]))))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, (((((max(46195, var_2))) >> (var_4 - 170))))));
    var_19 = (((((var_3 ? var_4 : (!2858938639)))) && ((min(12674, var_4)))));
    #pragma endscop
}
