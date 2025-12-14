/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    var_21 = (max(var_21, (((((((var_6 / var_15) ? var_18 : ((var_13 ? var_0 : var_4))))) / ((-((var_5 ? 13296439450247495500 : var_10)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_22 = ((((~((max((arr_2 [i_1] [i_2]), 1))))) == -1723581147));
                    arr_7 [i_0] [i_0] [i_0] [1] = (((((((max(25, (arr_4 [i_0])))) || ((min(4, 96))))))) % (((arr_5 [i_0] [i_1] [i_1]) >> (((min((arr_5 [i_0] [i_0] [i_2]), (arr_3 [3] [i_1] [i_2]))) - 58164)))));
                }
            }
        }
    }
    #pragma endscop
}
