/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_16 = ((((var_8 > ((var_13 ? var_7 : var_3)))) && ((min(((max(var_14, var_10))), var_4)))));
                    var_17 = ((max((var_7 * var_4), (var_0 ^ var_3))));
                    var_18 = (((min((var_15 / var_7), (((1 ? 35655 : 1))))) < (((min((var_9 == var_15), (0 > 536870848)))))));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [1] [i_4] = (10 * 7368495603262775766);
                            arr_13 [i_0] [i_0] [i_0] [i_0] = var_9;
                            arr_14 [i_0] [i_1] [i_0] [i_4] [i_1] = ((var_10 << (((var_4 % var_14) ? (var_0 != var_2) : (var_14 | var_15)))));
                        }
                    }
                }
                var_19 -= var_8;
                var_20 -= (((((min(var_7, var_11))) - ((1 ? 134217727 : 1)))) << (((((var_9 > var_15) * var_12)) - 21637)));
            }
        }
    }
    var_21 &= (((35184372088831 % 1) * ((((min(var_5, var_2)))))));
    var_22 -= ((min(((min(var_6, var_10))), (min(var_10, var_9)))));
    #pragma endscop
}
