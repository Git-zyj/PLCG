/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((var_13 && ((min((var_12 / 8519509276549276908), (var_13 || var_14))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = var_9;
                    arr_10 [i_0] [5] [i_1] [i_0] = (i_1 % 2 == 0) ? ((((arr_9 [i_0] [i_1] [i_2]) ? (((!9927234797160274718) << (((arr_9 [1] [i_1] [i_2]) - 1858085670)))) : ((min((min(var_6, var_2)), (105 != var_3))))))) : ((((arr_9 [i_0] [i_1] [i_2]) ? (((!9927234797160274718) << (((((arr_9 [1] [i_1] [i_2]) + 1858085670)) - 207520883)))) : ((min((min(var_6, var_2)), (105 != var_3)))))));
                    var_19 = (var_14 - var_13);
                    arr_11 [i_1] [i_1 - 2] [i_1 - 2] = (min(((((arr_7 [i_1] [i_1 + 1] [i_1]) * (arr_3 [i_0])))), (max((arr_6 [i_1] [i_1 - 3] [i_1 + 1] [i_1 - 2]), ((var_3 ? -338456055465746311 : var_8))))));
                }
            }
        }
    }
    var_20 = (((((var_2 ? ((max(var_5, var_5))) : ((var_13 ? var_6 : var_12))))) ? var_0 : var_6));
    #pragma endscop
}
