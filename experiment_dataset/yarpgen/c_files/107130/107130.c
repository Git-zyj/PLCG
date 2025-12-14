/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max(var_8, (min(var_11, ((var_7 ? var_10 : -11)))));
    var_16 = 3618925905659795419;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [13] = 8191;
                            var_17 = 208;
                            arr_12 [i_0] [i_0] [13] = ((((min(var_11, var_6))) ? var_2 : 5873969144430282709));
                            var_18 = (min((max((min((-2147483647 - 1), var_9)), 1)), (((var_1 ? 157 : var_11)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_19 = 11;
                                var_20 = (max((min((min(12985975361972652709, 24576)), 7111)), ((var_2 ? 99 : var_3))));
                                var_21 = (min(var_21, ((min(((-1905896210 ? 7 : -18980)), (max(1855458226, 1)))))));
                                var_22 = (max(32767, (((-2147483647 - 1) ? 32765 : 32767))));
                                var_23 = ((var_1 ? (((((var_5 ? var_6 : -19))) ? -1855458227 : (min(var_5, 3888274891)))) : 1));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_24 = -1573888306;
                            var_25 = (min(var_25, ((max(((max(var_2, ((-1573888306 ? var_4 : var_7))))), (max(((406692405 ? 8724363714273600541 : 32116)), ((min(0, var_4))))))))));
                            var_26 = var_10;
                            arr_27 [i_0] [2] [i_1] [i_0] = (min(-32767, 1));
                            var_27 = (max(1463230484, (-2147483647 - 1)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
