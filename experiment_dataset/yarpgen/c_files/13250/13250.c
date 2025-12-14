/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0 + 2] &= (((arr_1 [1]) > ((((arr_3 [i_0] [i_0 + 2] [i_0 + 1]) && 53172)))));
                var_17 = (((arr_2 [2] [i_0 + 1] [1]) < ((1149069132 ? ((((arr_0 [i_0] [i_1]) == var_13))) : (arr_0 [i_0 + 2] [i_0 + 2])))));
            }
        }
    }
    var_18 = ((((var_12 < (var_7 + 1149069132)))));
    var_19 = (max((var_4 > var_2), (max(var_10, 2147483647))));
    #pragma endscop
}
