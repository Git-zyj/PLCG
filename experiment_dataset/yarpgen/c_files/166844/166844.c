/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_1] = (((arr_0 [i_1] [i_0]) ? var_5 : ((((!var_7) <= 15617)))));
                arr_8 [i_0] [i_1] [i_0] = ((~(max(0, (((arr_3 [i_1]) ^ 49902))))));
                arr_9 [i_0] &= var_6;
                var_11 = ((var_8 ? ((((arr_3 [i_1]) ? (~var_8) : (~15)))) : (((~1) ? (max(var_3, 8344)) : (arr_2 [i_0 + 1])))));
                var_12 ^= ((-(arr_1 [i_0 - 1])));
            }
        }
    }
    var_13 = (max(var_13, (((((min(5283, 127))))))));
    var_14 = (max(1, 2147483647));
    #pragma endscop
}
