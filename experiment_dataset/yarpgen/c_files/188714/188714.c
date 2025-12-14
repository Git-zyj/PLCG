/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [15] = (((arr_6 [i_1] [i_1]) ? ((((arr_3 [i_1 - 2] [i_2]) < var_5))) : (((arr_4 [i_0] [i_1 - 1]) ? (max((arr_6 [i_1] [i_0]), -569365619)) : 1476182887))));
                    var_10 = -1760869470;
                }
            }
        }
    }
    var_11 |= ((max(var_6, var_8)));
    var_12 = var_6;
    var_13 += ((!((min((var_2 != var_3), 651175047)))));
    var_14 = ((min(207, -var_0)));
    #pragma endscop
}
