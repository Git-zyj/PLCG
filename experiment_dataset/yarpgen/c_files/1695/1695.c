/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_0] [i_2] [i_2] = ((1 == (((((-603833496 ? 24 : (arr_5 [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_0])))) ? ((max(44250, var_14))) : ((max((arr_0 [13]), 245)))))));
                    var_19 = (((arr_3 [i_1]) || ((((2037473495 << (245 - 245)))))));
                    var_20 = ((var_6 ? (max((arr_1 [10] [i_0]), (arr_6 [i_2]))) : ((~((var_14 ^ (arr_4 [i_1] [i_1] [12])))))));
                }
            }
        }
    }
    var_21 = (max((((var_9 ? 1 : var_5))), ((max(((max(15, var_1))), ((var_14 ? var_5 : var_3)))))));
    var_22 = 44250;
    var_23 &= var_17;
    var_24 = var_7;
    #pragma endscop
}
