/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_9 ? (!var_17) : (((((37200 ? (-9223372036854775807 - 1) : 722264724))) ? 93 : 198))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_2] = (max((((arr_7 [i_1 + 1] [i_1 + 3]) ? (arr_8 [i_2] [i_2] [i_1 - 1] [i_0]) : (arr_8 [i_2] [i_2] [i_1 + 2] [i_0]))), (((!(arr_8 [i_1] [i_0] [i_1 + 2] [i_0]))))));
                    arr_10 [i_0] &= (min((((arr_7 [i_1 + 2] [i_1 + 3]) ? (arr_7 [i_1 - 1] [i_1 + 3]) : (arr_7 [i_1 + 3] [i_1 + 1]))), ((-(arr_3 [10] [i_1 - 1] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
