/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_18 = (((arr_7 [i_2] [i_1] [i_0]) ? (arr_7 [i_0] [i_1] [i_2]) : (arr_3 [i_2] [i_2])));
                    var_19 = ((!((max(9, ((-(arr_0 [i_0]))))))));
                }
                var_20 = ((((11673 ? (max((arr_3 [i_0] [i_1]), 242)) : 1971313231)) >> (-96 + 100)));
                arr_8 [i_0] [8] [i_0] |= (((max((arr_1 [4]), 7847993766716947908)) & (((((arr_1 [0]) && (arr_1 [2])))))));
                var_21 = ((!(((~(arr_6 [i_0] [i_0]))))));
            }
        }
    }
    var_22 += (~((var_2 >> (var_3 + 1898265247))));
    var_23 ^= ((!((min(((var_3 ? var_1 : -564137333)), var_9)))));
    #pragma endscop
}
