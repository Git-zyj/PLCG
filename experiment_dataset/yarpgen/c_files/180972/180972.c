/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_1] [i_0] = arr_7 [i_1] [i_2];
                    var_12 += (((((var_0 ? (arr_2 [i_1 - 1]) : (arr_2 [i_1 + 1])))) ? (((arr_2 [i_1 - 1]) ^ (arr_2 [i_1 - 1]))) : ((var_3 ? 102 : (arr_2 [i_1 - 1])))));
                }
            }
        }
    }
    var_13 = ((((((153 % var_3) % var_3))) ? ((~((var_8 << (153 - 131))))) : (((min(var_4, var_5))))));
    var_14 |= (min((((((57487 ? var_6 : var_5))) ? (min(var_4, var_10)) : ((var_9 ? var_11 : var_10)))), var_6));
    #pragma endscop
}
