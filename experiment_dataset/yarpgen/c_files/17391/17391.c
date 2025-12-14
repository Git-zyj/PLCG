/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_11 << ((((((min(-64, 1))) + 93)) - 23))))) ? (16256 - 597866107) : (1 <= var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (arr_2 [i_0])));
                var_21 *= var_4;
                var_22 &= ((~(min((1 && 15), (max(var_13, var_2))))));
                arr_5 [i_0] [i_0] = (((((-(arr_3 [i_0])))) < ((var_1 - (((min(1, 53934))))))));
            }
        }
    }
    var_23 = (36028797018832896 - 62913);
    var_24 = var_18;
    #pragma endscop
}
