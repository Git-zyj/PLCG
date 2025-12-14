/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_11));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((((((-(arr_5 [i_0] [i_0] [i_0])))) ? (((1 ? (((max(var_10, (arr_3 [i_0] [i_0]))))) : -var_8))) : (((((var_6 ? var_6 : var_4))) ? (arr_1 [i_1] [i_2]) : (arr_1 [i_0 - 1] [i_0 - 1]))))))));
                    var_14 = (min(var_14, var_6));
                }
            }
        }
    }
    var_15 = ((((1 ? -1 : 7624254393732066648))) ? 81 : 1075120024);
    var_16 = (max(var_16, var_9));
    #pragma endscop
}
