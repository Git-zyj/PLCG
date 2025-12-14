/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(-var_13, ((~(-9223372036854775807 - 1))))) | (((var_0 ? var_7 : (!23377))))));
    var_21 = var_12;
    var_22 = (~var_19);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = min(((((((arr_2 [i_0] [i_1]) || (-9223372036854775807 - 1))) || var_15))), (((~39660) ? (~25876) : -var_16)));
                    arr_8 [12] [i_0] [12] = ((((((35552 & 946) ? (-5891 > var_12) : ((max(40798, (arr_4 [i_0] [11]))))))) > var_14));
                }
            }
        }
    }
    #pragma endscop
}
