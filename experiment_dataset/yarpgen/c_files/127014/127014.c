/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (-3396864729550048413 - -3396864729550048413)));
                var_18 = (max(var_18, (((((((arr_2 [18] [i_1] [18]) ? 3107084626885290059 : (arr_2 [2] [i_0] [2])))) >= (max(var_15, ((((-9223372036854775807 - 1) != 3107084626885290049))))))))));
            }
        }
    }
    var_19 = var_2;
    var_20 = (max(var_20, (3107084626885290059 <= var_0)));
    #pragma endscop
}
