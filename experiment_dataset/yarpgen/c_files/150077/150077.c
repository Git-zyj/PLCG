/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, 3));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 *= (min(((((((arr_6 [5] [5] [5] [i_0 - 1]) ? (arr_2 [i_2]) : var_9)) | (((arr_2 [i_0]) ? (arr_0 [18]) : (arr_3 [i_0] [i_0])))))), ((var_4 ? (((min(51697, (arr_6 [i_0] [i_1] [i_2 - 2] [i_2]))))) : -30173))));
                    arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_0] = (~var_0);
                    var_12 = (min(var_12, ((((~(~29)))))));
                    var_13 = (arr_7 [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
