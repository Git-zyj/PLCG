/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 = (max(35184372088831, 9223372036854775801));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (((((((((arr_3 [i_1] [i_1]) * var_1))) ? (52482 | -12219) : (((!(arr_1 [i_0]))))))) ? (((arr_0 [i_0]) % var_0)) : ((((arr_1 [i_0]) && (((-(arr_3 [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_0] = ((!(arr_5 [i_0] [i_0] [i_1] [i_3])));
                            arr_11 [i_0] [i_0] [i_0] = ((!((min(var_12, (arr_5 [i_0] [i_0] [i_0] [i_0 + 1]))))));
                            var_16 = (13 ? var_7 : 13);
                        }
                    }
                }
                arr_12 [i_0] [i_0] = (4294967287 ? 0 : (var_0 | 45));
                arr_13 [i_1] [i_1] [i_1] = (((((((var_0 || (arr_1 [i_0]))) ? (arr_1 [i_1]) : (max((arr_2 [i_0]), var_4))))) ? (((-131071 >= ((var_6 + (arr_3 [i_0] [i_0])))))) : -var_8));
            }
        }
    }
    var_17 = var_0;
    #pragma endscop
}
