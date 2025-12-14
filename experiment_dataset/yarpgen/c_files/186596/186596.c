/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] &= (max((((arr_3 [i_0 + 2]) ? (arr_3 [i_0 + 4]) : (arr_3 [i_0 - 1]))), ((~(arr_6 [i_0 + 1])))));
                    var_20 -= (min(((((arr_1 [i_0 + 4]) > (arr_1 [i_0 + 4])))), (min(((max(var_19, var_6))), (min(var_2, var_18))))));
                    var_21 &= ((((max(-3664838733014122298, 3841793815))) ? (!var_19) : (max(((var_14 % (arr_1 [i_2]))), (((var_5 | (arr_2 [i_1] [i_1]))))))));
                    var_22 = var_5;
                }
            }
        }
    }
    var_23 = ((~(((min(var_10, var_11)) / var_16))));
    #pragma endscop
}
