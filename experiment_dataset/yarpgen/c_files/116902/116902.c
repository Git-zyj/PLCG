/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 &= (1980705059 <= 34);
                var_16 = ((~(((~25) ? -2285 : (!9223372036854775788)))));
            }
        }
    }
    var_17 = var_3;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_18 = ((!((((((7 ? -1 : 188))) ? (arr_10 [i_4] [i_2]) : ((-34 ? var_10 : 1)))))));
                    var_19 = ((1 ? 17071 : -8181105672255730639));
                    var_20 &= var_8;
                }
            }
        }
    }
    #pragma endscop
}
