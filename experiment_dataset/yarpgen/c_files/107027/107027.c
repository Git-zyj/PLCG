/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((max(16184690588109008434, 18446744073709551615)))) ? (min(((var_10 ? -121 : var_1)), ((min(var_3, var_8))))) : ((min(var_11, (var_7 - -8))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = 1;
                    var_14 = ((!((min(var_2, (arr_4 [i_2] [i_2 + 2] [i_2]))))));
                    var_15 += (min((((((157 ? var_3 : (arr_4 [i_0] [i_0] [i_0])))) ? 252 : (((arr_1 [i_2 + 1]) ? var_11 : 1709823735)))), ((var_10 ? var_0 : var_0))));
                }
            }
        }
    }
    var_16 = (((((var_2 >> ((((var_8 >> (((-127 - 1) + 142)))) - 105338684542099))))) ? var_10 : var_7));
    var_17 = var_3;
    #pragma endscop
}
