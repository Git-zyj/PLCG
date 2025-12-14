/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 |= (((var_7 ^ var_7) ? ((((((var_7 ? -121 : 30693))) ? (((var_8 ? (arr_5 [i_0] [i_1]) : (arr_2 [i_0] [2])))) : var_10))) : (((((var_1 ? 419190363 : var_13))) ? ((((var_0 >= (arr_1 [i_0]))))) : ((~(arr_0 [i_0] [i_1])))))));
                var_15 = ((var_12 ? (arr_3 [i_0]) : (((var_9 ? (115 >= 30676) : var_13)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_16 = (((min((arr_5 [i_2] [i_3]), (~var_12))) != (arr_7 [i_0] [i_0] [i_0] [i_0])));
                            var_17 = (((var_8 + 2147483647) >> (((arr_1 [i_2]) + 130))));
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((var_0 | var_11) ? (~var_7) : (~var_6))));
    var_19 = ((+(min((var_7 ^ var_7), var_9))));
    var_20 = var_10;
    #pragma endscop
}
