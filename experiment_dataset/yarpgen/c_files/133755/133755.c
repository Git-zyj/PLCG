/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (min(var_0, var_12))));
    var_14 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = -2;
                var_16 = ((875240249370201495 ? (var_5 - 2516892403) : -1873190435));
                var_17 &= ((((((max(128, (arr_2 [i_0 - 1]))) + (((44 ? (arr_6 [i_0] [i_1 + 2]) : 0)))))) ? 1 : (max(-9223372036854775805, -103))));
                var_18 &= ((!((((arr_5 [i_0] [0]) ? (min(-96, 501469643)) : ((((arr_3 [i_0 - 1] [i_1 + 2]) ? (arr_1 [i_0 + 1] [i_1]) : (arr_6 [i_0 + 1] [i_1])))))))));
                var_19 = 875240249370201473;
            }
        }
    }
    var_20 = (max(7, 2498686141848676205));
    #pragma endscop
}
