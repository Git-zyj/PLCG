/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((4225609992 ? 21127 : 11));
    var_19 = ((((max(var_14, (!148)))) ? 256293584 : var_15));
    var_20 = (min(var_11, (256293565 ^ var_16)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_0] = (max(((max(var_4, (arr_6 [i_0 + 1])))), ((52578 ? 1 : -3193507969412196748))));
                var_21 ^= (((((~var_8) ? (var_13 ^ var_3) : ((((arr_0 [i_0]) ? 256293613 : var_14))))) > 1));
            }
        }
    }
    #pragma endscop
}
