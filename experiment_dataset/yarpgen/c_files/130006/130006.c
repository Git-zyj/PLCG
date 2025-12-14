/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_16, var_15));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((((min((-65 + var_7), 69))) ? (((((arr_5 [i_0]) ? (arr_6 [i_1]) : 11)) / (((-4081536279742836830 ? 1 : 1))))) : ((((((max(var_10, 2240))) == 239))))));
                    arr_9 [2] [i_1] [2] &= var_13;
                    var_19 = (~1);
                }
            }
        }
    }
    var_20 = ((((-4081536279742836830 ? ((max(var_0, 1))) : var_2))) ? 4294967295 : (max(var_16, (var_5 | var_5))));
    #pragma endscop
}
