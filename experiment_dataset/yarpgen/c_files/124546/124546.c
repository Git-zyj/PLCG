/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = ((+((((((arr_3 [i_0] [i_1] [9]) ? 35184372088831 : (arr_5 [i_2])))) ? (arr_0 [i_0] [i_0]) : (arr_5 [i_0])))));
                    arr_6 [8] [i_1] [i_1] [i_0] = (((((((arr_4 [i_0] [6] [13] [i_0]) && (arr_0 [i_0] [i_0]))))) * (((arr_4 [2] [2] [i_2] [i_2]) ? (arr_4 [i_0] [i_1] [i_0] [i_0]) : (arr_0 [i_0] [i_1])))));
                }
            }
        }
    }
    var_13 = ((var_1 != (min((min(var_1, 281474976710655)), var_4))));
    #pragma endscop
}
