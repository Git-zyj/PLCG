/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    var_21 -= (1 >= var_18);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [12] = (((!794034218) >= (arr_1 [i_1])));
                var_22 = ((arr_2 [i_0] [5] [i_0]) + 794034218);
            }
        }
    }
    var_23 = var_17;
    var_24 = (((((var_7 | -32205) ? (!var_6) : (var_16 + var_14))) | (((((-32214 ? 364810924 : -1337628912)) ^ var_15)))));
    #pragma endscop
}
