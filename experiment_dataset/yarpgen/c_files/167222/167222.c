/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((32767 ? var_3 : ((121 ? 1116457848316943151 : 189))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] = var_14;
                var_21 = (arr_3 [7] [i_1] [i_0 + 1]);
                var_22 = (((199 + -4) && ((((arr_4 [i_0 + 1]) ? (((var_3 >> (2147483647 - 2147483619)))) : ((-1361852182 ? var_15 : (arr_5 [i_0] [i_1]))))))));
                var_23 = (arr_3 [i_0 + 1] [i_0] [i_1]);
                var_24 = -64;
            }
        }
    }
    var_25 = (((1959615512 ? var_18 : -var_15)));
    #pragma endscop
}
