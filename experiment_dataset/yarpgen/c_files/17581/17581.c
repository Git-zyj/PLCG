/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_8 * (((((var_2 ? var_4 : var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (((((!(((1 ? -1 : 0)))))) ^ var_9));
                arr_5 [i_0] = ((((max((max(17592186044415, (arr_2 [i_1]))), (arr_4 [6] [i_1])))) ? ((-(arr_2 [i_0]))) : (((arr_2 [i_0]) ? var_6 : (var_11 != var_12)))));
                var_15 ^= (arr_0 [i_0] [i_1]);
            }
        }
    }
    var_16 = (((12 ? ((min(var_3, var_10)) : 17592186044424))));
    #pragma endscop
}
