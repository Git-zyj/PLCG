/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_12 ? var_7 : var_11)) <= var_4));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((-(((max(var_2, 32765))))));
                var_14 = ((arr_1 [i_0]) ? (((arr_1 [i_1]) - ((-123 ? (-127 - 1) : (arr_1 [i_1]))))) : (arr_3 [i_1] [i_1] [4]));
            }
        }
    }
    var_15 &= -1;
    var_16 = ((((max(((191 << (var_6 - 34))), (max(var_11, var_9))))) ? (((-(var_11 != var_1)))) : (((var_2 % -123) ? var_12 : (((min(var_10, 1))))))));
    var_17 = (max(var_17, ((((max(var_1, var_12)))))));
    #pragma endscop
}
