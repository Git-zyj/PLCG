/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_11 != var_5) || ((max(56739, var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (((arr_0 [i_1]) > (max(var_1, (max((arr_0 [i_0]), 104))))));
                var_19 = (((((var_5 > var_7) || (((61615 ? 52735 : 13748))))) ? (arr_3 [i_0] [i_0] [i_1]) : ((18446744073709551615 ? 1 : (0 | 15)))));
            }
        }
    }
    var_20 *= ((var_8 >= ((var_1 >> (83 - 80)))));
    var_21 = 2918700874240015027;
    #pragma endscop
}
