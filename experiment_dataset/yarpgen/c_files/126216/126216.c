/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 ^= ((!((max((arr_0 [i_0 + 2]), (arr_0 [i_1]))))));
                arr_4 [i_0 + 2] = ((-(((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_0 [i_0])))))));
                arr_5 [i_0 - 1] [i_1] = -8864864946122957710;
            }
        }
    }
    var_13 = (((((-(!var_10)))) ? (max((var_8 % var_4), (((var_7 ? var_7 : var_7))))) : ((max(((max(3016, 45932))), ((var_3 ? var_8 : var_9)))))));
    var_14 = var_4;
    #pragma endscop
}
