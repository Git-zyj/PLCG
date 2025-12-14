/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((1 > var_5) << 0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = var_13;
                                arr_10 [i_0] [i_1] [i_2] [i_0] [i_4] = (((((var_14 + ((var_0 ? (arr_2 [i_1] [i_4]) : 73))))) ? -8068504648007666539 : ((min(((max(14841, (arr_9 [i_0] [i_1] [i_0] [i_3] [i_4])))), ((var_0 ? (arr_5 [i_1] [i_0] [i_3] [i_4]) : 63)))))));
                            }
                        }
                    }
                }
                arr_11 [i_0] [i_0] [i_1] = (max((max((-448243119988214519 / 46993), ((var_5 / (arr_7 [i_0] [i_0] [i_0] [i_1]))))), (arr_7 [i_0] [i_0] [i_0] [i_0])));
                var_19 -= var_0;
                var_20 ^= (min((arr_0 [0]), (((min((arr_9 [i_0] [i_0] [2] [i_0] [i_1]), var_15))))));
            }
        }
    }
    var_21 = ((min(((min(var_8, 50))), (max(var_3, var_13)))));
    var_22 = (((((max(var_0, var_7))) | var_8)));
    var_23 = ((((max((var_12 + var_14), ((min(var_14, var_6)))))) ? (max((((var_8 ? var_13 : var_8))), ((var_11 ? 11674490149833338089 : var_10)))) : ((((var_5 < (-1 / var_14)))))));
    #pragma endscop
}
