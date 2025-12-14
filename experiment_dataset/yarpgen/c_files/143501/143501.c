/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((1504968019 ? ((((var_7 ? var_9 : 0)) * var_7)) : (max((18454 & 234), ((min(9, var_9)))))));
    var_11 *= (min((max((min(var_7, 2)), (max(var_5, var_0)))), ((((((var_7 ? var_7 : 4))) && (((var_5 ? 125 : 0))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (min(((((arr_7 [1] [i_1] [i_1]) ? var_3 : var_8))), (~-10)));
                    arr_10 [i_0] [i_1] = var_1;
                    var_12 = (-3 % 2);
                    arr_11 [i_0] = ((((((-11 && 63640) ? ((max(63, var_6))) : (((!(arr_8 [i_0] [i_0] [i_2 - 1]))))))) && 0));
                }
            }
        }
    }
    #pragma endscop
}
