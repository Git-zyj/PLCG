/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_5, ((var_16 & (max(16977113621148518351, 25028))))));
    var_19 = var_7;
    var_20 = ((((min((25027 && var_11), (min(var_16, var_2))))) || ((var_16 || (79 || var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_21 &= (((min((arr_3 [i_0] [i_1]), (arr_2 [i_0]))) / (max((arr_2 [i_0]), (arr_1 [i_0] [i_1])))));
                arr_4 [i_0] &= (((arr_0 [i_0] [i_0]) * ((((((var_5 & (arr_1 [i_0] [i_1])))) < ((1 % (arr_2 [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
