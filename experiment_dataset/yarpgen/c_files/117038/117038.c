/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((max(var_11, var_8)))) ? ((((!(~var_11))))) : (((max(1, var_3)) % 1))));
    var_20 = (~var_14);
    var_21 = (max(1677774355, (max((max(var_3, var_16)), var_18))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_22 = (max((!0), (arr_3 [3] [i_0] [i_1])));
                arr_5 [i_1] = ((1 << (((((((arr_1 [i_1]) ? 1 : 2617192949))) && (arr_0 [i_1 + 1]))))));
            }
        }
    }
    #pragma endscop
}
