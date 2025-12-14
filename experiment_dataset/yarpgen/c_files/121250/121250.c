/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_8 ? var_1 : var_1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = ((((+((25113 ? (arr_5 [i_0] [i_1]) : (arr_6 [10] [i_0] [5]))))) > (arr_4 [i_0 + 3] [i_0] [i_2])));
                    var_18 = (min(var_18, var_16));
                    var_19 |= ((((-32003 % (arr_4 [i_0 + 2] [i_2] [i_0 - 1]))) - (min(((((arr_3 [i_2]) >= var_13))), ((36354 ? 1920240927 : var_8))))));
                }
            }
        }
    }
    var_20 = ((!(((-var_10 ? ((min(29181, 1))) : (var_16 ^ var_16))))));
    var_21 = (max((max(var_16, var_13)), var_7));
    #pragma endscop
}
