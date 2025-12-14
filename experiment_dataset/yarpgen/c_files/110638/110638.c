/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = ((+((7 ? (((var_7 ? (arr_3 [i_0] [i_1] [i_2]) : 246))) : var_13))));
                    var_15 = (arr_2 [i_0] [i_0]);
                    var_16 = ((-(562949953421311 | 70)));
                    var_17 = (((!80) ? ((((min(var_12, -27))) ? ((6854643894215802047 ? -6854643894215802047 : (arr_1 [i_1]))) : (((var_11 ? 0 : var_1))))) : (((((((arr_8 [i_0]) <= -6854643894215802051)) || (0 && var_11)))))));
                    var_18 = (max(var_18, (((~((min(var_3, (arr_3 [i_0] [16] [i_0])))))))));
                }
            }
        }
    }
    var_19 = ((((((var_3 ? var_3 : var_4)) + var_10))));
    var_20 &= (var_10 << (((var_13 + 3546864462857991310) - 2)));
    #pragma endscop
}
