/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    var_21 = var_10;
    var_22 = -var_17;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_23 = ((!((max(var_3, (arr_1 [i_0]))))));
                var_24 |= ((!((((max(-29951, var_10)) + ((max(49910, 256))))))));
                var_25 ^= (arr_4 [i_0] [i_0]);
                arr_6 [i_0] [i_1] [i_0] = ((~(((((-(arr_4 [16] [i_1])))) ? 87 : (min((arr_0 [i_0]), var_15))))));
                arr_7 [9] [i_0] &= ((var_2 ? ((~(arr_4 [i_1] [i_0]))) : -82));
            }
        }
    }
    var_26 = (263 || var_18);
    #pragma endscop
}
